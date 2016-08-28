/*
 * Copyright (C) 2016 Marco Gulino (marco AT gulinux.net)
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#include "frame.h"
using namespace std;

DPTR_IMPL(Frame) {
  cv::Mat mat;
};

Frame::Frame() : dptr()
{
}

Frame::~Frame()
{
}

Frame::ptr Frame::create(const cv::Mat& mat)
{
  ptr frame{new Frame};
  frame->d->mat = mat;
  return frame;
}

cv::Mat Frame::mat() const
{
  return d->mat;
}

QSize Frame::resolution() const
{
  return QSize{d->mat.cols, d->mat.rows};
}

std::size_t Frame::size() const
{
  return d->mat.total()* d->mat.elemSize();
}
