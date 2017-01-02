using System;

namespace Saitama.Weapons
{
	public interface IProjectile : ICommonObject
	{
		int Damage { get; set; }
	}
}

