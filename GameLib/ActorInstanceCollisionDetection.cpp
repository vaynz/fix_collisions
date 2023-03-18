Add to end

#ifdef FIX_MOB_COLLISION_REWORKED
BOOL CActorInstance::IgnoreCollisionNew(CActorInstance& rkTarget)
{
	if (rkTarget.GetRace() >= 30000 && rkTarget.GetRace() <= 30006) // shops
		return true;

	if (rkTarget.GetRace() == 12000) //campfire
		return true;

	if (rkTarget.IsEnemy())
	{
		return true;
	}

	return false;
}
#endif
