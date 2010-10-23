// Copyright (c) 2007-2010 SlimDX Group
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

//------------------------------------------------------------------------------
// <auto-generated>
//     Structs for SlimDX2.Direct3D namespace.
//     This code was generated by a tool.
//     Date : 10/23/2010 18:54:51
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using System;
using System.Runtime.InteropServices;

namespace SlimDX2.Direct3D {

    
    /// <summary>	
    /// Defines a shader macro.	
    /// </summary>	
    /// <remarks>	
    /// You can use shader macros in your shaders. The D3D_SHADER_MACRO structure defines a single shader macro as shown in the following example:	
    /// <code> D3D_SHADER_MACRO Shader_Macros[1] = { "zero", "0"  }; </code>	
    /// 	
    /// The following shader or effect creation functions take an array of shader macros as an input parameter:{{D3D10CompileShader}}{{D3DX10CreateEffectFromFile}}{{D3DX10PreprocessShaderFromFile}}{{D3DX11CreateAsyncShaderPreprocessProcessor}}	
    /// </remarks>	
    /// <unmanaged>D3D_SHADER_MACRO</unmanaged>
    public  partial struct ShaderMacro {	
        
        /// <summary>	
        /// The macro name.	
        /// </summary>	
        /// <unmanaged>const char* Name</unmanaged>
        public string Name;
        
        /// <summary>	
        /// The macro definition.	
        /// </summary>	
        /// <unmanaged>const char* Definition</unmanaged>
        public string Definition;

        // Internal native struct used for marshalling
        [StructLayout(LayoutKind.Sequential, Pack = 0 )]
        internal unsafe partial struct __Native {	
            public IntPtr Name;
            public IntPtr Definition;
		    // Method to free native struct
            internal unsafe void __MarshalFree()
            {
                if (this.Name != IntPtr.Zero)
                    Marshal.FreeHGlobal(this.Name);		
                if (this.Definition != IntPtr.Zero)
                    Marshal.FreeHGlobal(this.Definition);		
            }
        }

        // Method to marshal from native to managed struct
        internal unsafe void __MarshalFrom(ref __Native @ref)
        {            
            this.Name = ( @ref.Name == IntPtr.Zero )?null:new string((sbyte*)@ref.Name);
            this.Definition = ( @ref.Definition == IntPtr.Zero )?null:new string((sbyte*)@ref.Definition);
        }
        // Method to marshal from managed struct tot native
        internal unsafe void __MarshalTo(ref __Native @ref)
        {
            @ref.Name = ( this.Name == null )?IntPtr.Zero : Marshal.StringToHGlobalAnsi(this.Name);
            @ref.Definition = ( this.Definition == null )?IntPtr.Zero : Marshal.StringToHGlobalAnsi(this.Definition);
		
		}
    }
}
