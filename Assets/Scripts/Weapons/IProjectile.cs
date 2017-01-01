using System;

namespace Saitama.Weapons
{
	public interface IProjectile : ICommonObject
	{
		float Damage { get; set; }
	}
}

