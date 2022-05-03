/* -*- c++ -*- */
/*
 * Copyright 2022 eb.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_HOWTO_SQUARE2_FF_H
#define INCLUDED_HOWTO_SQUARE2_FF_H

#include <howto/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace howto {

    /*!
     * \brief <+description of block+>
     * \ingroup howto
     *
     */
    class HOWTO_API square2_ff : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<square2_ff> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of howto::square2_ff.
       *
       * To avoid accidental use of raw pointers, howto::square2_ff's
       * constructor is in a private implementation
       * class. howto::square2_ff::make is the public interface for
       * creating new instances.
       */
      static sptr make();
    };

  } // namespace howto
} // namespace gr

#endif /* INCLUDED_HOWTO_SQUARE2_FF_H */
