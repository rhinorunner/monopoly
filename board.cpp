#include <vector>
#include <iostream>

typedef std::vector<
	std::pair<
		std::string,
		std::vector<
			std::string
		>
	>
> frame;

namespace boardStates {
	frame defaultBoard = {
		{"GO"                   , {"GO","GO"  ,"GO"    ,"GO"       }},
		{"MEDITERRANIAN AVENUE" , {"MA","MTAV","MED.AV","MEDITR AV"}},
		{"COMMUNITY CHEST"      , {"CC","CMCH","COM.CH","COMM CHST"}},
		{"BALTIC AVENUE"        , {"BA","BTAV","BAL.AV","BALTIC AV"}},
		{"INCOME TAX"           , {"IT","INTX","IN.TAX","INCOM TAX"}},
		{"READING RAILROAD"     , {"RR","RERR","RDG.RR","READIN RR"}}
	};
}