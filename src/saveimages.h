/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) 2015  <copyright holder> <email>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SAVEIMAGE_H
#define SAVEIMAGE_H

#include "imagehandler.h"
#include <QObject>
#include "dptr.h"
class SaveImages : public QObject, public ImageHandler
{
  Q_OBJECT
public:
    SaveImages(QObject *parent = 0);
    ~SaveImages();
    virtual void handle(const ImageDataPtr& imageData);
    enum Format { SER };
public slots:
  void setOutput(const QString &filename, Format format = SER);
  void startRecording();
  void endRecording();
  void setBuffered(bool buffered);
private:
  D_PTR
signals:
  void saveFPS(double fps);
  void savedFrames(uint64_t frames);
};

#endif // SAVEIMAGE_H