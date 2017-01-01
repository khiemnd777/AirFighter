using UnityEngine;
using System;

namespace Saitama
{
	public class RawComponent
	{
		public Type Type { get; set; }
		public MonoBehaviour Mono { get; set; }
		public Component MonoComponent { get; set; }
	}
}

