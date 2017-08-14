#include "ItemDefinitions.hpp"

// We need these for overriding viewmodels and icons
const std::map<size_t, Item_t> k_weapon_info =
{
	{WEAPON_KNIFE,{"models/weapons/v_knife_default_ct.mdl", "knife_default_ct"}},
	{WEAPON_KNIFE_T,{"models/weapons/v_knife_default_t.mdl", "knife_t"}},
	{WEAPON_KNIFE_BAYONET, {"models/weapons/v_knife_bayonet.mdl", "bayonet"}},
	{WEAPON_KNIFE_FLIP, {"models/weapons/v_knife_flip.mdl", "knife_flip"}},
	{WEAPON_KNIFE_GUT, {"models/weapons/v_knife_gut.mdl", "knife_gut"}},
	{WEAPON_KNIFE_KARAMBIT, {"models/weapons/v_knife_karam.mdl", "knife_karambit"}},
	{WEAPON_KNIFE_M9_BAYONET, {"models/weapons/v_knife_m9_bay.mdl", "knife_m9_bayonet"}},
	{WEAPON_KNIFE_TACTICAL, {"models/weapons/v_knife_tactical.mdl", "knife_tactical"}},
	{WEAPON_KNIFE_FALCHION, {"models/weapons/v_knife_falchion_advanced.mdl", "knife_falchion"}},
	{WEAPON_KNIFE_SURVIVAL_BOWIE, {"models/weapons/v_knife_survival_bowie.mdl", "knife_survival_bowie"}},
	{WEAPON_KNIFE_BUTTERFLY, {"models/weapons/v_knife_butterfly.mdl", "knife_butterfly"}},
	{WEAPON_KNIFE_PUSH, {"models/weapons/v_knife_push.mdl", "knife_push"}},
	{GLOVE_STUDDED_BLOODHOUND,{"models/weapons/v_models/arms/glove_bloodhound/v_glove_bloodhound.mdl"}},
	{GLOVE_T_SIDE,{"models/weapons/v_models/arms/glove_fingerless/v_glove_fingerless.mdl"}},
	{GLOVE_CT_SIDE,{"models/weapons/v_models/arms/glove_hardknuckle/v_glove_hardknuckle.mdl"}},
	{GLOVE_SPORTY,{"models/weapons/v_models/arms/glove_sporty/v_glove_sporty.mdl"}},
	{GLOVE_SLICK,{"models/weapons/v_models/arms/glove_slick/v_glove_slick.mdl"}},
	{GLOVE_LEATHER_WRAP,{"models/weapons/v_models/arms/glove_handwrap_leathery/v_glove_handwrap_leathery.mdl"}},
	{GLOVE_MOTORCYCLE,{"models/weapons/v_models/arms/glove_motorcycle/v_glove_motorcycle.mdl"}},
	{GLOVE_SPECIALIST,{"models/weapons/v_models/arms/glove_specialist/v_glove_specialist.mdl"}}
};

const std::vector<WeaponName_t> k_knife_names =
{
	{0, u8"默认" },
	{WEAPON_KNIFE_BAYONET, u8"刺刀"},
	{WEAPON_KNIFE_FLIP, u8"折叠刀"},
	{WEAPON_KNIFE_GUT, u8"穿肠刀"},
	{WEAPON_KNIFE_KARAMBIT, u8"爪子刀"},
	{WEAPON_KNIFE_M9_BAYONET, u8"M-9 刺刀"},
	{WEAPON_KNIFE_TACTICAL, u8"猎杀者匕首"},
	{WEAPON_KNIFE_FALCHION, u8"弯刀"},
	{WEAPON_KNIFE_SURVIVAL_BOWIE, u8"鲍伊猎刀"},
	{WEAPON_KNIFE_BUTTERFLY, u8"蝴蝶刀"},
	{WEAPON_KNIFE_PUSH, u8"暗影双匕"}
};

const std::vector<WeaponName_t> k_glove_names =
{
	{0, u8"默认"},
	{GLOVE_STUDDED_BLOODHOUND, u8"血猎"},
	{GLOVE_T_SIDE, u8"默认 (恐怖分子)"},
	{GLOVE_CT_SIDE, u8"默认 (反恐精英)"},
	{GLOVE_SPORTY, u8"运动"},
	{GLOVE_SLICK, u8"驾驶"},
	{GLOVE_LEATHER_WRAP, u8"手部束带"},
	{GLOVE_MOTORCYCLE, u8"摩托"},
	{GLOVE_SPECIALIST, u8"专业"}
};

const std::vector<WeaponName_t> k_weapon_names =
{
	{WEAPON_KNIFE, u8"匕首"},
	{GLOVE_T_SIDE, u8"手套"},
	{7, "AK-47"},
	{8, "AUG"},
	{9, "AWP"},
	{63, u8"CZ75 自动手枪"},
	{1, u8"沙漠之鹰"},
	{2, u8"双持贝瑞塔"},
	{10, u8"法玛斯"},
	{3, "FN57"},
	{11, "G3SG1"},
	{13, u8"加利尔 AR"},
	{4, u8"格洛克 18 型"},
	{14, "M249"},
	{60, u8"M4A1 消音版"},
	{16, "M4A4"},
	{17, "MAC-10"},
	{27, "MAG-7"},
	{33, "MP7"},
	{34, "MP9"},
	{28, u8"内格夫"},
	{35, u8"新星"},
	{32, "P2000"},
	{36, "P250"},
	{19, "P90"},
	{26, u8"PP-野牛"},
	{64, u8"R8 左轮手枪"},
	{29, u8"截短霰弹枪"},
	{38, "SCAR-20"},
	{40, "SSG 08"},
	{39, "SG 553"},
	{30, "Tec-9"},
	{24, "UMP-45"},
	{61, u8"USP 消音版"},
	{25, "XM1014"},
};

const std::vector<QualityName_t> k_quality_names =
{
	{0, u8"默认"},
	{1, u8"纯正"},
	{2, u8"传承"},
	{3, u8"星"},
	{5, u8"社区"},
	{6, u8"Valve"},
	{7, u8"原型"},
	{8, u8"自定义"},
	{9, u8"击杀数"},
	{10, u8"已完成"},
	{12, u8"纪念品"}
};
