/* -*- c++ -*- */
/*
 * Copyright 2004,2010,2012,2013 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "endian_swap_impl.h"
#include <gnuradio/io_signature.h>
#include <volk/volk.h>

namespace gr {
namespace blocks {

endian_swap::sptr endian_swap::make(size_t item_size_bytes)
{
    return gnuradio::make_block_sptr<endian_swap_impl>(item_size_bytes);
}

endian_swap_impl::endian_swap_impl(size_t item_size_bytes)
    : sync_block("endian_swap_impl",
                 io_signature::make(1, 1, item_size_bytes),
                 io_signature::make(1, 1, item_size_bytes))
{
    const int alignment_multiple = volk_get_alignment();
    set_alignment(std::max(1, alignment_multiple));
}

endian_swap_impl::~endian_swap_impl() {}

int endian_swap_impl::work(int noutput_items,
                           gr_vector_const_void_star& input_items,
                           gr_vector_void_star& output_items)
{
    const char* in = (const char*)input_items[0];
    char* out = (char*)output_items[0];

    int nbytes(output_signature()->sizeof_stream_item(0));
    switch (nbytes) {
    case 1:
        memcpy(out, in, noutput_items);
        break;
    case 2:
        memcpy(out, in, 2 * noutput_items);
        volk_16u_byteswap((uint16_t*)out, noutput_items);
        break;
    case 4:
        memcpy(out, in, 4 * noutput_items);
        volk_32u_byteswap((uint32_t*)out, noutput_items);
        break;
    case 8:
        memcpy(out, in, 8 * noutput_items);
        volk_64u_byteswap((uint64_t*)out, noutput_items);
        break;
    default:
        throw std::runtime_error("itemsize is not valid for endian_swap!");
    }

    return noutput_items;
}

} /* namespace blocks */
} /* namespace gr */
