#include <vector>
#include <iostream>

typedef std::vector<
	std::pair<
		std::string,
		std::vector<
			std::string
		>
	>
> board_t;

namespace board {
	board_t normal = {
		{"GO"                   ,{"GO","GO"  ,"GO"    ,"GO"       }},
		{"MEDITERRANIAN AVENUE" ,{"MA","MTAV","MED.AV","MEDITR AV"}},
		{"COMMUNITY CHEST"      ,{"CC","CMCH","COM.CH","COMM CHST"}},
		{"BALTIC AVENUE"        ,{"BA","BTAV","BAL.AV","BALTIC AV"}},
		{"INCOME TAX"           ,{"IT","INTX","IN.TAX","INCOM TAX"}},
		{"READING RAILROAD"     ,{"RR","RERR","RDG.RR","READIN RR"}},

		{"ORIENTAL AVENUE"      ,{"OA","OTAV","ORL.AV","ORIENT AV"}},
		{"CHANCE"               ,{"CN","CHNC","CHANCE","CHANCE"   }},
		{"VERMONT AVENUE"       ,{"VA","VMAV","VER.AV","VERMNT AV"}},
		{"CONNECTICUT AVENUE"   ,{"CA","CNAV","CON.AV","CONECT AV"}},
		{"JAIL"                 ,{"JL","JAIL","JAIL"  ,"JAIL"     }},

		{"ST. CHARLES PLACE"    ,{"SC","SCPL","ST.CPL","ST CHR PL"}},
		{"ELECTRIC COMPANY"     ,{"EC","ELCP","ELC.CO","ELECTR CO"}},
		{"STATES AVENUE"        ,{"SA","STAV","STA.AV","STATES AV"}},
		{"VIRGINIA AVENUE"      ,{"VA","VGAV","VIR.AV","VIRGIN AV"}},
		{"PENNSYLVANIA RAILROAD",{"PR","PVRR","PEN.RR","PNSYLV RR"}},

		{"ST JAMES PLACE"       ,{"JP","STJP","STJM.P","ST JM PLC"}},
		{"COMMUNITY CHEST"      ,{"CC","CMCH","COM.CH","COMM CHST"}},
		{"TENNESSE AVENUE"      ,{"TA","TNAV","TEN.AV","TENNSE AV"}},
		{"NEW YORK AVENUE"      ,{"NA","NYAV","NWY.AV","NW YRK AV"}},
		{"FREE PARKING"         ,{"FP","FRPK","FR.PRK","FREEPRKNG"}},

		{"KENTUCKY AVENUE"      ,{"KA","KTAV","KNT.AV","KNTCKY AV"}},
		{"CHANCE"               ,{"CN","CHNC","CHANCE","CHANCE"   }},
		{"INDIANA AVENUE"       ,{"IA","IDAV","IND.AV","INDINA AV"}},
		{"ILLINOIS AVENUE"      ,{"IA","ILAV","ILL.AV","ILLNOS AV"}},
		{"B&O RAILROAD"         ,{"BR","BORR","B&O.RR","B&O RR"   }},
		
		{"ATLANTIC AVENUE"      ,{"AA","ATAV","ATL.AV","ATLNTC AV"}},
		{"VENTOR AVENUE"        ,{"VA","VNAV","VEN.AV","VENTOR AV"}},
		{"WATER WORKS"			,{"WW","WTWK","WTR.WK","WTR WORKS"}},
		{"MARVIN GARDENS"       ,{"MG","MVGD","MAR.GD","MARV GRDS"}},
		{"GO TO JAIL"           ,{"GJ","GOJL","GOTO.J","GOTO JAIL"}},

		{"PACIFIC AVENUE"       ,{"PA","PCAV","PAC.AV","PACIFC AV"}},
		{"SOUTH CAROLINA AVENUE",{"SA","SCAV","SOC.AV","SO CAR AV"}},
		{"COMMUNITY CHEST"      ,{"CC","CMCH","COM.CH","COMM CHST"}},
		{"PENNSYLVANIA AVENUE"  ,{"PA","PVAV","PEN.AV","PNSYLV AV"}},
		{"SHORT LINE RR"        ,{"SR","SLRR","STN.RR","SHT LN RR"}},

		{"CHANCE"               ,{"CN","CHNC","CHANCE","CHANCE"   }},
		{"PARK PLACE"           ,{"PP","PKPL","PRK.PL","PARK PLCE"}},
		{"LUXURY TAX"           ,{"LT","LXTX","LX.TAX","LUXRY TAX"}},
		{"BOARDWALK"            ,{"BW","BRDW","BRDWLK","BOARDWALK"}},
		{"GO"                   ,{"GO","GO"  ,"GO",   "GO"        }}
	};
}