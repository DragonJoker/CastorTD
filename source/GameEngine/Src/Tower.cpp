﻿#include "Tower.hpp"

#include "Game.hpp"

namespace orastus
{
	Tower::Tower( Game & p_game )
		: m_game{ p_game }
		, m_cooldown{ p_game.GetComponent( Game::CooldownComponent ) }
		, m_damage{ p_game.GetComponent( Game::DamageComponent ) }
		, m_range{ p_game.GetComponent( Game::RangeComponent ) }
		, m_bulletSpeed{ p_game.GetComponent( Game::SpeedComponent ) }
		, m_requiredLevel{ p_game.GetComponent( Game::LevelComponent ) }
		, m_state{ p_game.GetComponent( Game::StateComponent ) }
	{
	}

	void Tower::CreateData( Entity const & p_entity
		, Milliseconds const & p_cooldown
		, uint32_t p_damage
		, float p_range
		, float p_bulletSpeed
		, uint32_t p_requiredLevel )
	{
		m_game.CreateComponentData( p_entity, m_cooldown, p_cooldown );
		m_game.CreateComponentData( p_entity, m_damage, p_damage );
		m_game.CreateComponentData( p_entity, m_range, p_range );
		m_game.CreateComponentData( p_entity, m_bulletSpeed, p_bulletSpeed );
		m_game.CreateComponentData( p_entity, m_requiredLevel, p_requiredLevel );
		m_game.CreateComponentData( p_entity, m_state, TowerState::eIdle );
	}
}
