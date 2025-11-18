#include "MissionStartHandler.hpp"
#include "gme/response/SignalKey.hpp"
#include "core/System.hpp"
#include "gme/response/BattleGroupMst.hpp"

void Handler::MissionStartHandler::Handle(UserInfo& user, DrogonCallback cb, const Json::Value& req) const
{
	Json::Value res;

	// SignalKey
	{
		Response::SignalKey v;
		v.key = "kwlweBva";
		v.Serialize(res);
	}

	{
		Json::Value d;
		d["k9cxD7Ba"] = "100";
		res["Kz7qfSs5"] = d;
	}

    // BattleGroupMstResponse
    {
        Json::Value d;
        {
            Json::Value e;
			e["ZSf8e1MG"] = "11";           // battle group id
            e["j28VNcUW"] = "10";           // mission id
            e["VETu07N6"] = "1";            // battle order
            e["5aetPz3C"] = "0";            // first attack rate
			e["mFxqsc7Y"] = "0";            // unknown
            e["etM5TCb9"] = "0";            // boss flag
			e["Qzhp8B40"] = "101300";       // battle monster group id
            d.append(e);
        }
        {
            Json::Value e;
            e["ZSf8e1MG"] = "12";
            e["j28VNcUW"] = "10";
            e["VETu07N6"] = "2";
            e["5aetPz3C"] = "0";
            e["mFxqsc7Y"] = "0";
            e["etM5TCb9"] = "0";
            e["Qzhp8B40"] = "101301";
            d.append(e);
        }
        {
            Json::Value e;
            e["ZSf8e1MG"] = "13";
            e["j28VNcUW"] = "10";
            e["VETu07N6"] = "3";
            e["5aetPz3C"] = "0";
            e["mFxqsc7Y"] = "0";
            e["etM5TCb9"] = "0";
            e["Qzhp8B40"] = "101302";
            d.append(e);
        }
        {
            Json::Value e;
            e["ZSf8e1MG"] = "14";
            e["j28VNcUW"] = "10";
            e["VETu07N6"] = "4";
            e["5aetPz3C"] = "0";
            e["mFxqsc7Y"] = "0";
            e["etM5TCb9"] = "0";
            e["Qzhp8B40"] = "101303";
            d.append(e);
        }
        {
            Json::Value e;
            e["ZSf8e1MG"] = "15";
            e["j28VNcUW"] = "10";
            e["VETu07N6"] = "5";
            e["5aetPz3C"] = "0";
            e["mFxqsc7Y"] = "0";
            e["etM5TCb9"] = "1";
            e["Qzhp8B40"] = "101304";
            d.append(e);
        }
        res["pj41dy9g"] = d;
    }

    // BattleMonsterGroupMstResponse
    {
        Json::Value d;
        {
            Json::Value e;
            e["Qzhp8B40"] = "101300";       // battle monster group id
            e["q9I4karx"] = "start_1";      // battle monster group name
			e["o49dYfpH"] = "40401";        // monster id
            e["hZtF1s8B"] = "0";            // group order
            e["3g8PW6x0"] = "180:302";      // position
            e["i30R8TAs"] = "";             // item drop
            e["hw3L0uVj"] = "";             // unit drop
			e["5wB9SHAV"] = "";             // treasure drop
            d.append(e);
        }
        {
            Json::Value e;
            e["Qzhp8B40"] = "101301";       // battle monster group id
            e["q9I4karx"] = "start_1";      // battle monster group name
            e["o49dYfpH"] = "40401";        // monster id
            e["hZtF1s8B"] = "0";            // group order
            e["3g8PW6x0"] = "180:302";      // position
            e["i30R8TAs"] = "";             // item drop
            e["hw3L0uVj"] = "";             // unit drop
            e["5wB9SHAV"] = "";             // treasure drop
            d.append(e);
        }
        {
            Json::Value e;
            e["Qzhp8B40"] = "101302";       // battle monster group id
            e["q9I4karx"] = "start_1";      // battle monster group name
            e["o49dYfpH"] = "40401";        // monster id
            e["hZtF1s8B"] = "0";            // group order
            e["3g8PW6x0"] = "180:302";      // position
            e["i30R8TAs"] = "";             // item drop
            e["hw3L0uVj"] = "";             // unit drop
            e["5wB9SHAV"] = "";             // treasure drop
            d.append(e);
        }
        {
            Json::Value e;
            e["Qzhp8B40"] = "101303";       // battle monster group id
            e["q9I4karx"] = "start_1";      // battle monster group name
            e["o49dYfpH"] = "40401";        // monster id
            e["hZtF1s8B"] = "0";            // group order
            e["3g8PW6x0"] = "180:302";      // position
            e["i30R8TAs"] = "";             // item drop
            e["hw3L0uVj"] = "";             // unit drop
            e["5wB9SHAV"] = "";             // treasure drop
            d.append(e);
        }
        {
            Json::Value e;
            e["Qzhp8B40"] = "101304";       // battle monster group id
            e["q9I4karx"] = "start_1";      // battle monster group name
            e["o49dYfpH"] = "40401";        // monster id
            e["hZtF1s8B"] = "0";            // group order
            e["3g8PW6x0"] = "180:302";      // position
            e["i30R8TAs"] = "";             // item drop
            e["hw3L0uVj"] = "";             // unit drop
            e["5wB9SHAV"] = "";             // treasure drop
            d.append(e);
        }
        res["75t0sx9z"] = d;
    }
    
    // MonsterMstResponse
    {
        Json::Value d;
        {
            Json::Value e;
			e["o49dYfpH"] = "40401";            // monster id
			e["e7DK0FQT"] = "100";          // hp
            e["67CApcti"] = "5000";             // atk
            e["q08xLEsy"] = "5000";             // def
            e["CEeqs63b"] = "0:0:0:0:0:0";      // bad state resists
            e["iNy0ZU5M"] = "4";                // element
            e["eyUo6a8c"] = "";                 // effect frame
            e["6Aou5M9r"] = "";                 // damage frame
            e["n9h7p02P"] = "1";                // drop check cnt
            e["Najhr8m6"] = "33";               // max zel drop
            e["9FN0GAei"] = "5";                // zel drop cnt
			e["HTVh8a65"] = "21";               // max karma drop
			e["vNk2sI4X"] = "5";                // karma drop cnt
            e["9pXSKmn1"] = "5";                // wait
            e["J2hPXGo5"] = "2";                // move speed type
            e["mv4o39Uz"] = "1";                // attack move type
            e["h2L1YI90"] = "1";                // back move type
            e["XE7Yi5c3"] = "1";                // skill move type
            e["D4Y5bWK7"] = "1";                // after image
            e["oMGC3hW0"] = "1";                // max act cnt
            e["m4EK7Gt6"] = "3";                // min act cnt  
            e["6fwL59FT"] = "100.00";           // act rate
            e["i74vGUFa"] = "1";                // ai id
            e["CYk84E3W"] = "0,0";              // move offset
            e["Lkh6gYkT"] = "0,0";              // unknown
            e["pn16CNah"] = "40031";            // unit id
            e["Y6bd4fXp"] = "0,0,0";            // debuff resist
            e["2EF0d6ue"] = "";
            e["QqfI9mM4"] = "";
            d.append(e);
        }
        {
            Json::Value e;
            e["o49dYfpH"] = "12956";
            e["e7DK0FQT"] = "400000";
            e["67CApcti"] = "2500";
            e["q08xLEsy"] = "800";
            e["CEeqs63b"] = "0:0:0:0:0:0";
            e["iNy0ZU5M"] = "1";
            e["n9h7p02P"] = "1";
            e["Najhr8m6"] = "33";
            e["9FN0GAei"] = "5";
            e["HTVh8a65"] = "21";
            e["vNk2sI4X"] = "5";
            e["9pXSKmn1"] = "5";
            e["J2hPXGo5"] = "2";
            e["mv4o39Uz"] = "1";
            e["h2L1YI90"] = "1";
            e["XE7Yi5c3"] = "1";
            e["D4Y5bWK7"] = "1";
            e["oMGC3hW0"] = "4";
            e["m4EK7Gt6"] = "3";
            e["6fwL59FT"] = "100.00";
            e["i74vGUFa"] = "20017";
            e["F4bQ7r8C"] = "@2000143:1@2000147:1@2000148:1@2000144:1@2000145:1@2000146:1@2000141:1@2000140:1";
            e["CYk84E3W"] = "0,0";
            e["Lkh6gYkT"] = "0,0";
            e["pn16CNah"] = "1000";
            e["Y6bd4fXp"] = "0,0,0";
            d.append(e);
        }
        res["U0v5IeJo"] = d;
    }

	// UnitSkillMstResponse
    {
        Json::Value d;
        {
            Json::Value e;
            e["nj9Lw7mV"] = "2000143";      // skill id
            e["0nxpBDz2"] = "MST_SKILLS_2000143_NAME"; // skill name
            e["h6UL9A1B"] = "3";            // skill type
            e["AR7y0sY4"] = "4";            // skill rank
            e["hjAy9St3"] = "1@5";          // process id
            e["moWQ30GH"] = "2@3";          // target type
            e["IZt73kLG"] = "1@1";          // target area
            e["I7cmtqW8"] = "1";            // move flag
            e["K2i8emcH"] = "1";            // attack motion flag
            e["diGe6u21"] = "60";           // name disp frame
            e["eyUo6a8c"] = "10:121:1,10:150:1,30:121:1,36:140:1,48:121:1,54:140:1,66:121:1,70:121:1,75:140:1,78:160:1"; // effect frame
            e["qYCx73y2"] = "0@0";          // start frame
            e["6Aou5M9r"] = "16:10:2:2,36:35:2:2,54:20:2:2,72:10:2:2,76:10:2:2,80:5:2:2,106:10:2:2@0:100:2:1";  // damage frame
            e["n9h7p02P"] = "1";            // drop check cnt
            e["9pXSKmn1"] = "5";            // wait
            e["iNy0ZU5M"] = "0";            // element
            e["qp37xTDh"] = "";
            e["ToZj4zyn"] = "0";            // ?
            e["57BsydKH"] = "1";            // log type
            e["R8uaKdbf"] = ",,";           // parse log info
            d.append(e);
        }

        {
			Json::Value e;
			e["nj9Lw7mV"] = "2000147";
			e["0nxpBDz2"] = "MST_SKILLS_2000147_NAME";
			e["h6UL9A1B"] = "3";
			e["AR7y0sY4"] = "4";
			e["hjAy9St3"] = "1@5";
			e["moWQ30GH"] = "2@3";
			e["IZt73kLG"] = "2@1";
			e["I7cmtqW8"] = "1";
			e["K2i8emcH"] = "1";
			e["diGe6u21"] = "60";
			e["eyUo6a8c"] = "19:110011:1,26:1000:1,20:121:1,41:121:1,62:121:1,84:121:1,94:121:1,104:121:1,46:170:1";
			e["qYCx73y2"] = "0@0";
			e["6Aou5M9r"] = "26:10:2:2,47:10:2:2,68:11:2:2,90:12:2:2,100:13:2:2,110:14:2:2,120:15:2:2,130:15:2:2@0:100:2:1";
			e["n9h7p02P"] = "1";
			e["9pXSKmn1"] = "5";
			e["iNy0ZU5M"] = "0";
			e["qp37xTDh"] = "";
			e["ToZj4zyn"] = "0";
			e["57BsydKH"] = "1";
			e["R8uaKdbf"] = ",,";
			d.append(e);
        }

        {
			Json::Value e;
			e["nj9Lw7mV"] = "2000148";
			e["0nxpBDz2"] = "MST_SKILLS_2000148_NAME";
			e["h6UL9A1B"] = "3";
			e["AR7y0sY4"] = "4";
			e["hjAy9St3"] = "1@5";
			e["moWQ30GH"] = "2@3";
			e["IZt73kLG"] = "2@1";
			e["I7cmtqW8"] = "1";
			e["K2i8emcH"] = "1";
			e["diGe6u21"] = "60";
			e["eyUo6a8c"] = "19:110011:1,26:1000:1,20:121:1,41:121:1,62:121:1,84:121:1,94:121:1,104:121:1,46:170:1";
			e["qYCx73y2"] = "0@0";
			e["6Aou5M9r"] = "26:10:2:2,47:10:2:2,68:11:2:2,90:12:2:2,100:13:2:2,110:14:2:2,120:15:2:2,130:15:2:2@0:100:2:1";
			e["n9h7p02P"] = "1";
			e["9pXSKmn1"] = "5";
			e["iNy0ZU5M"] = "0";
			e["qp37xTDh"] = "";
			e["ToZj4zyn"] = "0";
			e["57BsydKH"] = "1";
			e["R8uaKdbf"] = ",,";
			d.append(e);
        }

        {
			Json::Value e;
			e["nj9Lw7mV"] = "2000144";
			e["0nxpBDz2"] = "MST_SKILLS_2000144_NAME";
			e["h6UL9A1B"] = "3";
			e["AR7y0sY4"] = "4";
			e["hjAy9St3"] = "1";
			e["moWQ30GH"] = "2";
			e["IZt73kLG"] = "2";
			e["I7cmtqW8"] = "1";
			e["K2i8emcH"] = "1";
			e["diGe6u21"] = "60";
			e["eyUo6a8c"] = "0:100060:1,0:100060:1,87:100040:1,88:121:1,88:160:1,93:121:1,93:160:1,98:121:1,98:160:1,103:121:1,103:160:1,109:121:1,109:160:1,114:121:1,114:160:1";
			e["qYCx73y2"] = "0";
			e["6Aou5M9r"] = "10:5:2:2,35:5:2:2,60:5:2:2,85:5:2:2,110:5:2:2,94:10:2:2,99:10:2:2,104:10:2:2,109:10:2:2,114:15:2:2,119:20:2:2";
			e["n9h7p02P"] = "1";
			e["9pXSKmn1"] = "5";
			e["iNy0ZU5M"] = "0";
			e["qp37xTDh"] = "";
			e["ToZj4zyn"] = "0";
			e["57BsydKH"] = "1";
			e["R8uaKdbf"] = ",,";
			d.append(e);
        }

        {
			Json::Value e;
			e["nj9Lw7mV"] = "2000145";
			e["0nxpBDz2"] = "MST_SKILLS_2000145_NAME";
			e["h6UL9A1B"] = "3";
			e["AR7y0sY4"] = "4";
			e["hjAy9St3"] = "1@26";
			e["moWQ30GH"] = "2@3";
			e["IZt73kLG"] = "1@1";
			e["I7cmtqW8"] = "1";
			e["K2i8emcH"] = "1";
			e["diGe6u21"] = "60";
			e["eyUo6a8c"] = "10:121:1,10:150:1,30:121:1,36:140:1,48:121:1,54:140:1,66:121:1,70:121:1,75:140:1,78:160:1";
			e["qYCx73y2"] = "0@0";
			e["6Aou5M9r"] = "16:10:2:2,36:35:2:2,54:20:2:2,72:10:2:2,76:10:2:2,80:5:2:2,106:10:2:2@0:100:2:1";
			e["n9h7p02P"] = "1";
			e["9pXSKmn1"] = "5";
			e["iNy0ZU5M"] = "0";
			e["qp37xTDh"] = "";
			e["ToZj4zyn"] = "0";
			e["57BsydKH"] = "1";
			e["R8uaKdbf"] = ",,";
			d.append(e);
        }

        {
            Json::Value e;
            e["nj9Lw7mV"] = "2000141";
            e["0nxpBDz2"] = "MST_SKILLS_2000141_NAME";
            e["h6UL9A1B"] = "1";            // skill type
            e["AR7y0sY4"] = "5";            // skill rank
            e["hjAy9St3"] = "1@5";          // process id
            e["moWQ30GH"] = "2@1";          // target type
            e["IZt73kLG"] = "2@2";          // target area
            e["I7cmtqW8"] = "1";            // move flag
            e["K2i8emcH"] = "1";            // attack motion flag
            e["diGe6u21"] = "60";           // name disp frame
            e["eyUo6a8c"] = "0:700012:1,15:500250:1,19:110011:1,26:500251:1,26:1000:1,20:121:1,22:1011:1,41:121:1,62:121:1,64:1011:1,84:121:1,94:121:1,96:1011:1,104:121:1,132:1010:1,104:1000:1,150:700001:1,140:300061:1@144:400:1"; // effect frame
            e["qYCx73y2"] = "0@0";          // start frame
            e["6Aou5M9r"] = "26:10:2:2,47:10:2:2,68:10:2:2,90:10:2:2,100:10:2:2,110:10:2:2,120:10:2:2,126:10:2:2,130:10:2:4,134:10:2:4@144:100:2:1";  // damage frame
            e["n9h7p02P"] = "1";            // drop check cnt
            e["9pXSKmn1"] = "5";            // wait
            e["iNy0ZU5M"] = "0";            // element
            e["qp37xTDh"] = "";
            e["ToZj4zyn"] = "0";            // ?
            e["57BsydKH"] = "0";            // log type
            e["R8uaKdbf"] = ",,";           // parse log info
            d.append(e);
        }
        {
            Json::Value e;
            e["nj9Lw7mV"] = "2000146";
            e["0nxpBDz2"] = "MST_SKILLS_2000146_NAME";
            e["h6UL9A1B"] = "3";
            e["AR7y0sY4"] = "2";
            e["hjAy9St3"] = "7";
            e["moWQ30GH"] = "1";
            e["IZt73kLG"] = "2";
            e["I7cmtqW8"] = "1";
            e["K2i8emcH"] = "1";
            e["diGe6u21"] = "60";
            e["eyUo6a8c"] = "40:100012:1,40:541:1,60:100012:1";
            e["qYCx73y2"] = "0";
            e["6Aou5M9r"] = "100:100:2:1";
            e["n9h7p02P"] = "1";
            e["9pXSKmn1"] = "5";
            e["iNy0ZU5M"] = "0";
            e["qp37xTDh"] = "";
            e["ToZj4zyn"] = "0";
            e["57BsydKH"] = "1";
            e["R8uaKdbf"] = ",,";
            d.append(e);
        }
 
        {
            Json::Value e;
            e["nj9Lw7mV"] = "2000140";
			e["0nxpBDz2"] = "MST_SKILLS_2000140_NAME";
			e["h6UL9A1B"] = "1";
			e["AR7y0sY4"] = "5";
			e["hjAy9St3"] = "1";
			e["moWQ30GH"] = "2";
			e["IZt73kLG"] = "2";
			e["I7cmtqW8"] = "1";
			e["K2i8emcH"] = "1";
			e["diGe6u21"] = "60";
			e["eyUo6a8c"] = "19:110011:1,26:1000:1,20:121:1,41:121:1,62:121:1,84:121:1,94:121:1,104:121:1,46:170:1";
			e["qYCx73y2"] = "0";
			e["6Aou5M9r"] = "26:10:2:2,47:10:2:2,68:11:2:2,90:12:2:2,100:13:2:2,110:14:2:2,120:15:2:2,130:15:2:2";
			e["n9h7p02P"] = "1";
			e["9pXSKmn1"] = "5";
			e["iNy0ZU5M"] = "0";
			e["qp37xTDh"] = "";
			e["ToZj4zyn"] = "0";
			e["57BsydKH"] = "0";
            e["R8uaKdbf"] = ",,";
            d.append(e);
        }
        res["8aiBoHg5"] = d;
    }

    // AIMstResponse
    {
        Json::Value d;
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "1";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#act:1@skill:1@limited_act:1@skill_unuse:0@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "hp_min";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "100.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "2";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#act:2@skill:2@limited_act:1@skill_unuse:0@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "random";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "100.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "3";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#act:4@skill:3@limited_act:1@skill_unuse:0@hp_pr_over:50@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "random";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "100.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "4";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#act:6@skill:3@limited_act:1@skill_unuse:0@hp_pr_under:50@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "random";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "100.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "5";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#skill:4@limited_act:1@skill_unuse:0@hp_pr_under:50@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "random";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "100.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "6";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#skill:5@limited_act:1@skill_unuse:0@hp_pr_under:33@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "hp_min";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "100.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "7";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#skill:6@limited_act:1@hp_pr_under:33@non:0@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "hp_min";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "100.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "8";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#skill:7@actbetween:3@skill_unuse:0@non:0@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "hp_min";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "100.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "9";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#skill:8@limited_act:1@hp_pr_under:33@skill_unuse:0@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "random";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "90.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "10";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#skill:8@hp_pr_under:75@non:0@non:0@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "random";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "10.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "11";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#skill:8@hp_pr_under:50@non:0@non:0@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "random";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "10.00";       // percent
            d.append(e);
        }
        {
            Json::Value e;
            e["4eEVw5hL"] = "20017";        // ai id
            e["yu18xScw"] = "12";            // priority
            e["q7Nit8JW"] = "0:non:non:non@0:non:non:non@0:non:non:non@0:non:non:non@#skill:8@non:0@non:0@non:0@non:0@";
            e["4xctV8gF"] = "2";            // act target
            e["VBj9u0ot"] = "random";       // search term
            e["Hhgi79M1"] = "skill@-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,@1@0@0";
            e["ug9xV4Fz"] = "20.00";       // percent
            d.append(e);
        }
        res["89ausgc4"] = d;
    }

    cb(newGmeOkResponse(GetGroupId(), GetAesKey(), res));
}
