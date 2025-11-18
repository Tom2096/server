#include "GatchaActionHandler.hpp"
#include "gme/response/SignalKey.hpp"
#include "gme/response/UserUnitInfo.hpp"
#include "core/System.hpp"

static size_t unit_counter = 9999;                      // assign a unique userUnitID each time a unit is summoned (!!!TEMPORARY!!!)

void Handler::GatchaActionHandler::Handle(UserInfo& user, DrogonCallback cb, const Json::Value& req) const
{
	Json::Value res;

	/*
	* Request structure for summoning a unit
	*
	* req = {
	*   "1IR86sAv" : [
	*       {
	*           "324b023k" : "1",           if we used summoning ticket ?
	*           "7Ffmi96v" : "17160",       gatcha id
	*           "a329kbl8" : "1"            idx of gatcha request ?
	*       }
	*   ],
	*   ...
	* }
	*/

	// For now, hard-code the response to return unit
	Response::UserUnitInfo unitInfo;

	// Only add to user unit collection
	unitInfo.overwrite = false;
	{
		Response::UserUnitInfo::Data d;
		d.userID = user.info.userID;
		d.userUnitID = ++unit_counter;                    // ensure that this is unique
		buildUnit("Vargas", d);
		unitInfo.Mst.emplace_back(d);
	}
	unitInfo.Serialize(res);

	// Hard-coded response for OpeUserUnitResponse
	{
		Json::Value d;
		d["edy7fq3L"] = unit_counter;           // userUnitID to open -> should match the one that was just added
		d["u0vkt9yH"] = 13762;                  // Which summon gate picture to use
		//d["g30VnzQh"] = ?;                    // In IDA this is parsed as GatchaChangeRateInfo, so maybe its for specific banners?
		res["Km35HAXv"] = d;
	}

	cb(newGmeOkResponse(GetGroupId(), GetAesKey(), res));
}
