Search -->
		void BlockMovement();

Add under -->
#ifdef FIX_MOB_COLLISION_REWORKED
		BOOL IgnoreCollisionNew(CActorInstance& rkTarget);
#endif
