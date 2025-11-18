#pragma once

#include "../GmeRequest.hpp"

RESPONSE_NS_BEGIN
struct UserClearMissionInfo : public IResponse
{
	struct Data
	{
		std::string userID;
		std::string missionID;

		void Serialize(Json::Value& v) const
		{
			v["h7eY3sAK"] = userID;
			v["j28VNcUW"] = missionID;
			// TODO
		}
	};

	const char* getGroupName() const override { return "UT1SVg59"; }

	std::vector<Data> Mst;

protected:
	size_t getRespCount() const override { return Mst.size(); }

	void SerializeFields(Json::Value& v, size_t i) const override
	{
		Mst.at(i).Serialize(v);
	}
};
RESPONSE_NS_END
