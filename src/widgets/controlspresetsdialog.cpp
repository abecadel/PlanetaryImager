/*
 * GuLinux Planetary Imager - https://github.com/GuLinux/PlanetaryImager
 * Copyright (C) 2016  Marco Gulino <marco@gulinux.net>
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

#include "controlspresetsdialog.h"
#include "ui_controlspresetsdialog.h"

using namespace std;

DPTR_IMPL(ControlsPresetsDialog) {
  shared_ptr<Ui::ControlsPresetsDialog> ui;
  Configuration &configuration;
  Imager *imager;
  ControlsPresetsDialog *q;
};

ControlsPresetsDialog::ControlsPresetsDialog(Configuration &configuration, Imager *imager, QWidget* parent)
  : QDialog{parent}, dptr(make_shared<Ui::ControlsPresetsDialog>(), configuration, imager, this)
{
    d->ui->setupUi(this);
}

ControlsPresetsDialog::~ControlsPresetsDialog()
{
}