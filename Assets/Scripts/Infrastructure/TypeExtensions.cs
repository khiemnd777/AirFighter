using System;

namespace Saitama
{
	public static class TypeExtensions
	{
		public static bool IsEqual(this Type type, Type comparedObject){
			return type == comparedObject;
		}

		public static bool IsEqual<T>(this Type type){
			return IsEqual(type, typeof(T));
		}
	}
}

