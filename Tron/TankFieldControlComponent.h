#pragma once
#include <BaseComponent.h>
#include <vector>


#include "TankFieldLineComponent.h"

class TankFieldControlComponent :
    public BaseComponent
{
public:
	TankFieldControlComponent() = default;
	~TankFieldControlComponent() override = default;
	TankFieldControlComponent(const TankFieldControlComponent& other) = delete;
	TankFieldControlComponent(TankFieldControlComponent&& other) noexcept = delete;
	TankFieldControlComponent& operator=(const TankFieldControlComponent& other) = delete;
	TankFieldControlComponent& operator=(TankFieldControlComponent&& other) noexcept = delete;


	void CreateLinesAndWallsFromJsonFile(const std::string& file,glm::ivec2 offset = {});

	glm::ivec2 GetPlayerStartingPosition() const { return m_playerStartPos; };
	glm::ivec2 GetEnemyStartPosition() const { return  m_EnemyStartPos; };

	void Initialize() override {};
	void FixedUpdate(const float ) override{};
	void Update(const float ) override{};
	void LateUpdate(const float ) override{};
	void Render() const override {};



private:
	
	std::vector<TankFieldLineComponent*> nm_pLines;
	int m_PathExtraSpace = 2;
	glm::ivec2 m_Offset = {};
	glm::ivec2 m_playerStartPos = {};
	glm::ivec2 m_EnemyStartPos = {};
};

