/* -*- c++ -*- */
/*
 * Copyright 2022 eb.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_HOWTO_SQUARE2_FF_IMPL_H
#define INCLUDED_HOWTO_SQUARE2_FF_IMPL_H

#include <howto/square2_ff.h>

namespace gr {
  namespace howto {

    class square2_ff_impl : public square2_ff
    {
     private:
      // Nothing to declare in this block.

     public:
      square2_ff_impl();
      ~square2_ff_impl();

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace howto
} // namespace gr

#endif /* INCLUDED_HOWTO_SQUARE2_FF_IMPL_H */
