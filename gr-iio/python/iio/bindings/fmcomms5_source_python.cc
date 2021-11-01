/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(fmcomms5_source.h)                                         */
/* BINDTOOL_HEADER_FILE_HASH(6db6b174251b0437df60bd5d117bc5ee)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/iio/fmcomms5_source.h>
// pydoc.h is automatically generated in the build directory
#include <fmcomms5_source_pydoc.h>

void bind_fmcomms5_source(py::module& m)
{

    using fmcomms5_source = gr::iio::fmcomms5_source;


    py::class_<fmcomms5_source,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<fmcomms5_source>>(m, "fmcomms5_source", D(fmcomms5_source))

        .def(py::init(&fmcomms5_source::make),
             py::arg("uri"),
             py::arg("longfrequency1"),
             py::arg("longfrequency2"),
             py::arg("samplerate"),
             py::arg("bandwidth"),
             py::arg("ch1_en"),
             py::arg("ch2_en"),
             py::arg("ch3_en"),
             py::arg("ch4_en"),
             py::arg("ch5_en"),
             py::arg("ch6_en"),
             py::arg("ch7_en"),
             py::arg("ch8_en"),
             py::arg("buffer_size"),
             py::arg("quadrature"),
             py::arg("rfdc"),
             py::arg("bbdc"),
             py::arg("gain1"),
             py::arg("gain1_value"),
             py::arg("gain2"),
             py::arg("gain2_value"),
             py::arg("gain3"),
             py::arg("gain3_value"),
             py::arg("gain4"),
             py::arg("gain4_value"),
             py::arg("rf_port_select"),
             py::arg("filter_source") = "",
             py::arg("filter_filename") = "",
             py::arg("Fpass") = 0.0,
             py::arg("Fstop") = 0.0,
             D(fmcomms5_source, make))

        .def("set_params",
             &fmcomms5_source::set_params,
             py::arg("longfrequency1"),
             py::arg("longfrequency2"),
             py::arg("samplerate"),
             py::arg("bandwidth"),
             py::arg("quadrature"),
             py::arg("rfdc"),
             py::arg("bbdc"),
             py::arg("gain1"),
             py::arg("gain1_value"),
             py::arg("gain2"),
             py::arg("gain2_value"),
             py::arg("gain3"),
             py::arg("gain3_value"),
             py::arg("gain4"),
             py::arg("gain4_value"),
             py::arg("rf_port_select"),
             py::arg("filter_source") = "",
             py::arg("filter_filename") = "",
             py::arg("Fpass") = 0.0,
             py::arg("Fstop") = 0.0,
             D(fmcomms5_source, set_params))

        ;
}
