#include "MissionEndHandler.hpp"
#include "gme/response/SignalKey.hpp"
#include "core/System.hpp"

void Handler::MissionEndHandler::Handle(UserInfo& user, DrogonCallback cb, const Json::Value& req) const
{
	Json::Value res;
	cb(newGmeOkResponse(GetGroupId(), GetAesKey(), res));
}
