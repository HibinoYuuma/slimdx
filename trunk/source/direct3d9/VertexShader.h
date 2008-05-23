/*
* Copyright (c) 2007-2008 SlimDX Group
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/
#pragma once

#include "ShaderBytecode.h"

namespace SlimDX
{
	namespace Direct3D9
	{
		/// <summary>
		/// Represents a vertex shader.
		/// </summary>
		/// <unmanaged>IDirect3DVertexShader9</unmanaged>
		public ref class VertexShader : public ComObject
		{
			COMOBJECT(IDirect3DVertexShader9, VertexShader);

			ShaderBytecode^ m_function;

		public:
			VertexShader( Device^ device, ShaderBytecode^ function );

			/// <summary>
			/// Constructs a new instance of the <see cref="VertexShader"/> class using the specified pointer to a
			/// previously constructed unmanaged object.
			/// </summary>
			/// <param name="pointer">The unmanaged IDirect3DVertexShader9 pointer.</param>
			/// <returns>The newly constructed object.</returns>
			static VertexShader^ FromPointer( System::IntPtr pointer );

			literal int MaxDynamicFlowControlDepth = D3DVS20_MAX_DYNAMICFLOWCONTROLDEPTH;
			literal int MinDynamicFlowControlDepth = D3DVS20_MIN_DYNAMICFLOWCONTROLDEPTH;
			literal int MaxTemps = D3DVS20_MAX_NUMTEMPS;
			literal int MinTemps = D3DVS20_MIN_NUMTEMPS;
			literal int MaxStaticFlowControlDepth = D3DVS20_MAX_STATICFLOWCONTROLDEPTH;
			literal int MinStaticFlowControlDepth = D3DVS20_MIN_STATICFLOWCONTROLDEPTH;

			/// <summary>
			/// Gets the device associated with the shader.
			/// </summary>
			property SlimDX::Direct3D9::Device^ Device
			{
				SlimDX::Direct3D9::Device^ get();
			}

			property ShaderBytecode^ Function
			{
				ShaderBytecode^ get();
			}
		};
	}
}
