﻿/**
See licence file in root folder, MIT.txt
*/
#pragma once
#ifndef ___EFO_Tower_HPP___
#define ___EFO_Tower_HPP___

#include "TowerState.hpp"

namespace orastus
{
	/**
	*\brief
	*	The components used to describe a tower.
	*/
	class Tower
	{
	public:
		/**
		*\brief
		*	Constructor, retrieves the components.
		*\param[in] p_game
		*	The game instance, from which the components are retrieved.
		*/
		EFO_API Tower( Game & p_game );
		/**
		*\brief
		*	Creates the component data for a tower.
		*\param[in] p_entity
		*	The entity for the tower.
		*\param[in] p_cooldown
		*	The cooldown value.
		*\param[in] p_damage
		*	The damage value.
		*\param[in] p_range
		*	The range value.
		*\param[in] p_bulletSpeed
		*	The bullet speed value.
		*\param[in] p_requiredLevel
		*	The required level value.
		*/
		void CreateData( Entity const & p_entity
			, Milliseconds const & p_cooldown
			, uint32_t p_damage
			, float p_range
			, float p_bulletSpeed
			, uint32_t p_requiredLevel );

	private:
		Game & m_game;
		Component const & m_cooldown;
		Component const & m_damage;
		Component const & m_range;
		Component const & m_bulletSpeed;
		Component const & m_requiredLevel;
		Component const & m_state;
	};
}

#endif
