/*=========================================================================

Program:   Medical Imaging & Interaction Toolkit
Module:    $RCSfile$
Language:  C++
Date:      $Date$
Version:   $Revision$

Copyright (c) German Cancer Research Center, Division of Medical and
Biological Informatics. All rights reserved.
See MITKCopyright.txt or http://www.mitk.org/copyright.html for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notices for more information.

=========================================================================*/

#include "mitkSurfaceVtkWriter.h"
#include "mitkSurfaceVtkWriter.txx"

#include <vtkSTLWriter.h>
#include <vtkPolyDataWriter.h>

template<>
void mitk::SurfaceVtkWriter<vtkSTLWriter>::SetDefaultExtension()
{
  m_Extension = ".stl";
}

template<>
void mitk::SurfaceVtkWriter<vtkPolyDataWriter>::SetDefaultExtension()
{
  m_Extension = ".vtk";
}

template class mitk::SurfaceVtkWriter<vtkSTLWriter>;

template class mitk::SurfaceVtkWriter<vtkPolyDataWriter>;
