/* -*- c++ -*- */
/*
 * Copyright 2022 eb.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <gnuradio/io_signature.h>
#include "square2_ff_impl.h"

namespace gr {
  namespace howto {

    #pragma message("set the following appropriately and remove this warning")
    using input_type = float;
    #pragma message("set the following appropriately and remove this warning")
    using output_type = float;
    square2_ff::sptr
    square2_ff::make()
    {
      return gnuradio::make_block_sptr<square2_ff_impl>(
        );
    }


    /*
     * The private constructor
     */
    square2_ff_impl::square2_ff_impl()
      : gr::sync_block("square2_ff",
              gr::io_signature::make(1, 1, sizeof(input_type)),
              gr::io_signature::make(1, 1, sizeof(output_type)))
    {}

    /*
     * Our virtual destructor.
     */
    square2_ff_impl::~square2_ff_impl()
    {
    }

    int
    square2_ff_impl::work(int noutput_items,
                          gr_vector_const_void_star &input_items,
                          gr_vector_void_star &output_items)
    {
      const float *in = (const float *) input_items[0];
      float *out = (float *) output_items[0];

      for(int i = 0; i < noutput_items; i++) {
        out[i] = in[i] * in[i];
      }

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace howto */
} /* namespace gr */
