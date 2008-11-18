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

#include "Enums.h"
#include "../math/Vector3.h"

namespace SlimDX
{
	namespace DirectSound
	{
		/// <summary>
		/// Contains all information necessary to uniquely describe the location, orientation, and motion of a 3-D sound buffer.
		/// </summary>
		public value class Buffer3DSettings : System::IEquatable<Buffer3DSettings>
		{
		internal:
			DS3DBUFFER ToUnmanaged();
			Buffer3DSettings( const DS3DBUFFER& value );

		public:
			/// <summary>
			/// Describes the current orientation of this 3-D buffer's sound projection cone.
			/// </summary>
			property Vector3 ConeOrientation;

			/// <summary>
			/// The cone outside volume.
			/// </summary>
			property int ConeOutsideVolume;

			/// <summary>
			/// The angle of the inside sound projection cone.
			/// </summary>
			property int InsideConeAngle;

			/// <summary>
			/// The maximum distance.
			/// </summary>
			property float MaxDistance;

			/// <summary>
			/// The minimum distance.
			/// </summary>
			property float MinDistance;

			/// <summary>
			/// The 3-D sound processing mode to be set.
			/// </summary>
			property Mode3D Mode;

			/// <summary>
			/// The angle of the outside sound projection cone.
			/// </summary>
			property int OutsideConeAngle;

			/// <summary>
			/// Describes the current position of the 3-D sound buffer.
			/// </summary>
			property Vector3 Position;

			/// <summary>
			/// Describes the current velocity of the 3-D sound buffer.
			/// </summary>
			property Vector3 Velocity;

			/// <summary>
			/// Tests for equality between two objects.
			/// </summary>
			/// <param name="left">The first value to compare.</param>
			/// <param name="right">The second value to compare.</param>
			/// <returns><c>true</c> if <paramref name="left"/> has the same value as <paramref name="right"/>; otherwise, <c>false</c>.</returns>
			static bool operator == ( Buffer3DSettings left, Buffer3DSettings right );

			/// <summary>
			/// Tests for inequality between two objects.
			/// </summary>
			/// <param name="left">The first value to compare.</param>
			/// <param name="right">The second value to compare.</param>
			/// <returns><c>true</c> if <paramref name="left"/> has a different value than <paramref name="right"/>; otherwise, <c>false</c>.</returns>
			static bool operator != ( Buffer3DSettings left, Buffer3DSettings right );

			/// <summary>
			/// Returns the hash code for this instance.
			/// </summary>
			/// <returns>A 32-bit signed integer hash code.</returns>
			virtual int GetHashCode() override;

			/// <summary>
			/// Returns a value that indicates whether the current instance is equal to a specified object. 
			/// </summary>
			/// <param name="obj">Object to make the comparison with.</param>
			/// <returns><c>true</c> if the current instance is equal to the specified object; <c>false</c> otherwise.</returns>
			virtual bool Equals( System::Object^ obj ) override;

			/// <summary>
			/// Returns a value that indicates whether the current instance is equal to the specified object. 
			/// </summary>
			/// <param name="other">Object to make the comparison with.</param>
			/// <returns><c>true</c> if the current instance is equal to the specified object; <c>false</c> otherwise.</returns>
			virtual bool Equals( Buffer3DSettings other );

			/// <summary>
			/// Determines whether the specified object instances are considered equal. 
			/// </summary>
			/// <param name="value1">The first value to compare.</param>
			/// <param name="value2">The second value to compare.</param>
			/// <returns><c>true</c> if <paramref name="value1"/> is the same instance as <paramref name="value2"/> or 
			/// if both are <c>null</c> references or if <c>value1.Equals(value2)</c> returns <c>true</c>; otherwise, <c>false</c>.</returns>
			static bool Equals( Buffer3DSettings% value1, Buffer3DSettings% value2 );
		};
	}
}