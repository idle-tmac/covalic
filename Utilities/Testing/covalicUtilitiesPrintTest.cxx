/*=========================================================================

Library:   Covalic

Copyright 2010 Kitware Inc. 28 Corporate Drive,
Clifton Park, NY, 12065, USA.

All rights reserved. 

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

=========================================================================*/
#if defined(_MSC_VER)
#pragma warning ( disable : 4786 )
#endif
#define ITK_LEAN_AND_MEAN

#include "itkImage.h"

//#include "itkTubeEnhancingDiffusion2DImageFilter.h"


int covalicUtilitiesPrintTest( int, char* [] )
{
  /*
  itk::TubeEnhancingDiffusion2DImageFilter< float, 2 >::Pointer 
       vesselEnahncingObj =
    itk::TubeEnhancingDiffusion2DImageFilter< float, 2 >::New();
  std::cout << "-------------TubeEnhancingDiffusion2DImageFilter" 
            << vesselEnahncingObj;
            */

  return EXIT_SUCCESS;
}

