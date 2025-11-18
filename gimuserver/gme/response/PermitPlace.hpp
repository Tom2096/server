#pragma once

#include "../GmeRequest.hpp"

RESPONSE_NS_BEGIN
struct PermitPlace : public IResponse
{
	struct Data
	{
		enum PlaceType {
			NONE,
			AREA,
			GATE,
			DUNGEON,
			MISSION,
			LAND
		};

		PlaceType place = NONE;
		std::string areaID, landID, gateID, dungeonID, missionID;

		explicit Data() {}

		void Serialize(Json::Value& v) const
		{
			switch (place)
			{
				case Response::PermitPlace::Data::AREA:
					v["VjCY7rX4"] = areaID;
					break;
				case Response::PermitPlace::Data::LAND:
					v["9C64Qwe0"] = landID;
					break;
				case Response::PermitPlace::Data::GATE:
					v["0Cq2AlXW"] = gateID;
					break;
				case Response::PermitPlace::Data::DUNGEON:
					v["MHx05sXt"] = dungeonID;
					break;
				case Response::PermitPlace::Data::MISSION:
					v["j28VNcUW"] = missionID;
					break;
				default:
					break;
			}
		}

		void setAreaID(const std::string& s)
		{
			if (place != PlaceType::NONE) {
				throw std::runtime_error("PermitPlaceID already set");
			}
			areaID = s;
			place = PlaceType::AREA;
		}

		void setLandID(const std::string& s)
		{
			if (place != PlaceType::NONE) {
				throw std::runtime_error("PermitPlaceID already set");
			}
			landID = s;
			place = PlaceType::LAND;
		}
		void setGateID(const std::string& s)
		{
			if (place != PlaceType::NONE) {
				throw std::runtime_error("PermitPlaceID already set");
			}
			gateID = s;
			place = PlaceType::GATE;
		}
		void setDungeonID(const std::string& s)
		{
			if (place != PlaceType::NONE) {
				throw std::runtime_error("PermitPlaceID already set");
			}
			dungeonID = s;
			place = PlaceType::DUNGEON;
		}
		void setMissionID(const std::string& s)
		{
			if (place != PlaceType::NONE) {
				throw std::runtime_error("PermitPlaceID already set");
			}
			missionID = s;
			place = PlaceType::MISSION;
		}

	};

	const char* getGroupName() const override { return "yXNM8kL3"; }

	std::vector<Data> Mst;

protected:
	size_t getRespCount() const override { return Mst.size(); }

	void SerializeFields(Json::Value& v, size_t i) const override
	{
		Mst.at(i).Serialize(v);
	}
};
RESPONSE_NS_END
