Search
		if( bUsingSkill && !rkActorEach.IsDoor() )
			continue;
		
Add after
#ifdef ENABLE_MOBS_WITHOUT_COLLISIONS
		if (rkActorSelf.IgnoreCollisionNew(rkActorEach))
			continue;
#endif