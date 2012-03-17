/*
 * Spdylay - SPDY Library
 *
 * Copyright (c) 2012 Tatsuhiro Tsujikawa
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef SPDYLAY_FRAME_TEST_H
#define SPDYLAY_FRAME_TEST_H

void test_spdylay_frame_unpack_nv_spdy2();
void test_spdylay_frame_unpack_nv_spdy3();
void test_spdylay_frame_pack_nv_duplicate_keys();
void test_spdylay_frame_count_nv_space();
void test_spdylay_frame_count_unpack_nv_space();
void test_spdylay_frame_pack_ping();
void test_spdylay_frame_pack_goaway_spdy2();
void test_spdylay_frame_pack_goaway_spdy3();
void test_spdylay_frame_pack_syn_stream_spdy2();
void test_spdylay_frame_pack_syn_stream_spdy3();
void test_spdylay_frame_pack_syn_reply_spdy2();
void test_spdylay_frame_pack_syn_reply_spdy3();
void test_spdylay_frame_pack_headers_spdy2();
void test_spdylay_frame_pack_headers_spdy3();
void test_spdylay_frame_pack_window_update();
void test_spdylay_frame_pack_settings_spdy2();
void test_spdylay_frame_pack_settings_spdy3();
void test_spdylay_frame_nv_sort();
void test_spdylay_frame_nv_downcase();
void test_spdylay_frame_nv_2to3();
void test_spdylay_frame_nv_3to2();

#endif /* SPDYLAY_FRAME_TEST_H */
