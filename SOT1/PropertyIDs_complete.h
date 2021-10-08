//////////////////////////////////////////////////////////////////////////////////////////////////////////
// hier sind alle Property-IDs ab 22000 - 28999 (siehe #define PROPID_DRIVER_FIRST 29000)
//
// ACHTUNG: alle neuen Property-IDs in der aktuellen Entwicklungsversion sind in PropertyIDs_work.h einzutragen!!
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// Properties für Variablen
#define ID_VAR_PROP_GRP0                       22000  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE Variable
#define ID_VAR_NAME                            22001  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_KENNUNG                         22002  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_BMKENNUNG                       22003  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_TREIBER                         22004  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_TYPE                            22005  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_READWRITE                       22006  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_NETADDR                         22007  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_DB                              22008  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_OFFSET                          22009  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_BIT                             22010  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_AUSRICHTUNG                     22011  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_STRINGLAENGE                    22012  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_ARRAYSIZE                       22013  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_ADRESS                          22014  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_ARRDIM1                         22015  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_ARRDIM2                         22016  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_ARRDIM3                         22017  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_COMPLEX_ID                      22018  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE
#define ID_VAR_DRVDATA                         22019  // CATEGORY:STANDARD:EZ_BTB:ALARM:MDI_AE

#define ID_VAR_PROP_GRP1                       22020  // CATEGORY:STANDARD Variable\Wert
#define ID_VAR_SIGMIN                          22021  // CATEGORY:STANDARD
#define ID_VAR_SIGMAX                          22022  // CATEGORY:STANDARD
#define ID_VAR_USEMAKRO                        22023  // CATEGORY:STANDARD
#define ID_VAR_MAKROHARDWARE                   22024  // CATEGORY:STANDARD
#define ID_VAR_MAKROZENON                      22025  // CATEGORY:STANDARD
#define ID_VAR_MESSMIN                         22026  // CATEGORY:STANDARD
#define ID_VAR_MESSMAX                         22027  // CATEGORY:STANDARD
#define ID_VAR_ERSATZ                          22028  // CATEGORY:MDI_AE
#define ID_VAR_EINHEIT                         22029  // CATEGORY:STANDARD
#define ID_VAR_NACHKOMMA                       22030  // CATEGORY:STANDARD
#define ID_VAR_KANALTYP												 22031  // CATEGORY:STANDARD
#define IDP_BATCH_FILTER_MR_VERSION						 22032  // CATEGORY:MDI_BATCH_MR
#define ID_VAR_TREIBER_DB										   22033  // CATEGORY:STANDARD
#define ID_VAR_MODIFIED												 22034  // CATEGORY:STANDARD
#define ID_VAR_BASETYPE                        22035  // CATEGORY:STANDARD
#define ID_VAR_DESC                            22036  // CATEGORY:STANDARD
#define ID_VAR_LIMIT_COUNT                     22037  // CATEGORY:STANDARD
#define ID_NICHTLINIARE_ANPASSUNG              22038  // CATEGORY:STANDARD

#define ID_DRV_KNOTEN                          22039  // CATEGORY:STANDARD

#define ID_VAR_PROP_GRP2                       22040  // CATEGORY:STANDARD Variable\Erweitert
#define ID_VAR_PRIORITAET                      22041  // CATEGORY:STANDARD
#define ID_VAR_SOLLMIN                         22042  // CATEGORY:STANDARD
#define ID_VAR_SOLLMAX                         22043  // CATEGORY:STANDARD
#define ID_VAR_HYSTNEG                         22044  // CATEGORY:STANDARD
#define ID_VAR_HYSTPOS                         22045  // CATEGORY:STANDARD
#define ID_VAR_UPDATE                          22046  // CATEGORY:STANDARD
#define ID_VAR_DDEAKTIV                        22047  // CATEGORY:STANDARD
#define ID_VAR_STANDBY                         22048  // CATEGORY:STANDARD
#define ID_VAR_ZWREMANR                        22049  // CATEGORY:STANDARD
#define ID_VAR_MAXGRADIENT                     22050  // CATEGORY:STANDARD
#define IDP_BATCH_FILTER_MR_SOURCE_VERSION     22051  // CATEGORY:MDI_BATCH_MR
#define ID_VAR_EXTERN                          22052  // CATEGORY:STANDARD

#define ID_VAR_WERTATTRIB                      22053  // CATEGORY:STANDARD
#define ID_VAR_LINANPASS                       22054  // CATEGORY:STANDARD
#define ID_VAR_SIGNAL                          22055  // CATEGORY:STANDARD
#define ID_VAR_HYSTERESE                       22056  // CATEGORY:STANDARD
#define ID_VAR_BEZEICHNUNG                     22057  // CATEGORY:STANDARD

#define ID_VAR_CPLX_OFFSET                     22058  // CATEGORY:STANDARD
#define ID_VAR_SBO                             22059  // CATEGORY:STANDARD
#define ID_VAR_PROP_GRP3                       22060  // CATEGORY:STANDARD Variable\Erweitert\Harddisk
#define ID_VAR_HDAKTIV                         22061  // CATEGORY:STANDARD
#define ID_VAR_HDRDA                           22062  // CATEGORY:STANDARD
#define ID_VAR_HDUPDATE                        22063  // CATEGORY:STANDARD
#define ID_VAR_HDWERTE                         22064  // CATEGORY:STANDARD
#define ID_VAR_LOCKING                         22065  // CATEGORY:STANDARD
#define ID_VAR_NORMALZUSTAND                   22066  // CATEGORY:STANDARD

#define	ID_VAR_INTERN_REMANENZ                 22067  // CATEGORY:STANDARD Interne Variablen
#define	ID_VAR_INTERN_LOKAL                    22068  // CATEGORY:STANDARD
#define	ID_VAR_INTERN_INITIALWERT              22069  // CATEGORY:STANDARD

#define ID_VAR_PROP_GRP4                       22070  // CATEGORY:STANDARD Variable\Grenzwerte
#define ID_VAR_REMAAKTIV                       22071  // CATEGORY:STANDARD
#define ID_VAR_REMA                            22072  // CATEGORY:STANDARD
#define ID_VAR_REMA_KNOTEN                     22073  // CATEGORY:STANDARD

#define ID_VAR_PROP_GRP6                       22080  // CATEGORY:STANDARD Variable\Runtime
#define ID_VAR_VALUE                           22081  // CATEGORY:STANDARD
#define ID_VAR_USERVALUE                       22082  // CATEGORY:STANDARD
#define ID_VAR_STATUSVALUE                     22083  // CATEGORY:STANDARD
#define ID_VAR_STATUSSTRING                    22084  // CATEGORY:STANDARD
#define ID_VAR_LASTUPDATETIME                  22085  // CATEGORY:STANDARD
#define ID_VAR_LASTUPDATETIME_MS               22086  // CATEGORY:STANDARD

#define ID_VAR_ALARMKANAL0                     22087  // CATEGORY:ALARM
#define ID_VAR_ALARMKANAL1                     22088  // CATEGORY:ALARM
#define ID_VAR_ALARMKANAL2                     22089  // CATEGORY:ALARM

#define ID_VAR_PROP_GRP5                       22090  // CATEGORY:STANDARD Variable\Gn
#define ID_VAR_GW_AKTIV                        22091  // CATEGORY:STANDARD
#define ID_VAR_GW_MINMAX                       22092  // CATEGORY:STANDARD
#define ID_VAR_GW_VARIABEL                     22093  // CATEGORY:STANDARD
#define ID_VAR_GW_GRENZWERT                    22094  // CATEGORY:STANDARD
#define ID_VAR_GW_VARIABLE                     22095  // CATEGORY:STANDARD
#define ID_VAR_GW_SCHWELLWERT                  22096  // CATEGORY:STANDARD
#define ID_VAR_GW_TEXT                         22097  // CATEGORY:STANDARD
#define ID_VAR_GW_FUNKTION                     22098  // CATEGORY:STANDARD
#define ID_VAR_GW_ALARMVERW                    22099  // CATEGORY:ALARM
#define ID_VAR_GW_FARBE                        22100  // CATEGORY:STANDARD
#define ID_VAR_GW_UNSICHTBAR                   22101  // CATEGORY:STANDARD
#define ID_VAR_GW_BLINKEN                      22102  // CATEGORY:STANDARD
#define ID_VAR_GW_ALARM                        22103  // CATEGORY:ALARM
#define ID_VAR_GW_QUITTIEREN                   22104  // CATEGORY:STANDARD
#define ID_VAR_GW_LOESCHEN                     22105  // CATEGORY:STANDARD
#define ID_VAR_GW_GRUPPE                       22106  // CATEGORY:STANDARD
#define ID_VAR_GW_KLASSE                       22107  // CATEGORY:STANDARD
#define ID_VAR_GW_CEL                          22108  // CATEGORY:STANDARD
#define ID_VAR_GW_DRUCKEN                      22109  // CATEGORY:STANDARD
#define ID_VAR_GW_VERZOEGEUNG                  22110  // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_MR_VERSION           22111  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_MR_SOURCE_VERSION    22112  // CATEGORY:MDI_BATCH_MR
#define ID_VAR_GW_PARENT_ID                    22113  // CATEGORY:STANDARD
#define ID_VAR_GW_ISSIMPLE                     22114  // CATEGORY:STANDARD

// ID einer CComplexVarED:
#define ID_COMPLEXVAR_ID                       22115  // CATEGORY:STANDARD
#define ID_VAR_GW_HILFE                        22116  // CATEGORY:STANDARD
#define ID_VAR_GW_HILFEKAP                     22117  // CATEGORY:STANDARD

#define ID_VAR_GW_GRP1                         22118  // CATEGORY:STANDARD
#define IDP_BATCH_CELGROUPCLASS_GRP            22119  // CATEGORY:MDI_BATCH_MR

// CVariableED: IsOwnValues Flags:
#define ID_VARED_OWN_FLAG0                     22120  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG1                     22121  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG2                     22122  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG3                     22123  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG4                     22124  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG5                     22125  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG6                     22126  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG7                     22127  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG8                     22128  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG9                     22129  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG10                    22130  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG11                    22131  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG12                    22132  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG13                    22133  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG14                    22134  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG15                    22135  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG16                    22136  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG17                    22137  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG18                    22138  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG19                    22139  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG20                    22140  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG21                    22141  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG22                    22142  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG23                    22143  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG24                    22144  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG25                    22145  // CATEGORY:STANDARD NutzGrenze
#define ID_VARED_OWN_FLAG26                    22146  // CATEGORY:STANDARD
#define IDP_CHARGENFILTER_OPEN_LOTS            22147  // CATEGORY:STANDARD
#define IDP_ADUA_NAME                          22148  // CATEGORY:MDI_ADUA
#define IDP_ADUA_TYPE                          22149  // CATEGORY:MDI_ADUA
#define IDP_ADUA_PATH                          22150  // CATEGORY:MDI_ADUA

// ID für BasisTypString im CSimpleType:
#define IDP_TIMEFILTER_BOXTYPE                22151  //CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG32                    22152  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG33                    22153  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG34                    22154  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG35                    22155  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG36                    22156  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG37                    22157  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG38                    22158  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG39                    22159  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG40                    22160  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG41                    22161  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG42                    22162  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG43                    22163  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG44                    22164  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG45                    22165  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG46                    22166  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG47                    22167  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG48                    22168  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG49                    22169  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG50                    22170  // CATEGORY:STANDARD
#define IDP_BATCHFLTR_VERSION_TYPE             22171  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_VERSION_NUM              22172  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_VERSION_VAR              22173  // CATEGORY:MDI_BATCH_MR
#define ID_VARED_OWN_FLAG54                    22174  // CATEGORY:STANDARD
// ID eines Items im CComplexTyZT_KNOTEN:
#define ID_COMPLEXTYP_ITEM_ID                  22175  // CATEGORY:STANDARD
// ID eines Types im CProjektType:
#define ID_PROJEKTTYP_ITEM_ID                  22176  // CATEGORY:STANDARD
// ID für Kanaltyp:
#define IDP_CHARGENFILTER_DONE_LOTS            22177  // CATEGORY:STANDARD
// ID für Datatyp:
#define ID_SIMPLETTYP_D_TYP_ID                 22178  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG59                    22179  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG60                    22180  // CATEGORY:STANDARD
#define ID_SCRIPT_NAME                         22181  // CATEGORY:STANDARD
#define ID_SCRIPT_FKTNAMEN                     22182  // CATEGORY:STANDARD

#define ID_VAR_GW_ZUSATZ_ATTRIB                22183  // CATEGORY:STANDARD
#define ID_VAR_GW_AMLCEL                       22184  // CATEGORY:MDI_AE:EZ_BTB
#define ID_VAR_GW_FKT                          22185  // CATEGORY:STANDARD
#define ID_VAR_GW_HLP                          22186  // CATEGORY:STANDARD

#define IDD_VARVERWALTUNG5                     22187  // CATEGORY:STANDARD
#define ID_SIZEINBYTE                          22188  // CATEGORY:STANDARD
#define ID_STARTATNEWOFFSET                    22189  // CATEGORY:STANDARD
#define ID_LASTUSEDOFFSET                      22190  // CATEGORY:STANDARD
#define ID_OFFSETMANUELL                       22191  // CATEGORY:STANDARD
#define ID_VAR_PROP_GRP7					   22192  // CATEGORY:EZ_BTB:MDI_GRAPH7
#define ID_VAR_PROP_GRP8					   22193  // CATEGORY:ALARM
#define ID_VAR_PROP_GRP9					   22194  // CATEGORY:ALARM
#define ID_VAR_PROP_GRP10					   22195  // CATEGORY:STANDARD
#define ID_VAR_PROP_GRP11					   22196  // CATEGORY:STANDARD
#define ID_VAR_PROP_GRP12					   22197  // CATEGORY:STANDARD
#define IDP_CHARGENFILTER_LOTNAME	22198  // CATEGORY:STANDARD
#define IDP_CHARGENFILTER_ARCHIVENAME					   22199  // CATEGORY:STANDARD

// Properties für Menüs
#define IDP_DEPRECATED_CHARGENFILTER_SCREEN    22200  // CATEGORY:MDI_EWT:EZ_BTB:MDI_AE:ALARM:MDI_TABELLE
#define IDS_ZENMENU_PROP01                     22201  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP02                     22202  // CATEGORY:STANDARD
#define IDP_ADUA_ACCOUNT                       22203  // CATEGORY:MDI_ADUA

#define IDS_ZENMENU_PROP_GRP2                  22220  // CATEGORY:STANDARD Aktionen
#define IDS_ZENMENU_PROP04                     22221  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP05                     22222  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP12                     22223  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP13                     22224  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP17                     22225  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP18                     22226  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP19                     22227  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP20                     22228  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP21                     22229  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP22                     22230  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP23                     22231  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP24                     22232  // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_FAILURE_COUNT        22233  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_FAILURE_FIXED_COUNT  22234  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_FAILURE_RECOVERED_COUNT 22235  // CATEGORY:MDI_BATCH_MR
#define IDS_ZENMENU_PROP28                     22236  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP29                     22237  // CATEGORY:STANDARD
#define ID_VAR_CANCEL_OPERATE                 22238  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP31                     22239  // CATEGORY:STANDARD

#define IDS_ZENMENU_PROP_GRP3                  22240  // CATEGORY:STANDARD Darstellung
#define IDS_ZENMENU_PROP06                     22241  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP07                     22242  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP08                     22243  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP09                     22244  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP10                     22245  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP11                     22246  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP14                     22247  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP15                     22248  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP16                     22249  // CATEGORY:STANDARD

#define IDS_ZENMENU_PROP_GRP4                  22250  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP_GRP5                  22251  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP_GRP6                  22252  // CATEGORY:STANDARD

#define IDS_ZENMENU_PROP36                     22253  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP37                     22254  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP_GRP7				           22255  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP_GRP8				           22256  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP_GRP9				           22257  // CATEGORY:STANDARD
#define IDP_ADUA_DOMAIN				                 22258  // CATEGORY:MDI_ADUA
#define IDP_ADUA_LINK                          22259  // CATEGORY:MDI_ADUA
#define IDP_ADUA_UNIT                          22260  // CATEGORY:MDI_ADUA

// S7Import
#define ID_S7_VAR_NAME                         22261  // CATEGORY:STANDARD
#define ID_S7_VAR_KOMMENTAR                    22262  // CATEGORY:STANDARD
#define ID_S7_VAR_TYP                          22263  // CATEGORY:STANDARD
#define ID_S7_VAR_ATTRIBUTE                    22264  // CATEGORY:STANDARD
#define ID_S7_VAR_BEREICH                      22265  // CATEGORY:STANDARD
#define ID_S7_VAR_BAUSTEIN                     22266  // CATEGORY:STANDARD
#define ID_S7_VAR_OFFSET                       22267  // CATEGORY:STANDARD
#define ID_S7_VAR_BIT                          22268  // CATEGORY:STANDARD
#define ID_S7_VAR_ADDR                         22269  // CATEGORY:STANDARD

// Properties für dynamische Elemente
#define ID_ELE_PROP_GRP0                       22300  // CATEGORY:STANDARD  Allgemein
#define ID_ELE_PROP0                           22301  // CATEGORY:STANDARD
#define ID_ELE_PROP1                           22302  // CATEGORY:STANDARD
#define ID_ELE_PROP2                           22303  // CATEGORY:STANDARD
#define ID_ELE_PROP3                           22304  // CATEGORY:STANDARD
#define ID_ELE_PROP4                           22305  // CATEGORY:STANDARD
#define ID_ELE_PROP5                           22306  // CATEGORY:STANDARD
#define ID_ELE_PROP6                           22307  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_ITEM_VARIABLE     22308  // CATEGORY:STANDARD
#define IDP_CEL_FLT_SHOW_SYSENTRIES_FOREVER    22309  // CATEGORY:STANDARD
#define ID_ELE_PROP9                           22310  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP1                       22311  // CATEGORY:STANDARD  Allgemein\Position
#define ID_ELE_PROP10                          22312  // CATEGORY:STANDARD
#define ID_ELE_PROP11                          22313  // CATEGORY:STANDARD
#define ID_ELE_PROP12                          22314  // CATEGORY:STANDARD
#define ID_ELE_PROP13                          22315  // CATEGORY:STANDARD
#define ID_ELE_PROP14                          22316  // CATEGORY:STANDARD
#define ID_ELE_PROP15                          22317  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP2                       22318  // CATEGORY:STANDARD:MDI_WELTZOOM Allgemein\Weltbilddarstellung
#define ID_ELE_PROP16                          22319  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP3                       22320   // CATEGORY:STANDARD
#define ID_ELE_PROP17                          22321  // CATEGORY:STANDARD
#define ID_ELE_PROP18                          22322  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP4                       22323   // CATEGORY:STANDARD
#define ID_ELE_PROP19                          22324  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP5                       22325  // CATEGORY:STANDARD Ereignisse
#define ID_ELE_PROP20                          22326  // CATEGORY:STANDARD
#define ID_ELE_PROP21                          22327  // CATEGORY:STANDARD
#define ID_ELE_PROP22                          22328  // CATEGORY:STANDARD
#define ID_ELE_PROP23                          22329  // CATEGORY:STANDARD
#define ID_ELE_PROP24                          22330  // CATEGORY:STANDARD
#define ID_ELE_PROP25                          22331  // CATEGORY:STANDARD
#define ID_ELE_PROP26                          22332  // CATEGORY:STANDARD
#define ID_ELE_PROP27                          22333  // CATEGORY:STANDARD
#define ID_ELE_PROP28                          22334  // CATEGORY:STANDARD
#define IDP_BATCH_RECIPE_FRAME_GRP             22335  // CATEGORY:MDI_BATCH_MR
#define ID_ELE_PROP30                          22336  // CATEGORY:STANDARD
#define ID_ELE_PROP31                          22337  // CATEGORY:STANDARD
#define ID_ELE_PROP32                          22338  // CATEGORY:STANDARD
#define ID_ELE_PROP33                          22339  // CATEGORY:STANDARD
#define ID_ELE_PROP34                          22340  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP6                       22341  // CATEGORY:STANDARD Sollwert
#define ID_ELE_PROP35                          22342  // CATEGORY:STANDARD
#define ID_ELE_PROP36                          22343  // CATEGORY:STANDARD
#define ID_ELE_PROP37                          22344  // CATEGORY:STANDARD
#define ID_ELE_PROP38                          22345  // CATEGORY:MDI_FACEPLATE
#define ID_ELE_PROP39                          22346  // CATEGORY:STANDARD
#define ID_ELE_PROP40                          22347  // CATEGORY:STANDARD
#define ID_ELE_PROP41                          22348  // CATEGORY:STANDARD
#define ID_ELE_PROP42                          22349  // CATEGORY:STANDARD
#define ID_ELE_PROP43                          22350  // CATEGORY:STANDARD
#define ID_ELE_PROP44                          22351  // CATEGORY:STANDARD
#define ID_ELE_PROP45                          22352  // CATEGORY:MDI_FACEPLATE
#define ID_ELE_PROP46                          22353  // CATEGORY:STANDARD
#define ID_ELE_PROP47                          22354  // CATEGORY:STANDARD
#define ID_ELE_PROP48                          22355  // CATEGORY:STANDARD
#define ID_ELE_PROP49                          22356  // CATEGORY:STANDARD
#define ID_ELE_PROP50                          22357  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP7                       22358  // CATEGORY:STANDARD   Element
#define ID_ELE_PROP51                          22359  // CATEGORY:STANDARD
#define ID_ELE_PROP52                          22360  // CATEGORY:STANDARD
#define IDP_SHIFT_MODEL_GENERAL_GRP            22361  // CATEGORY:MDI_SHIFTMANAGEMENT  
#define IDP_SHIFT_MODEL_NAME                   22362  // CATEGORY:MDI_SHIFTMANAGEMENT  
#define IDP_SHIFT_MODEL_DESCRIPTION            22363  // CATEGORY:MDI_SHIFTMANAGEMENT  
#define ID_ELE_PROP56                          22364  // CATEGORY:STANDARD
#define IDP_ANALYZER_REPORT_FILTER             22365  // CATEGORY:STANDARD
#define ID_ELE_PROP58                          22366  // CATEGORY:STANDARD
#define ID_ELE_PROP59                          22367  // CATEGORY:STANDARD
#define ID_ELE_PROP60                          22368  // CATEGORY:STANDARD
#define ID_ELE_PROP61                          22369  // CATEGORY:STANDARD
#define ID_ELE_PROP62                          22370  // CATEGORY:STANDARD
#define ID_ELE_PROP63                          22371  // CATEGORY:STANDARD
#define ID_ELE_PROP64                          22372  // CATEGORY:STANDARD
#define ID_ELE_PROP65                          22373  // CATEGORY:STANDARD
#define ID_ELE_PROP66                          22374  // CATEGORY:STANDARD
#define ID_ELE_PROP67                          22375  // CATEGORY:STANDARD
#define ID_ELE_PROP68                          22376  // CATEGORY:STANDARD
#define ID_ELE_PROP69                          22377  // CATEGORY:STANDARD
#define ID_ELE_PROP70                          22378  // CATEGORY:STANDARD
#define ID_ELE_PROP71                          22379  // CATEGORY:STANDARD
#define ID_ELE_PROP72                          22380  // CATEGORY:STANDARD
#define ID_ELE_PROP73                          22381  // CATEGORY:STANDARD
#define ID_ETM_CURVE_FILLCOLORASCOLOR          22382  // CATEGORY:MDI_EWT
#define ID_ELE_PROP75                          22383  // CATEGORY:STANDARD
#define ID_ELE_PROP76                          22384  // CATEGORY:STANDARD
#define ID_ELE_PROP77                          22385  // CATEGORY:STANDARD
#define ID_ELE_PROP78                          22386  // CATEGORY:STANDARD
#define ID_ELE_PROP79                          22387  // CATEGORY:STANDARD
#define ID_ELE_PROP80                          22388  // CATEGORY:STANDARD
#define ID_ELE_PROP81                          22389  // CATEGORY:STANDARD
#define ID_ELE_PROP82                          22390  // CATEGORY:STANDARD
#define ID_ELE_PROP83                          22391  // CATEGORY:STANDARD
#define ID_ELE_PROP84                          22392  // CATEGORY:STANDARD
#define ID_ELE_PROP85                          22393  // CATEGORY:STANDARD
#define ID_ELE_PROP86                          22394  // CATEGORY:STANDARD
#define IDP_DEL_PIC_BACK_PATH_AT_LOGOUT        22395  // CATEGORY:STANDARD
#define IDP_PRJ_LOGINSIGNATURE_PIC             22396  // CATEGORY:STANDARD
#define IDP_PRJ_DISMENUITEMS_DRAWING           22397  // CATEGORY:STANDARD
#define ID_ETM_CURVE_ALPHA_PERCENT             22398  // CATEGORY:MDI_EWT

#define ID_ELE_PROP_GRP8                       22399  // CATEGORY:STANDARD  Element\Anzeigebereich
#define ID_ELE_PROP91                          22400  // CATEGORY:STANDARD
#define ID_ELE_PROP92                          22401  // CATEGORY:STANDARD
#define ID_ELE_PROP93                          22402  // CATEGORY:STANDARD
#define IDP_SHIFT_BLOCK_GENERAL_GRP            22403  // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_BLOCK_NAME                   22404  // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_BLOCK_DESCRIPTION            22405  // CATEGORY:MDI_SHIFTMANAGEMENT
#define ID_ELE_PROP97                          22406  // CATEGORY:STANDARD
#define ID_ELE_PROP98                          22407  // CATEGORY:STANDARD
#define ID_ELE_PROP99                          22408  // CATEGORY:STANDARD
#define ID_ELE_PROP100                         22409  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP9                       22410  // CATEGORY:STANDARD  Element\Farben
#define ID_ELE_PROP101                         22411  // CATEGORY:STANDARD
#define ID_ELE_PROP102                         22412  // CATEGORY:STANDARD
#define ID_ELE_PROP103                         22413  // CATEGORY:STANDARD
#define ID_ELE_PROP104                         22414  // CATEGORY:STANDARD
#define IDP_TIME_FLT_ARV_LIST_ID               22415  // CATEGORY:MDI_PICTIME
#define ID_ELE_PROP106                         22416  // CATEGORY:STANDARD
#define IDP_TIME_FLT_ARV_LIST_NAME             22417  // CATEGORY:MDI_PICTIME
#define ID_ELE_PROP108                         22418  // CATEGORY:STANDARD  wird für Konvertierung benötigt
#define ID_ELE_PROP109                         22419  // CATEGORY:STANDARD
#define IDP_TIME_FLT_CRG_LIST_NAME             22420  // CATEGORY:MDI_PICTIME

#define ID_VARED_OWN_FLAG31                    22421  // CATEGORY:STANDARD

#define ID_ELE_PROP111                         22422  // CATEGORY:STANDARD
#define ID_ELE_PROP112                         22423  // CATEGORY:STANDARD
#define ID_ELE_PROP113                         22424  // CATEGORY:STANDARD
#define ID_ELE_PROP114                         22425  // CATEGORY:STANDARD
#define ID_ELE_PROP115                         22426  // CATEGORY:STANDARD
#define ID_ELE_PROP116                         22427  // CATEGORY:STANDARD
#define ID_ELE_PROP117                         22428  // CATEGORY:STANDARD
#define ID_ELE_PROP118                         22429  // CATEGORY:STANDARD
#define ID_ELE_PROP119                         22430  // CATEGORY:STANDARD
#define IDP_TIME_FLT_CRG_LIST_START            22431  // CATEGORY:MDI_PICTIME

#define ID_ELE_PROP_GRP11                      22432  // CATEGORY:STANDARD Darstellung
#define ID_ELE_PROP121                         22433  // CATEGORY:STANDARD
#define ID_ELE_PROP122                         22434  // CATEGORY:STANDARD
#define ID_ELE_PROP123                         22435  // CATEGORY:STANDARD
#define ID_ELE_PROP124                         22436  // CATEGORY:STANDARD
#define ID_ELE_PROP125                         22437  // CATEGORY:STANDARD
#define ID_ELE_PROP126                         22438  // CATEGORY:STANDARD
#define ID_ELE_PROP127                         22439  // CATEGORY:STANDARD
#define IDP_TIME_FLT_CRG_LIST_FINISH           22440  // CATEGORY:MDI_PICTIME
#define ID_ELE_PROP129                         22441  // CATEGORY:STANDARD
#define ID_ELE_PROP130                         22442  // CATEGORY:STANDARD
#define ID_ELE_PROP131                         22443  // CATEGORY:STANDARD
#define ID_ELE_PROP132                         22444  // CATEGORY:STANDARD
#define IDP_TIME_FLT_ARV_LIST                  22445  // CATEGORY:MDI_PICTIME
#define IDP_TIME_FLT_CRG_LIST                  22446  // CATEGORY:MDI_PICTIME
#define ID_ELE_PROP135                         22447  // CATEGORY:STANDARD
#define ID_ELE_PROP136                         22448  // CATEGORY:STANDARD
#define ID_ELE_PROP137                         22449  // CATEGORY:STANDARD
#define ID_ELE_PROP138                         22450  // CATEGORY:STANDARD
#define ID_ELE_PROP139                         22451  // CATEGORY:STANDARD
#define ID_ELE_PROP140                         22452  // CATEGORY:STANDARD
#define ID_ELE_PROP141                         22453  // CATEGORY:STANDARD
#define ID_ELE_PROP142                         22454  // CATEGORY:STANDARD
#define IDP_RGM_SORTID                         22455  // CATEGORY:MDI_REZEPTUR
#define IDP_USER_LIST_FILTER_CONFIG            22456  // CATEGORY:MDI_USER_LIST
#define IDP_USER_LIST_FILTER_SCR_NEW           22457  // CATEGORY:MDI_USER_LIST
#define IDP_USER_LIST_FILTER_SCR_EDIT          22458  // CATEGORY:MDI_USER_LIST
#define IDP_USER_EDIT_FILTER_RT                22459  // CATEGORY:MDI_USER_EDIT
#define IDP_USER_EDIT_FILTER_SOURCE            22460  // CATEGORY:MDI_USER_EDIT
#define IDP_USER_EDIT_FILTER_USERVAR           22461  // CATEGORY:MDI_USER_EDIT
#define ID_ELE_PROP150                         22462  // CATEGORY:STANDARD
#define ID_ELE_PROP151                         22463  // CATEGORY:STANDARD
#define ID_ELE_PROP152                         22464  // CATEGORY:STANDARD
#define ID_ELE_PROP153                         22465  // CATEGORY:STANDARD
#define ID_ELE_PROP154                         22466  // CATEGORY:STANDARD
#define ID_ELE_PROP155                         22467  // CATEGORY:STANDARD
#define ID_ELE_PROP156                         22468  // CATEGORY:STANDARD
#define ID_ELE_PROP157                         22469  // CATEGORY:STANDARD
#define IDP_EVERY_WHERE_NODE                   22470  // CATEGORY:STANDARD
#define IDP_EVERY_WHERE_ACCESS_LEVEL           22471  // CATEGORY:STANDARD
#define ID_ELE_PROP160                         22472  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP12                      22473  // CATEGORY:STANDARD  Darstellung\Skala
#define ID_ELE_PROP161                         22474  // CATEGORY:STANDARD
#define ID_ELE_PROP162                         22475  // CATEGORY:STANDARD
#define ID_ELE_PROP163                         22476  // CATEGORY:STANDARD
#define ID_ELE_PROP164                         22477  // CATEGORY:STANDARD
#define ID_ELE_PROP165                         22478  // CATEGORY:STANDARD
#define ID_ELE_PROP166                         22479  // CATEGORY:STANDARD
#define ID_ELE_PROP167                         22480  // CATEGORY:STANDARD
#define ID_ELE_PROP168                         22481  // CATEGORY:STANDARD
#define ID_ELE_PROP169                         22482  // CATEGORY:STANDARD
#define ID_ELE_PROP170                         22483  // CATEGORY:STANDARD
#define ID_ELE_PROP171                         22484  // CATEGORY:STANDARD
#define ID_ELE_PROP172                         22485  // CATEGORY:STANDARD
#define ID_ELE_PROP173                         22486  // CATEGORY:STANDARD
#define ID_ELE_PROP174                         22487  // CATEGORY:STANDARD
#define ID_ELE_PROP175                         22488  // CATEGORY:STANDARD
#define ID_ELE_PROP176                         22489  // CATEGORY:STANDARD
#define ID_ELE_PROP177                         22490  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_ITEM_TYPE         22491  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_LIST              22492  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_ITEM              22493  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_ITEM_STATE        22494  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_ITEM_NAME         22495  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_ITEM_LOG_VALUE    22496  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_ITEM_GUI_VALUE    22497  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_ITEM_DEF_VALUE    22498  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PAR_LIST_CFG          22499  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_SERVER_VERSION        22500  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_SERVER_NAME           22501  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_USE_RUNTIME_USER      22502  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_USERNAME              22503  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP13                      22504  // CATEGORY:STANDARD  Darstellung\Form
#define ID_ELE_PROP191                         22505  // CATEGORY:STANDARD
#define ID_ELE_PROP192                         22506  // CATEGORY:STANDARD
#define ID_ELE_PROP193                         22507  // CATEGORY:STANDARD
#define ID_ELE_PROP194                         22508  // CATEGORY:STANDARD
#define ID_ELE_PROP195                         22509  // CATEGORY:STANDARD
#define ID_ELE_PROP196                         22510  // CATEGORY:STANDARD
#define ID_ELE_PROP197                         22511  // CATEGORY:STANDARD
#define ID_ELE_PROP198                         22512  // CATEGORY:STANDARD
#define ID_ELE_PROP199                         22513  // CATEGORY:STANDARD
#define ID_ELE_PROP200                         22514  // CATEGORY:STANDARD
#define ID_ELE_PROP201                         22515  // CATEGORY:STANDARD
#define ID_ELE_PROP202                         22516  // CATEGORY:STANDARD
#define ID_ELE_PROP203                         22517  // CATEGORY:STANDARD
#define ID_ELE_PROP204                         22518  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_CRYPTED_PASSWORD      22519  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_SELECTED_REPORT       22520  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_RENDERING_ENGINE      22521  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_INCLUDE_TIMESTAMP     22522  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_VARIABLE_OUTPUT_FILE  22523  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PARAM_GUI_NAME        22524  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP14                      22525  // CATEGORY:STANDARD  Darstellung\Rand
#define ID_ELE_PROP211                         22526  // CATEGORY:STANDARD
#define ID_ELE_PROP212                         22527  // CATEGORY:STANDARD
#define ID_ELE_PROP213                         22528  // CATEGORY:STANDARD
#define ID_ELE_PROP214                         22529  // CATEGORY:STANDARD
#define ID_ELE_PROP215                         22530  // CATEGORY:STANDARD
#define ID_ELE_PROP216                         22531  // CATEGORY:STANDARD
#define ID_ELE_PROP217                         22532  // CATEGORY:STANDARD
#define ID_ELE_PROP218                         22533  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_PARAM_INPUT_MODE      22534  // CATEGORY:STANDARD
#define IDP_PRJ_LOGIN_PIC                      22535  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP15                      22536  // CATEGORY:STANDARD  Darstellung\Titel
#define ID_ELE_PROP221                         22537  // CATEGORY:STANDARD
#define ID_ELE_PROP222                         22538  // CATEGORY:STANDARD
#define ID_ELE_PROP223                         22539  // CATEGORY:STANDARD
#define ID_ELE_PROP224                         22540  // CATEGORY:STANDARD
#define ID_ELE_PROP225                         22541  // CATEGORY:STANDARD
#define ID_EMS_PROP129                         22542  // CATEGORY:MDI_EMS
#define ID_EMS_PROP130                         22543  // CATEGORY:MDI_EMS
#define ID_EMS_PROP131                         22544  // CATEGORY:MDI_EMS
#define ID_EMS_PROP132                         22545  // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP28                      22546  // CATEGORY:MDI_EMS
#define IDP_FCN_MT_PARALLELEXEC_SBADVISE_VARS  22547  // CATEGORY:STANDARD
#define ID_ELE_PROP231                         22548  // CATEGORY:STANDARD  Darstellung\Laufrichtung
#define ID_EMS_PROP133                         22549  // CATEGORY:MDI_EMS
#define ID_EMS_PROP134                         22550  // CATEGORY:MDI_EMS
#define ID_EMS_PROP135                         22551  // CATEGORY:MDI_EMS
#define ID_EMS_PROP136                         22552  // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP29                      22553  // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP30                      22554  // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP31                      22555  // CATEGORY:MDI_EMS Schaltstufen Unterknoten Verbraucher
#define ID_EMS_PROP137                         22556  // CATEGORY:MDI_EMS
#define ID_EMS_PROP138                         22557  // CATEGORY:MDI_EMS

#define ID_ELE_PROP_GRP17                      22558  // CATEGORY:STANDARD  Darstellung\Darstellungszeitraum
#define ID_ELE_PROP241                         22559  // CATEGORY:STANDARD
#define ID_ELE_PROP242                         22560  // CATEGORY:STANDARD
#define ID_ELE_PROP243                         22561  // CATEGORY:STANDARD
#define ID_EMS_PROP139                         22562  // CATEGORY:MDI_EMS
#define ID_EMS_PROP140                         22563  // CATEGORY:MDI_EMS
#define ID_EMS_PROP141                         22564  // CATEGORY:MDI_EMS
#define ID_EMS_PROP142                         22565  // CATEGORY:MDI_EMS
#define ID_EMS_PROP143                         22566  // CATEGORY:MDI_EMS
#define ID_EMS_PROP144                         22567  // CATEGORY:MDI_EMS
#define ID_EMS_PROP145                         22568  // CATEGORY:MDI_EMS

#define ID_ELE_PROP_GRP18                      22569  // CATEGORY:STANDARD  Darstellung\Refresh
#define ID_ELE_PROP251                         22570  // CATEGORY:STANDARD
#define ID_ELE_PROP252                         22571  // CATEGORY:STANDARD
#define ID_ELE_PROP253                         22572  // CATEGORY:STANDARD
#define ID_ELE_PROP254                         22573  // CATEGORY:STANDARD
#define ID_EMS_PROP146                         22574  // CATEGORY:MDI_EMS
#define ID_ELE_PROP256                         22575  // CATEGORY:STANDARD
#define IDP_PRJ_CHANGE_PWD_PIC                 22576  // CATEGORY:STANDARD
#define ID_ELE_PROP258                         22577  // CATEGORY:STANDARD
#define IDP_AML_TEXTCOLOR_STATE                22578  // CATEGORY:STANDARD
#define IDP_AML_BACKCOLOR_STATE                22579  // CATEGORY:STANDARD
#define IDP_AML_TEXTCOLOR_STATE1               22580  // CATEGORY:STANDARD
#define IDP_AML_BACKCOLOR_STATE1               22581  // CATEGORY:STANDARD
#define ID_ELE_PROP262                         22582  // CATEGORY:STANDARD
#define ID_ELE_PROP263                         22583  // CATEGORY:STANDARD
#define ID_ELE_PROP264                         22584  // CATEGORY:STANDARD
#define ID_ELE_PROP265                         22585  // CATEGORY:STANDARD
#define ID_ELE_PROP266                         22586  // CATEGORY:STANDARD
#define IDP_AML_TEXTCOLOR_STATE2               22587  // CATEGORY:STANDARD
#define IDP_AML_BACKCOLOR_STATE2               22588  // CATEGORY:STANDARD
#define IDP_AML_TEXTCOLOR_STATE3               22589  // CATEGORY:STANDARD
#define IDP_AML_BACKCOLOR_STATE3               22590  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP20                      22591  // CATEGORY:STANDARD  Darstellung\Combi-Element
#define ID_ELE_PROP271                         22592  // CATEGORY:STANDARD
#define ID_ELE_PROP272                         22593  // CATEGORY:STANDARD
#define ID_ELE_PROP273                         22594  // CATEGORY:STANDARD
#define ID_ELE_PROP274                         22595  // CATEGORY:STANDARD
#define ID_ELE_PROP275                         22596  // CATEGORY:STANDARD
#define ID_ELE_PROP276                         22597  // CATEGORY:STANDARD
#define ID_ELE_PROP277                         22598  // CATEGORY:STANDARD
#define ID_ELE_PROP278                         22599  // CATEGORY:STANDARD
#define ID_ELE_PROP279                         22600  // CATEGORY:STANDARD
#define ID_ELE_PROP280                         22601  // CATEGORY:STANDARD
#define ID_ELE_PROP281                         22602  // CATEGORY:STANDARD
#define ID_ELE_PROP282                         22603  // CATEGORY:STANDARD
#define ID_ELE_PROP283                         22604  // CATEGORY:STANDARD
#define ID_ELE_PROP284                         22605  // CATEGORY:STANDARD
#define ID_ELE_PROP285                         22606  // CATEGORY:STANDARD
#define ID_ELE_PROP286                         22607  // CATEGORY:STANDARD
#define ID_ELE_PROP287                         22608  // CATEGORY:STANDARD
#define ID_ELE_PROP288                         22609  // CATEGORY:STANDARD
#define ID_ELE_PROP289                         22610  // CATEGORY:STANDARD
#define ID_ELE_PROP290                         22611  // CATEGORY:STANDARD
#define ID_ELE_PROP291                         22612  // CATEGORY:STANDARD
#define ID_ELE_PROP292                         22613  // CATEGORY:STANDARD
#define ID_ELE_PROP293                         22614  // CATEGORY:STANDARD
#define ID_ELE_PROP294                         22615  // CATEGORY:STANDARD
#define IDP_CHARGENFILTER_SCREEN               22616  //CATEGORY:MDI_EWT:EZ_BTB:MDI_AE:ALARM:MDI_TABELLE
#define IDP_FCN_MT_PARALLELEXEC_SBADVISE_STARTID 22617  // CATEGORY:STANDARD
#define ID_ELE_PROP296                         22618  // CATEGORY:STANDARD  Darstellung\Mehrfachverknüpfung
#define IDP_SEQUENCE_STATECMDFILTER            22619  // CATEGORY:MDI_SCHALTFOLGEN 
#define ID_ELE_PROP298                         22620  // CATEGORY:MDI_SHIFTMANAGEMENT
#define ID_ELE_PROP299                         22621  // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_VAR_EXTREF                         22622  // CATEGORY:STANDARD Variable\Allgemein

#define ID_VARED_OWN_FLAG55                    22623  // CATEGORY:STANDARD

#define ID_ELE_PROP301                         22624  // CATEGORY:STANDARD
#define ID_ELE_PROP302                         22625  // CATEGORY:STANDARD
#define ID_ELE_PROP303                         22626  // CATEGORY:STANDARD
#define ID_ELE_PROP304                         22627  // CATEGORY:STANDARD
#define IDP_BATCH_MATRIX_CELL_OPERATION        22628  // CATEGORY:MDI_BATCH_MR

#define ID_VARED_OWN_FLAG56                    22629  // CATEGORY:STANDARD

#define ID_ELE_PROP306                         22630  // CATEGORY:STANDARD
#define IDP_BATCH_ALLOCATION_ALLOCATIONS       22631  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ALLOCATION_DEALLOCATIONS     22632  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CHART_UNIT              22633  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ALLOCATION_ISGLOBAL          22634  // CATEGORY:MDI_BATCH_MR

#define ID_ELE_PROP_GRP24                      22635  // CATEGORY:STANDARD  Darstellung\3D-Füllefekte
#define ID_ELE_PROP311                         22636  // CATEGORY:STANDARD
#define ID_ELE_PROP312                         22637  // CATEGORY:STANDARD
#define ID_ELE_PROP313                         22638  // CATEGORY:STANDARD
#define ID_ELE_PROP314                         22639  // CATEGORY:STANDARD
#define ID_DYNPICTURE_REFEXT                   22640  // CATEGORY:STANDARD

#define IDP_TEXTLIST_PROPGRP                   22641  // CATEGORY:MDI_TEXTLIST
#define IDP_TEXTLIST_TEXT                      22642  // CATEGORY:MDI_TEXTLIST
#define IDP_TEXTLIST_DESCRIPTION               22643  // CATEGORY:MDI_TEXTLIST
#define ID_ELE_PROP_GRP_FILLCOLORDYN           22644  // CATEGORY:STANDARD COMMENT:Darstellung\Füllfarbe dynamisch
#define ID_ELE_PROP_GRP_TEXT                   22645  // CATEGORY:STANDARD COMMENT:Darstellung\Text
#define IDP_FCN_MT_PARALLELEXEC_SBADVISE_ENDID 22646  // CATEGORY:STANDARD
#define ID_ELE_PROP321                         22647  // CATEGORY:STANDARD  Element\X-Richtung
#define ID_ELE_PROP322                         22648  // CATEGORY:STANDARD
#define ID_ELE_PROP323                         22649  // CATEGORY:STANDARD
#define ID_ELE_PROP324                         22650  // CATEGORY:STANDARD
#define ID_ELE_PROP325                         22651  // CATEGORY:STANDARD
#define ID_ELE_PROP326                         22652  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_SBUNADVISE_VARS 22653 // CATEGORY:STANDARD
#define ID_ELE_PROP327                         22654  // CATEGORY:STANDARD  Element\Y-Richtung
#define ID_ELE_PROP328                         22655  // CATEGORY:STANDARD
#define ID_ELE_PROP329                         22656  // CATEGORY:STANDARD
#define ID_ELE_PROP330                         22657  // CATEGORY:STANDARD
#define ID_ELE_PROP331                         22658  // CATEGORY:STANDARD
#define ID_ELE_PROP332                         22659  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_SBUNADVISE_STARTID 22660  // CATEGORY:STANDARD
#define ID_ELE_PROP333                         22661  // CATEGORY:STANDARD  Element\Zoombreite
#define ID_ELE_PROP334                         22662  // CATEGORY:STANDARD
#define ID_ELE_PROP335                         22663  // CATEGORY:STANDARD
#define ID_ELE_PROP336                         22664  // CATEGORY:STANDARD
#define ID_ELE_PROP337                         22665  // CATEGORY:STANDARD
#define ID_ELE_PROP338                         22666  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_SBUNADVISE_ENDID 22667  // CATEGORY:STANDARD
#define ID_ELE_PROP339                         22668  // CATEGORY:STANDARD  Element\Zoomhöhe
#define ID_ELE_PROP340                         22669  // CATEGORY:STANDARD
#define ID_ELE_PROP341                         22670  // CATEGORY:STANDARD
#define ID_ELE_PROP342                         22671  // CATEGORY:STANDARD
#define ID_ELE_PROP343                         22672  // CATEGORY:STANDARD
#define ID_ELE_PROP344                         22673  // CATEGORY:STANDARD

#define IDP_TEXTLIST_NODE                      22674  // CATEGORY:MDI_TEXTLIST
#define IDP_TEXTLIST_AS_DELETED                22675  // CATEGORY:MDI_TEXTLIST
#define ID_ELE_PROP346                         22676  // CATEGORY:STANDARD  Element\Drehen
#define ID_ELE_PROP347                         22677  // CATEGORY:STANDARD
#define ID_ELE_PROP348                         22678  // CATEGORY:STANDARD
#define ID_ELE_PROP349                         22679  // CATEGORY:STANDARD
#define ID_ELE_PROP350                         22680  // CATEGORY:STANDARD

#define ID_ELE_PROP351                         22681  // CATEGORY:STANDARD
#define IDP_BATCH_TAG_DEFVALUE_LOCAL           22682  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VALUE_MIN_LOCAL          22683  // CATEGORY:MDI_BATCH_MR
#define IDP_FCN_MT_PARALLELEXEC_SYNCVOID_VARS  22684  // CATEGORY:STANDARD
#define IDP_BATCH_TAG_VALUE_MAX_LOCAL          22685  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_RECIPEPARAM_LOCAL        22686  // CATEGORY:MDI_BATCH_MR
#define IDP_FCN_MT_PARALLELEXEC_SBADVISE_ASYNC 22687  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP31                      22688  // CATEGORY:STANDARD  Element\BA-Element
#define ID_ELE_PROP357                         22689  // CATEGORY:STANDARD
#define ID_ELE_PROP358                         22690  // CATEGORY:STANDARD
#define ID_ELE_PROP359                         22691  // CATEGORY:STANDARD
#define ID_ELE_PROP360                         22692  // CATEGORY:STANDARD
#define ID_ELE_PROP361                         22693  // CATEGORY:STANDARD
#define ID_ELE_PROP362                         22694  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP_LINE                   22695  // CATEGORY:STANDARD COMMENT:Darstellung\Linie
#define ID_ELE_PROP363                         22696  // CATEGORY:STANDARD
#define ID_ELE_PROP364                         22697  // CATEGORY:STANDARD
#define ID_ELE_PROP365                         22698  // CATEGORY:STANDARD
#define ID_ELE_PROP366                         22699  // CATEGORY:STANDARD
#define ID_ELE_PROP367                         22700  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP_LINECOLORDYN           22701  // CATEGORY:STANDARD COMMENT:Darstellung\Linienfarbe dynamisch

#define ID_ELE_PROP369                         22702  // CATEGORY:STANDARD  Start-/Endpunkt v. Kreissegmenten (DXF)
#define ID_ELE_PROP370                         22703  // CATEGORY:STANDARD
#define ID_ELE_PROP371                         22704  // CATEGORY:STANDARD
#define ID_ELE_PROP372                         22705  // CATEGORY:STANDARD
#define ID_ELE_PROP373                         22706  // CATEGORY:STANDARD
#define ID_ELE_PROP374                         22707  // CATEGORY:STANDARD
#define ID_ELE_PROP375                         22708  // CATEGORY:STANDARD
#define ID_ELE_PROP376                         22709  // CATEGORY:STANDARD

#define ID_ELE_PROP377                         22710  // CATEGORY:STANDARD  TAB-Reihenfolge Horizontal und Vertikal
#define ID_ELE_PROP378                         22711  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP_SW                     22712  // CATEGORY:STANDARD  Sollwert setzen
#define ID_ELE_PROP_GRP_LINECAPS               22713  // CATEGORY:STANDARD  Stile für Linienenden (Pfeil, Kreis, ...)
#define ID_ELE_PROP403                         22714  // CATEGORY:STANDARD
#define ID_ELE_PROP404                         22715  // CATEGORY:STANDARD
#define ID_ELE_PROP405                         22716  // CATEGORY:STANDARD

#define IDP_TEXTLIST_FILTER_DEL                22717  // CATEGORY:MDI_TEXTLIST
#define IDP_TEXTLIST_FILTER_CONFIG             22718  // CATEGORY:MDI_TEXTLIST
#define IDP_TEXTLIST_CEL_LOGGING               22719  // CATEGORY:MDI_TEXTLIST

#define IDP_FCN_MT_PARALLELEXEC_SBUNADVISE_ASYNC 22799  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_SYNCVOID_STARTID 22800  // CATEGORY:STANDARD
// Properties fDialog für alle Funktionen
#define ID_FKT_PROP_GRP0                       22801  // CATEGORY:STANDARD Funktionsparameter
#define ID_FKT_PROP1                           22802  // CATEGORY:STANDARD
#define ID_FKT_PROP2                           22803  // CATEGORY:STANDARD
#define ID_FKT_PROP3                           22804  // CATEGORY:STANDARD
#define ID_FKT_PROP4                           22805  // CATEGORY:STANDARD
#define ID_FKT_PROP5                           22806  // CATEGORY:STANDARD
#define ID_FKT_PROP6                           22807  // CATEGORY:STANDARD
#define ID_FKT_PROP7                           22808  // CATEGORY:STANDARD
#define ID_FKT_PROP8                           22809  // CATEGORY:STANDARD
#define ID_FKT_PROP9                           22810  // CATEGORY:STANDARD
#define ID_FKT_EXTERNAL_REFERENCE              22811  // CATEGORY:STANDARD
#define ID_FKT_PROP_GRP1                       22812  // CATEGORY:STANDARD
#define ID_FKT_PROP_OBJECT                     22813  // CATEGORY:STANDARD
#define ID_FKT_PROP10                          22814  // CATEGORY:STANDARD

#define IDP_FCN_MT_PARALLELEXEC_SYNCVOID_ENDID 22850  // CATEGORY:STANDARD
// Properties für Schablonen
#define ID_TEMPLATE_PROP_GRP0                  22851  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP1                      22852  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP2                      22853  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP3                      22854  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP4                      22855  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP5                      22856  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP6                      22857  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP7                      22858  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP8                      22859  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP9                      22860  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP10                     22861  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP11                     22862  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP12                     22863  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP13                     22864  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP14                     22865  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP15                     22866  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP16                     22867  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP17                     22868  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP18                     22869  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP19                     22870  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP20                     22871  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP21                     22872  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP22                     22873  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP23                     22874  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP24                     22875  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP25                     22876  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP26                     22877  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP27                     22878  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP28                     22879  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP29                     22880  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP30                     22881  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP_GRP1				           22882  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP_GRP2				           22883  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP_GRP3				           22884  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP_GRP4				           22885  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP_GRP5				           22886  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP_GRP6				           22887  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP_GRP7				           22888  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP41				             22889  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP31                     22890  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP32                     22891  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP33                     22892  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP34                     22893  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP35                     22894  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP36                     22895  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP37                     22896  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP38                     22897  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP39                     22898  // CATEGORY:STANDARD
#define ID_TEMPLATE_PROP40                     22899  // CATEGORY:STANDARD

// Properties für Bilder
#define IDP_FRAME_BEGRENZUNG_TYP               22900  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP_GRP0                22901  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP1                    22902  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP3                    22903  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP11                   22904  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP12                   22905  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP13                   22906  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP14                   22907  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP15                   22908  // CATEGORY:STANDARD

#define ID_DYNPICTURE_PROP_GRP1                22909  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP2                    22910  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP4                    22911  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP16                   22912  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP17                   22913  // CATEGORY:STANDARD

#define ID_DYNPICTURE_PROP_GRP2                22914  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP5                    22915  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP6                    22916  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP7                    22917  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP8                    22918  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP9                    22919  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP10                   22920  // CATEGORY:STANDARD

#define ID_DYNPICTURE_PROP_GRP3                22921  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP18                   22939  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP19                   22940  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP20                   22941  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP21                   22942  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP22                   22943  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP23                   22944  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP24                   22945  // CATEGORY:STANDARD

#define IDP_FRAME_WIDTHMIN                     22946  // CATEGORY:STANDARD
#define IDP_FRAME_OPENING_WIDTH                22947  // CATEGORY:STANDARD
#define IDP_FRAME_HEIGHTMIN                    22948  // CATEGORY:STANDARD
#define IDP_FRAME_OPENING_HEIGHT               22949  // CATEGORY:STANDARD

#define IDP_FRAME_BEGRENZUNG_WERT							 22950  // CATEGORY:STANDARD
#define IDP_FRAME_AUFSCHALTGROESSE_TYP				 22951  // CATEGORY:STANDARD

#define ID_DYNPICTURE_PROP_GRP4                22952  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP31                   22953  // CATEGORY:STANDARD

#define ID_DYNPICTURE_PROP_GRP5                22954  // CATEGORY:STANDARD
#define IDP_FRAME_AUFSCHALTGROESSE_WERT				 22955  // CATEGORY:STANDARD

// Properties für Zeitsteuerung
#define ID_ZEITSTG_PROPERTIES                  23000  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP_GRP0                   23001  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP1                       23002  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP2                       23003  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP3                       23004  // CATEGORY:STANDARD

#define ID_ZEITSTG_PROP_GRP1                   23005  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP4                       23006  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP5                       23007  // CATEGORY:STANDARD
#define IDP_VERRIEG_LISTCONFIG                 23008  // CATEGORY:MDI_ENERGY
#define ID_ZEITSTG_PROP7                       23009  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP8                       23010  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP9                       23011  // CATEGORY:STANDARD

#define IDP_VERRIEG_ILOCKTEXT                  23012  // CATEGORY:MDI_ENERGY
#define ID_ZEITSTG_PROP10                      23013  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP11                      23014  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP12                      23015  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP13                      23016  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP14                      23017  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP15                      23018  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP16                      23019  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP17                      23020  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP18                      23021  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP19                      23022  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP20                      23023  // CATEGORY:STANDARD

#define ID_SAP_SERVERPRG_GRP                   23024  // CATEGORY:STANDARD   
#define ID_SAP_PROGRAMID                       23025  // CATEGORY:STANDARD
#define ID_SAP_LOG_TO_CEL                      23026  // CATEGORY:STANDARD
#define ID_SAP_FUNC_SERVERPRG_GRP              23027  // CATEGORY:STANDARD
#define ID_SAP_FUNC_SERVERPRG                  23028  // CATEGORY:STANDARD
#define ID_SAP_FUNC_SERVERFUNC                 23029  // CATEGORY:STANDARD
#define ID_SAP_FUNC_WAIT                       23030  // CATEGORY:STANDARD
#define IDP_BATCH_RECIPE_FCN_EXPORT            23031  // CATEGORY:MDI_BATCH_MR
#define IDP_FCN_AMLCEL_CEL                     23032  // CATEGORY:STANDARD
#define IDP_COMMAND_SEQUENCER_FCN_EXPORT       23033  // CATEGORY:MDI_SCHALTFOLGEN

#define ID_ZEITSTG_PROP_GRP3                   23034  // CATEGORY:STANDARD
#define ID_ZEITSTG_PROP_GRP4                   23035  // CATEGORY:STANDARD

#define ID_FKT_VBA_XML_PROP_604                23036  // CATEGORY:STANDARD

#define ID_ZENON_USER_TYPE                     23037  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_POWER_USER_EDITS_OTHER_POWER_USERS  23038  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define IDP_PARENT_PICTURE_OF_RELATED_PICTURE  23039  // CATEGORY:STANDARD
#define IDP_PICTURE_CONTAINER_NAME             23040  // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_PHASES 23041 // CATEGORY:MDI_BATCH_MR

#define ID_PROJECT_NETZ_SERVICEGRIDGATEWAYACTIVE 23042 // CATEGORY:STANDARD

//unused: 23043 - 23099

#define ID_PROJECT_ALC_IMPEDANCE_BASED_FL      23100  // CATEGORY:STANDARD

// Properties für Zuweisungen
#define ID_ZUWEIS_PROP_GRP0                    23101  // CATEGORY:STANDARD
#define ID_ZUWEIS_PROP1                        23102  // CATEGORY:STANDARD
#define ID_ZUWEIS_PROP2                        23103  // CATEGORY:STANDARD
#define ID_ZUWEIS_PROP3                        23104  // CATEGORY:STANDARD
#define ID_ZUWEIS_PROP4                        23105  // CATEGORY:STANDARD
#define ID_ZUWEIS_PROP5                        23106  // CATEGORY:STANDARD

// Properties für Topologie
//#define ID_TOPOLOGIE_PROPERTIES                23150  //Unused
#define ID_TOPOLOGIE_PROP_GRP1                 23150  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP1                     23151  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP2                     23152  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP3                     23153  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP4                     23154  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP5                     23155  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP6                     23156  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP7                     23157  // CATEGORY:STANDARD

#define ID_TOPOLOGIE_PROP_GRP2                 23158  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP8                     23159  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP9                     23160  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP10                    23161  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP11                    23162  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP12                    23163  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP13                    23164  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP14                    23165  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP15                    23166  // CATEGORY:STANDARD

#define ID_TOPOLOGIE_PROP_GRP3                 23167  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP16                    23168  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP17                    23169  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP18                    23170  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP19                    23171  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP20                    23172  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP21                    23173  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP22                    23174  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP23                    23175  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP24                    23176  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP25                    23177  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP26                    23178  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP27                    23179  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP28                    23180  // CATEGORY:STANDARD
#define IDP_CMDINPUT_SUBSTI_GROUP              23181  // CATEGORY:STANDARD
#define IDP_CMDINPUT_SUBSTI_ACTION             23182  // CATEGORY:STANDARD

#define ID_TOPOLOGIE_STRING1                   23183  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_STRING2                   23184  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_STRING3                   23185  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_STRING4                   23186  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_STRING5                   23187  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_STRING6                   23188  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_STRING7                   23189  // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP31                    23190  // CATEGORY:STANDARD
#define IDP_CMDSEQ_IMPORT_IMAGENAME            23191  // CATEGORY:MDI_SCHALTFOLGEN
#define IDP_CMDSEQ_IMPORT_SEQUENCENAME         23192  // CATEGORY:MDI_SCHALTFOLGEN
#define IDP_CMDSEQ_IMPORT_ADDINGSTYLE          23193  // CATEGORY:MDI_SCHALTFOLGEN
#define IDP_FCN_MT_PARALLELEXEC_XORADVISEVARS  23194  // CATEGORY:STANDARD

#define IDP_FCN_MT_PARALLELEXEC_XORADVISESTARTID 23250  // CATEGORY:STANDARD
#define ID_TREIBER_PROP_GRP0                   23250  // CATEGORY:STANDARD
#define ID_TREIBER_NAME                        23251  // CATEGORY:STANDARD
#define ID_TREIBER_FILE                        23252  // CATEGORY:STANDARD
#define ID_TREIBER_TYP                         23253  // CATEGORY:STANDARD
#define ID_DRIVER_EXTERNAL_REF                 23254  // CATEGORY:STANDARD
#define ID_TREIBER_CONFIG                      23255  // CATEGORY:STANDARD
#define ID_TREIBER_PROP6                       23256  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_XORADVISEENDID 23257  // CATEGORY:STANDARD

#define ID_TREIBER_PROP_GRP1                   23258  // CATEGORY:STANDARD
#define ID_TREIBER_PROP_GRP2                   23259  // CATEGORY:STANDARD

// Properties für den Process Recorder
#define IDP_PR_AMOUNT_INTERVAL_STEP            23260  // CATEGORY:MDI_PROCESS_RECORDER
#define IDP_PR_INTERVALLEVENT_CONFIG           23261  // CATEGORY:MDI_PROCESS_RECORDER
#define IDP_PR_OWN_HI_CLRS                     23262  // CATEGORY:MDI_PROCESS_RECORDER
#define IDP_PR_OWN_HI_CLR_TEXT                 23263  // CATEGORY:MDI_PROCESS_RECORDER
#define IDP_PR_OWN_HI_CLR_BACK                 23264  // CATEGORY:MDI_PROCESS_RECORDER
#define IDP_PR_SYSTEM_LINES_COLOR              23265  // CATEGORY:MDI_PROCESS_RECORDER
#define IDP_PR_NEXTEVENT_CONFIG                23270  // CATEGORY:MDI_PROCESS_RECORDER

// Properties für Zuweisungen
#define ID_REZEPT_PROP_GRP0                    23271  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_REZEPT_PROP1                        23272  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_REZEPT_PROP2                        23273  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_REZEPT_PROP3                        23274  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_REZEPT_PROP4                        23275  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_REZEPT_PROP5                        23276  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_REZEPT_PROP6                        23277  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_REZEPT_PROP7                        23278  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_REZEPT_PROP8                        23279  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT

#define ID_PROJECT_PROCESS_RECORDER            23290  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_REMA_PROP_GRP0                      23291  // CATEGORY:STANDARD
#define ID_REMA_PROP1                          23292  // CATEGORY:STANDARD
#define ID_REMA_PROP2                          23293  // CATEGORY:STANDARD
#define ID_REMA_PROP3                          23294  // CATEGORY:STANDARD
#define ID_REMA_PROP4                          23295  // CATEGORY:STANDARD
#define ID_REMA_PROP5                          23296  // CATEGORY:STANDARD
#define ID_REMA_PROP6                          23297  // CATEGORY:STANDARD
#define ID_REMA_PROP7                          23298  // CATEGORY:STANDARD
#define ID_REMA_PROP8                          23299  // CATEGORY:STANDARD
#define ID_REMA_PROP9                          23300  // CATEGORY:STANDARD
#define ID_REMA_PROP10                         23301  // CATEGORY:STANDARD
#define ID_REMA_EXTREF                         23302  // CATEGORY:STANDARD
#define IDP_COMMAND_SEQUENCER_FCN_IMPORT       23303  // CATEGORY:MDI_SCHALTFOLGEN
#define ID_REMA_PROP13                         23304  // CATEGORY:STANDARD
#define ID_REMA_PROP14                         23305  // CATEGORY:STANDARD
#define ID_REMA_PROP15                         23306  // CATEGORY:STANDARD
#define ID_PROJEKT_SCHALTFOLGEN                23307  // CATEGORY:STANDARD
#define IDP_SCHALTFOLGEN_VISIBLE               23308  // CATEGORY:MDI_SCHALTFOLGEN
#define ID_VERRIEG_PROP_GRP12                  23309  // CATEGORY:STANDARD
#define IDP_CMDSQ_IGNORE2STAGE                 23310  // CATEGORY:STANDARD
#define IDP_SCHALTFOLGEN_STEPNAME              23311  // CATEGORY:MDI_SCHALTFOLGEN

#define ID_REMA_PROP_GRP1                      23312  // CATEGORY:STANDARD
#define ID_REMA_PROP21                         23313  // CATEGORY:STANDARD
#define ID_REMA_PROP22                         23314  // CATEGORY:STANDARD
#define ID_REMA_PROP23                         23315  // CATEGORY:STANDARD
#define ID_REMA_PROP24                         23316  // CATEGORY:STANDARD
#define ID_REMA_PROP25                         23317  // CATEGORY:STANDARD
#define ID_REMA_PROP26                         23318  // CATEGORY:STANDARD
#define ID_REMA_PROP27                         23319  // CATEGORY:STANDARD
#define ID_REMA_PROP28                         23320  // CATEGORY:STANDARD
#define ID_REMA_PROP29                         23321  // CATEGORY:STANDARD
#define ID_REMA_PROP30                         23322  // CATEGORY:STANDARD
#define ID_REMA_PROP31                         23323  // CATEGORY:STANDARD
#define ID_REMA_PROP32                         23324  // CATEGORY:STANDARD
#define ID_REMA_PROP33                         23325  // CATEGORY:STANDARD
#define ID_REMA_PROP34                         23326  // CATEGORY:STANDARD
#define ID_REMA_PROP35                         23327  // CATEGORY:STANDARD
#define ID_REMA_PROP36                         23328  // CATEGORY:STANDARD
#define ID_REMA_PROP37                         23329  // CATEGORY:STANDARD
#define ID_REMA_PROP38                         23330  // CATEGORY:STANDARD
#define ID_REMA_PROP39                         23331  // CATEGORY:STANDARD
#define ID_REMA_PROP40                         23332  // CATEGORY:STANDARD
#define ID_REMA_PROP41                         23333  // CATEGORY:STANDARD
#define ID_REMA_PROP42                         23334  // CATEGORY:STANDARD
#define ID_REMA_PROP43                         23335  // CATEGORY:STANDARD
#define ID_REMA_PROP44                         23336  // CATEGORY:STANDARD
#define ID_REMA_PROP45                         23337  // CATEGORY:STANDARD
#define ID_REMA_PROP46                         23338  // CATEGORY:STANDARD
#define ID_REMA_PROP47                         23339  // CATEGORY:STANDARD
#define ID_REMA_PROP48                         23340  // CATEGORY:STANDARD
#define IDP_CMDPICTURE_CMDNAME                 23341  // CATEGORY:MDI_ENERGY 
#define ID_REMA_SUBSTATE                       23342  // CATEGORY:STANDARD
#define ID_REMA_KETTEN_0                       23343  // CATEGORY:STANDARD
#define ID_REMA_KETTEN_1                       23344  // CATEGORY:STANDARD
#define ID_REMA_KETTEN_2                       23345  // CATEGORY:STANDARD
#define ID_REMA_KETTEN_3                       23346  // CATEGORY:STANDARD
#define ID_REMA_KETTEN_4                       23347  // CATEGORY:STANDARD
#define ID_REMA_KETTEN_5                       23348  // CATEGORY:STANDARD
#define ID_REMA_KETTEN_6                       23349  // CATEGORY:STANDARD

#define ID_VBA_XML_PROP_23350                  23350  // CATEGORY:STANDARD

// Properties für Verriegelungen
#define ID_VERRIEG_PROP_GRP0                   23351  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP1                   23352  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP2                   23353  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP3                   23354  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP1                       23355  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP2                       23356  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP3                       23357  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP4                       23358  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP5                       23359  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP6                       23360  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP7                       23361  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP8                       23362  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP9                       23363  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP10                      23364  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP11                      23365  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP12                      23366  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP13                      23367  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP14                      23368  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP15                      23369  // CATEGORY:STANDARD

// Properties für Schaltfolgen (SEA)
#define ID_SEA_PROP_GRP0                       23370  // CATEGORY:MDI_SEA
#define ID_SEA_PROP_NAME                       23371  // CATEGORY:MDI_SEA
#define ID_SEA_PROP_VAR                        23372  // CATEGORY:MDI_SEA
#define ID_SEA_PROP_LERNEN                     23373  // CATEGORY:MDI_SEA
#define ID_SEA_PROP_DIREKT                     23374  // CATEGORY:MDI_SEA
#define ID_SEA_PROP_SUMME                      23375  // CATEGORY:MDI_SEA
#define ID_SEA_PROP_MACRO                      23376  // CATEGORY:MDI_SEA
#define ID_SEA_PROP_ABBRUCH_PV                 23377  // CATEGORY:MDI_SEA
#define ID_SEA_PROP_ABBRUCH                    23378  // CATEGORY:MDI_SEA

////////////////////////////////////////////////////////////////////////////////////
// Funktionsproperties für den VBA- und XML- Austausch
// Bitte den reserviertPlatz beachten  !
//#define ID_FKT_VBA_XML_PROP_BEGIN              23400  //Unused
#define ID_FKT_VBA_XML_PROP_000                23400  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_001                23401  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_002                23402  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_003                23403  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_004                23404  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_005                23405  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_006                23406  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_007                23407  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_008                23408  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_009                23409  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_010                23410  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_011                23411  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_012                23412  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_013                23413  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_014                23414  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_015                23415  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_016                23416  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_017                23417  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_018                23418  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_019                23419  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_020                23420  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_021                23421  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_022                23422  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_023                23423  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_024                23424  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_025                23425  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_026                23426  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_027                23427  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_028                23428  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_029                23429  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_030                23430  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_031                23431  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_032                23432  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_033                23433  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_034                23434  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_035                23435  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_036                23436  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_037                23437  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_038                23438  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_039                23439  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_040                23440  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_041                23441  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_042                23442  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_043                23443  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_044                23444  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_045                23445  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_046                23446  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_047                23447  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_048                23448  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_049                23449  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_050                23450  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_051                23451  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_052                23452  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_053                23453  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_054                23454  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_055                23455  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_056                23456  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_057                23457  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_058                23458  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_059                23459  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_060                23460  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_061                23461  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_062                23462  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_063                23463  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_064                23464  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_065                23465  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_066                23466  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_067                23467  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_068                23468  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_069                23469  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_070                23470  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_071                23471  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_072                23472  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_073                23473  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_074                23474  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_075                23475  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_076                23476  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_077                23477  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_078                23478  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_079                23479  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_080                23480  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_081                23481  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_082                23482  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_083                23483  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_084                23484  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_085                23485  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_086                23486  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_087                23487  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_088                23488  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_089                23489  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_090                23490  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_091                23491  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_092                23492  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_093                23493  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_094                23494  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_095                23495  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_096                23496  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_097                23497  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_098                23498  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_099                23499  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_100                23500  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_101                23501  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_102                23502  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_103                23503  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_104                23504  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_105                23505  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_106                23506  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_107                23507  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_108                23508  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_109                23509  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_110                23510  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_111                23511  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_112                23512  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_113                23513  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_114                23514  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_115                23515  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_116                23516  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_117                23517  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_118                23518  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_119                23519  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_120                23520  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_121                23521  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_122                23522  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_123                23523  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_124                23524  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_125                23525  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_126                23526  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_127                23527  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_128                23528  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_129                23529  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_130                23530  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_131                23531  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_132                23532  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_133                23533  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_134                23534  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_135                23535  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_136                23536  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_137                23537  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_138                23538  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_139                23539  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_140                23540  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_141                23541  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_142                23542  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_143                23543  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_144                23544  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_145                23545  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_146                23546  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_147                23547  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_148                23548  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_149                23549  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_150                23550  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_151                23551  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_152                23552  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_153                23553  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_154                23554  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_155                23555  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_156                23556  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_157                23557  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_158                23558  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_159                23559  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_160                23560  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_161                23561  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_162                23562  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_163                23563  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_164                23564  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_165                23565  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_166                23566  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_167                23567  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_168                23568  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_169                23569  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_170                23570  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_171                23571  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_172                23572  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_173                23573  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_174                23574  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_175                23575  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_176                23576  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_177                23577  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_178                23578  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_179                23579  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_180                23580  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_181                23581  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_182                23582  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_183                23583  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_184                23584  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_185                23585  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_186                23586  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_187                23587  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_188                23588  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_189                23589  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_190                23590  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_191                23591  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_192                23592  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_193                23593  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_194                23594  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_195                23595  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_196                23596  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_197                23597  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_198                23598  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_199                23599  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_200                23600  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_201                23601  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_202                23602  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_203                23603  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_204                23604  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_205                23605  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_206                23606  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_207                23607  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_208                23608  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_209                23609  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_210                23610  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_211                23611  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_212                23612  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_213                23613  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_214                23614  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_215                23615  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_216                23616  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_217                23617  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_218                23618  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_219                23619  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_220                23620  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_221                23621  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_222                23622  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_223                23623  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_224                23624  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_225                23625  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_226                23626  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_227                23627  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_228                23628  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_229                23629  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_230                23630  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_231                23631  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_232                23632  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_233                23633  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_234                23634  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_235                23635  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_236                23636  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_237                23637  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_238                23638  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_239                23639  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_240                23640  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_241                23641  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_242                23642  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_243                23643  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_244                23644  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_245                23645  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_246                23646  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_247                23647  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_248                23648  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_249                23649  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_250                23650  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_251                23651  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_252                23652  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_253                23653  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_254                23654  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_255                23655  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_256                23656  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_257                23657  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_258                23658  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_259                23659  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_260                23660  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_261                23661  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_262                23662  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_263                23663  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_264                23664  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_265                23665  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_266                23666  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_267                23667  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_268                23668  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_269                23669  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_270                23670  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_271                23671  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_272                23672  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_273                23673  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_274                23674  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_275                23675  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_276                23676  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_277                23677  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_278                23678  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_279                23679  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_280                23680  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_281                23681  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_282                23682  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_283                23683  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_284                23684  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_285                23685  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_286                23686  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_287                23687  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_288                23688  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_289                23689  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_290                23690  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_291                23691  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_292                23692  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_293                23693  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_294                23694  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_295                23695  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_296                23696  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_297                23697  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_298                23698  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_299                23699  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_300                23700  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_301                23701  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_302                23702  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_303                23703  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_304                23704  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_305                23705  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_306                23706  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_307                23707  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_308                23708  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_309                23709  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_310                23710  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_311                23711  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_312                23712  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_313                23713  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_314                23714  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_315                23715  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_316                23716  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_317                23717  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_318                23718  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_319                23719  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_320                23720  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_321                23721  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_322                23722  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_323                23723  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_324                23724  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_325                23725  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_326                23726  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_327                23727  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_328                23728  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_329                23729  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_330                23730  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_331                23731  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_332                23732  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_333                23733  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_334                23734  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_335                23735  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_336                23736  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_337                23737  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_338                23738  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_339                23739  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_340                23740  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_341                23741  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_342                23742  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_343                23743  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_344                23744  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_345                23745  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_346                23746  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_347                23747  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_348                23748  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_349                23749  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_350                23750  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_351                23751  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_352                23752  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_353                23753  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_354                23754  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_355                23755  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_356                23756  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_357                23757  // CATEGORY:MDI_REZEPT_ALT
#define ID_FKT_VBA_XML_PROP_358                23758  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_359                23759  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_360                23760  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_361                23761  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_362                23762  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_363                23763  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_364                23764  // CATEGORY:MDI_SYSMODEL
#define ID_FKT_VBA_XML_PROP_365                23765  // CATEGORY:MDI_SYSMODEL
#define ID_FKT_VBA_XML_PROP_366                23766  // CATEGORY:MDI_SYSMODEL
#define ID_FKT_VBA_XML_PROP_367                23767  // CATEGORY:MDI_SYSMODEL
#define ID_FKT_VBA_XML_PROP_368                23768  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_369                23769  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_370                23770  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_371                23771  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_372                23772  // CATEGORY:MDI_SYSMODEL
#define ID_FKT_VBA_XML_PROP_373                23773  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_374                23774  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_375                23775  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_376                23776  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_377                23777  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_378                23778  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_379                23779  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_380                23780  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_381                23781  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_382                23782  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_383                23783  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_384                23784  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_385                23785  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_386                23786  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_387                23787  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_388                23788  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_389                23789  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_390                23790  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_391                23791  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_392                23792  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_393                23793  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_394                23794  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_395                23795  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_396                23796  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_397                23797  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_398                23798  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_399                23799  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_400                23800  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_401                23801  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_402                23802  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_403                23803  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_404                23804  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_405                23805  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_406                23806  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_407                23807  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_408                23808  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_409                23809  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_410                23810  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_411                23811  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_412                23812  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_413                23813  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_414                23814  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_415                23815  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_416                23816  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_417                23817  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_418                23818  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_419                23819  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_420                23820  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_421                23821  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_422                23822  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_423                23823  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_424                23824  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_425                23825  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_426                23826  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_427                23827  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_428                23828  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_429                23829  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_430                23830  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_431                23831  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_432                23832  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_433                23833  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_434                23834  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_435                23835  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_436                23836  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_437                23837  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_438                23838  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_439                23839  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_440                23840  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_441                23841  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_442                23842  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_443                23843  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_444                23844  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_445                23845  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_446                23846  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_447                23847  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_448                23848  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_449                23849  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_450                23850  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_451                23851  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_452                23852  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_453                23853  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_454                23854  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_455                23855  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_456                23856  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_457                23857  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_458                23858  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_459                23859  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_460                23860  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_461                23861  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_462                23862  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_463                23863  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_464                23864  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_465                23865  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_466                23866  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_467                23867  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_468                23868  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_469                23869  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_470                23870  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_471                23871  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_472                23872  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_473                23873  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_474                23874  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_475                23875  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_476                23876  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_477                23877  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_478                23878  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_479                23879  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_480                23880  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_481                23881  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_482                23882  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_483                23883  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_484                23884  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_485                23885  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_486                23886  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_487                23887  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_488                23888  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_489                23889  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_490                23890  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_491                23891  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_492                23892  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_493                23893  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_494                23894  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_495                23895  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_496                23896  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_497                23897  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_498                23898  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_499                23899  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_500                23900  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_501                23901  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_502                23902  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_503                23903  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_504                23904  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_505                23905  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_506                23906  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_507                23907  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_508                23908  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_509                23909  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_510                23910  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_511                23911  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_512                23912  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_513                23913  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_514                23914  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_515                23915  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_516                23916  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_517                23917  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_518                23918  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_519                23919  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_520                23920  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_521                23921  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_522                23922  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_523                23923  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_524                23924  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_525                23925  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_526                23926  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_527                23927  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_528                23928  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_529                23929  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_530                23930  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_531                23931  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_532                23932  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_533                23933  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_534                23934  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_535                23935  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_536                23936  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_537                23937  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_538                23938  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_539                23939  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_540                23940  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_541                23941  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_542                23942  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_543                23943  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_544                23944  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_545                23945  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_546                23946  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_547                23947  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_548                23948  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_549                23949  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_550                23950  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_551                23951  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_552                23952  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_553                23953  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_554                23954  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_555                23955  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_556                23956  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_557                23957  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_558                23958  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_559                23959  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_560                23960  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_561                23961  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_562                23962  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_563                23963  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_564                23964  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_565                23965  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_566                23966  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_567                23967  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_568                23968  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_569                23969  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_570                23970  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_571                23971  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_572                23972  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_573                23973  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_574                23974  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_575                23975  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_576                23976  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_577                23977  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_578                23978  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_579                23979  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_580                23980  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_581                23981  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_582                23982  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_583                23983  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_584                23984  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_585                23985  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_586                23986  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_587                23987  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_588                23988  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_589                23989  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_590                23990  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_591                23991  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_592                23992  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_593                23993  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_594                23994  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_595                23995  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_596                23996  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_597                23997  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_598                23998  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_599                23999  // CATEGORY:STANDARD

#define ID_FONT_PROP_GRP                       24000  // CATEGORY:STANDARD Schrift
#define ID_FONT_NUMMER                         24001  // CATEGORY:STANDARD
#define ID_FONT_NAME                           24002  // CATEGORY:STANDARD
#define ID_FONT_SCHRIFTART                     24003  // CATEGORY:STANDARD

#define ID_FONTLIST_PROP_GRP                   24004  // CATEGORY:STANDARD
#define ID_FONTLIST_NAME                       24005  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_600                24006  //CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_601                24007  //CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_602                24008  // CATEGORY:MDI_SYSMODEL
#define IDP_VERRIEG_LOCKVARNAME_XML            24009  // CATEGORY:STANDARD
#define IDP_FKT_NETTOKEN_SHOWATRUNTIME         24010  //// CATEGORY:STANDARD

// fuer systemtreiber             
#define ID_SYSVAR_THEMA                        24011  // CATEGORY:STANDARD
#define ID_SYSVAR_INHALT                       24012  // CATEGORY:STANDARD

#define IDP_BUTTON_SPOT_FILL                   24015  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP_GRP0                    24016  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP1                        24017  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP2                        24018  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP3                        24019  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP4                        24020  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP5                        24021  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP6                        24022  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP7                        24023  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP8                        24024  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP9                        24025  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP10                       24026  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP11                       24027  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP12                       24028  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP13                       24029  // CATEGORY:STANDARD
#define ID_DOCEXT_PROP14                       24030  // CATEGORY:STANDARD

#define ID_PROP_SYSTEMMODEL_RELEVANT           24040 // CATEGORY:STANDARD

// Properties für Variablen-Statustest
#define ID_VARSTATUS_PROP_GRP0                 24041  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP1                     24042  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP2                     24043  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP3                     24044  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP4                     24045  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP5                     24046  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP6                     24047  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP7                     24048  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP8                     24049  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP9                     24050  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP10                    26957  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP11                    26958  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP12                    26959  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP13                    26960  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP14                    26961  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP15                    26962  // CATEGORY:MDI_VARSTATUS
#define ID_VARSTATUS_PROP16                    26963  // CATEGORY:MDI_VARSTATUS

// fuer Mathetreiber
#define IDP_SHIFT_FILTER_MODE                  24020  // CATEGORY:EZ_BTB
#define ID_MATHVAR_PROP_FORMEL                 24021  // CATEGORY:STANDARD
#define ID_MATHVAR_PROP_MATHINFO               24022  // CATEGORY:STANDARD
#define ID_MATHVAR_PROP_SOURCEVARS             24023  // CATEGORY:STANDARD
#define ID_MATHVAR_PROP_BEARBEITUNG            24024  // CATEGORY:STANDARD
#define ID_MATHVAR_PROP_RECHENINFO             24025  // CATEGORY:STANDARD

#define ID_FILE_NAME                           24030  // CATEGORY:STANDARD
#define ID_FILE_TYP                            24031  // CATEGORY:STANDARD
#define ID_FILE_SIZE                           24032  // CATEGORY:STANDARD
#define ID_FILE_STATUS                         24033  // CATEGORY:STANDARD
#define ID_ELE_MULT_ISBKCOLOR                  24034  // CATEGORY:STANDARD
#define ID_ELE_MULT_BKCOLOR                    24035  // CATEGORY:STANDARD
#define ID_ELE_MULT_FILLONLY                   24036  // CATEGORY:STANDARD
#define ID_ELE_MULT_SWITCHFUNC                 24037  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_COLLOW                  24038  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_COLHIGH                 24039  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_BKCOLLOW                24040  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_BKCOLHIGH               24041  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_BITMAPLOW               24042  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_BITMAPHIGH              24043  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_ZUSTTEXTLOW             24044  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_ZUSTTEXTHIGH            24045  // CATEGORY:STANDARD
#define ID_ELE_MULT_NEW_ZUST                   24046  // CATEGORY:STANDARD
#define IDP_FKT_NETTOKEN_HIERARCHIC            24047  // CATEGORY:STANDARD
#define ID_ELE_MULT_ART                        24048  // CATEGORY:STANDARD
#define ID_ELE_MULT_SIZE                       24049  // CATEGORY:STANDARD
#define ID_ELE_MULT_ALLVARS                    24050  // CATEGORY:STANDARD
#define ID_ELE_MULT_ISTEXT                     24051  // CATEGORY:STANDARD
#define ID_COMBI_WERT                          24052  // CATEGORY:STANDARD
#define ID_COMBI_WERTMASK                      24053  // CATEGORY:STANDARD
#define ID_COMBI_STATUS                        24054  // CATEGORY:STANDARD
#define ID_COMBI_STATUSMASK                    24055  // CATEGORY:STANDARD
#define ID_COMBI_COLOR                         24056  // CATEGORY:STANDARD
#define ID_COMBI_BKCOLOR                       24057  // CATEGORY:STANDARD
#define ID_COMBI_BLINKEN                       24058  // CATEGORY:STANDARD
#define ID_COMBI_HG_TRANS                      24059  // CATEGORY:STANDARD
#define ID_COMBI_LAYER_TRANS                   24060  // CATEGORY:STANDARD
#define ID_COMBI_SYMBOL_COL                    24061  // CATEGORY:STANDARD
#define ID_COMBI_TOP_COL                       24062  // CATEGORY:STANDARD
#define ID_COMBI_TOP_BK                        24063  // CATEGORY:STANDARD
#define ID_COMBI_ZUSATZ                        24064  // CATEGORY:STANDARD
#define ID_COMBI_ZUSATZMASK                    24065  // CATEGORY:STANDARD
#define ID_COMBI_TEXT_OR_BITMAP                24066  // CATEGORY:STANDARD
#define ID_COMBI_SYMBOLNAME                    24067  // CATEGORY:STANDARD
#define ID_COMBI_SYMBOLPFAD                    24068  // CATEGORY:STANDARD
#define ID_COMBI_ZUSTNEU                       24069  // CATEGORY:STANDARD
#define ID_ETM_CURVE_ORDER                     24070  // CATEGORY:MDI_EWT
#define ID_ETM_CURVE_VARIABLETAGNR             24071  // CATEGORY:MDI_EWT
#define IDS_DYNAMISCH                          24072  // CATEGORY:STANDARD
#define IDS_SICHTBARKEIT                       24073  // CATEGORY:STANDARD
#define IDS_SICHTBARKEIT_VARIABLE              24074  // CATEGORY:STANDARD
#define IDS_SICHTBARKEIT_AUSGRENZWERT          24075  // CATEGORY:STANDARD
#define IDS_SICHTBARKEIT_VON                   24076  // CATEGORY:STANDARD
#define IDS_SICHTBARKEIT_BIS                   24077  // CATEGORY:STANDARD
#define IDS_SICHTBARKEIT_STATUS                24078  // CATEGORY:STANDARD
#define IDS_ELE_PROP_DREHEN                    24079  // CATEGORY:STANDARD
#define IDS_ELE_PROP_XRICHTUNG                 24080  // CATEGORY:STANDARD
#define IDS_ELE_PROP_YRICHTUNG                 24081  // CATEGORY:STANDARD
#define IDS_ELE_PROP_XZOOMEN                   24082  // CATEGORY:STANDARD
#define IDS_ELE_PROP_YZOOMEN                   24083  // CATEGORY:STANDARD
#define IDS_LINIENFARBE_VARIABLE               24084  // CATEGORY:STANDARD
#define IDS_HGFARBE_VARIABLE                   24085  // CATEGORY:STANDARD
#define IDS_DYNAMICFARBE                       24086  // CATEGORY:STANDARD
#define ID_ELE_LAYER                           24088  // CATEGORY:STANDARD
#define ID_PICTURE_TITLE                       24089  // CATEGORY:STANDARD

// Properties für Befehlselement
#define ID_SATBEF_PROP_GRP1                    24090  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_SATBEF_PROP1                        24091  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_SATBEF_PROP2                        24092  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_SATBEF_PROP3                        24093  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_SATBEF_PROP4                        24094  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_SATBEF_PROP5                        24095  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_SATBEF_PROP6                        24096  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define IDP_PRJ_RECURSIVE_LOGIN                24097  // CATEGORY:STANDARD
#define ID_MINPWLENGTH                         24098  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_USERNAME                            24099  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_TEMPLOGIN                           24100  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_DISABLEDBUTTONS                     24101  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_DELUSER                             24102  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_AUTOLOGOUT                          24103  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_PWVALID                             24104  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_AUTOLOGOFFTIME                      24105  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_USERPASSWORD                        24106  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL:MDI_LOGIN
#define ID_USERKENNUNG                         24107  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_ADMINUSER                           24108  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_USERMGR_GRP                         24109  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_USER_GRP                            24110  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define IDP_BATCH_UNIT_RT_REE_CNT              24111  // CATEGORY:MDI_BATCH_MR
#define ID_LEVELLIST                           24112  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_USER_ACTIVE                         24113  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_USER_LOCKED                         24114  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_FKTLEVELLIST                        24115  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define ID_SATBEF_STRING1                      24298  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define IDP_BATCH_UNIT_RT_REE_STATUS_NUM       24299  // CATEGORY:MDI_BATCH_MR
#define ID_SATBEF_STRING3                      24300  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND:MDI_BEFEHL
#define IDP_BATCH_UNIT_RT_REE_STATUS_TXT       24301  // CATEGORY:MDI_BATCH_MR
#define ID_PROJEKT_ALLGEMEIN                   24302  // CATEGORY:STANDARD
#define ID_PROJEKT_GUID                        24303  // CATEGORY:STANDARD
#define ID_PROJEKT_NAME                        24304  // CATEGORY:STANDARD
#define ID_PROJEKT_VERZEICHNIS                 24305  // CATEGORY:STANDARD
#define ID_PROJEKT_STARTBILD                   24306  // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_REE_MODUS_NUM        24307  // CATEGORY:MDI_BATCH_MR
#define ID_PROJEKT_NETZ                        24308  // CATEGORY:STANDARD
#define ID_PROJEKT_NETZ_AKTIV                  24309  // CATEGORY:STANDARD
#define ID_PRIMNAME														 24310  // CATEGORY:STANDARD
#define ID_PRIMOBJ_TYP												 24311  // CATEGORY:STANDARD
#define ID_PRIM_STATUS												 24312  // CATEGORY:STANDARD
#define ID_PRIM_ACCESS												 24313  // CATEGORY:STANDARD
#define ID_PRIM_COUNT													 24314  // CATEGORY:STANDARD
#define ID_PRIM_DATATYP												 24315  // CATEGORY:STANDARD
#define ID_PRIM_VIEWNET												 24316  // CATEGORY:STANDARD
#define ID_PRIM_VIEWDB												 24317  // CATEGORY:STANDARD
#define ID_PRIM_VIEWOFS												 24318  // CATEGORY:STANDARD
#define ID_PRIM_VIEWBIT												 24319  // CATEGORY:STANDARD
#define ID_PRIM_ALIGN													 24320  // CATEGORY:STANDARD
#define ID_PRIM_BLOCK													 24321  // CATEGORY:STANDARD
#define ID_PRIM_OBNAME												 24322  // CATEGORY:STANDARD
#define ID_PRIM_DATANAME											 24323  // CATEGORY:STANDARD
#define ID_PROJEKT_NETZ_SERVER                 24324  // CATEGORY:STANDARD
#define ID_PROJEKT_NETZ_SB                     24325  // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_REE_MODUS_TXT        24326  // CATEGORY:MDI_BATCH_MR
#define IDP_PROJEKT_RT_INTERNDRIVERTAGS        24327  // CATEGORY:STANDARD
#define ID_PROJEKT_NETZ_REDUNDANZTYP           24328  // CATEGORY:STANDARD
#define IDP_VARSTATUS_MDI_LIST_CONFIG          24329  // CATEGORY:MDI_VARSTATUS
#define ID_PROJEKT_NETZ_TOKEN                  24330  // CATEGORY:STANDARD
#define ID_PROJEKT_NETZ_TOKEN_AKTIV            24331  // CATEGORY:STANDARD
#define ID_PROJEKT_NETZ_TOKEN_QUESTION         24332  // CATEGORY:STANDARD
#define ID_PROJEKT_NETZ_TOKEN_QUIT             24333  // CATEGORY:STANDARD
#define ID_PROJEKT_MAIN_WINDOW                 24334  // CATEGORY:STANDARD
#define ID_PROJEKT_WINDOWS_CE                  24335  // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCHSCREEN                 24336  // CATEGORY:STANDARD
#define ID_PROJEKT_KEYBOARD_SIZE               24337  // CATEGORY:STANDARD
#define ID_PROJEKT_CURSOR_VISIBLE              24338  // CATEGORY:STANDARD
#define ID_PROJEKT_TREND_MILLISEC              24339  // CATEGORY:STANDARD
#define ID_PROJEKT_DRIVER_INVISIBLE            24340  // CATEGORY:STANDARD
#define ID_PROJEKT_BLINK_FREQUENCY             24341  // CATEGORY:STANDARD
#define ID_PROJEKT_LIMIT_FUNCTION_ON_START     24342  // CATEGORY:STANDARD
#define ID_PROJEKT_ALARM_CEL                   24343  // CATEGORY:ALARM:EZ_BTB
#define ID_PROJEKT_PRINT_ACTIVE                24344  // CATEGORY:STANDARD
#define ID_PROJEKT_PRINT_AML_CEL               24345  // CATEGORY:ALARM:EZ_BTB
#define ID_PROJEKT_PRINT_LINES_PAGE            24346  // CATEGORY:STANDARD
#define ID_PROJEKT_SEL_WITH_BORDER             24347  // CATEGORY:STANDARD
#define ID_PROJEKT_SAME_COMMENTS               24348  // CATEGORY:STANDARD
#define ID_PROJEKT_AUTOMATIC_FUNC              24349  // CATEGORY:STANDARD
#define ID_PROJEKT_AUTOMATIC_FUNCTION_ACTIVE   24350  // CATEGORY:STANDARD
#define ID_PROJEKT_AUTOMATIC_FUNCTION_TIME     24351  // CATEGORY:STANDARD
#define ID_PROJEKT_AUTOMATIC_FUNCTION          24352  // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_PH_LIST              24353  // CATEGORY:MDI_BATCH_MR
#define ID_PROJEKT_EXPORT_UNICODE              24354  // CATEGORY:STANDARD
#define ID_PASSWORD_SHOWLOCK                   24355  // CATEGORY:STANDARD
#define ID_PROJEKT_PASSWORT                    24356  // CATEGORY:STANDARD
#define ID_HILFE_GRP                           24357  // CATEGORY:STANDARD
#define IDP_ELE_VAR_LOCKING                    24358  // CATEGORY:STANDARD
#define ID_COMPLEXITEM_HASREF                  24359  // CATEGORY:STANDARD
#define ID_COMPLEXITEM_OFFSET                  24360  // CATEGORY:STANDARD
#define ID_COMPLEXITEM_BITOFFSET               24361  // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_RUN_ERR_COUNT        24362  // CATEGORY:MDI_BATCH_MR
#define IDD_TYP_PROP1                          24363  // CATEGORY:STANDARD
#define IDD_TYP_PROP2                          24364  // CATEGORY:STANDARD
#define IDD_TYP_PROP3                          24365  // CATEGORY:STANDARD
#define ID_COMPLEXITEM_INDEX                   24366  // CATEGORY:STANDARD
#define ID_VAR_ALARMVIEWQUIT                   24367  // CATEGORY:STANDARD
#define IDP_BATCH_EVENT_EXECUTE_STARTUP        24368  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_GRP                  24369  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_RUN_ERR_GONE         24370  // CATEGORY:MDI_BATCH_MR
#define ID_ELE_EMBEDDED_FONT                   24371  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP34                      24372  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP35                      24373  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP36                      24374  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP37                      24375  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP38                      24376  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP39                      24377  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP40                      24378  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP41                      24379  // CATEGORY:STANDARD
#define ID_PROJEKT_PROCESS_REC_AKTIV           24380  // CATEGORY:MDI_PROCESS_RECORDER

#define ID_STRATON_1                           24381  // CATEGORY:STANDARD
#define ID_STRATON_2                           24382  // CATEGORY:STANDARD
#define ID_STRATON_3                           24383  // CATEGORY:STANDARD
#define ID_STRATON_4                           24384  // CATEGORY:STANDARD
#define ID_STRATON_5                           24385  // CATEGORY:STANDARD
#define ID_STRATON_6                           24386  // CATEGORY:STANDARD
#define ID_INITIALVALUE                        24387  // CATEGORY:STANDARD
#define ID_PROFILENAME                         24389  // CATEGORY:STANDARD
#define ID_ADRESSPARAM                         24390  // CATEGORY:STANDARD
#define ID_READWRITE                           24391  // CATEGORY:STANDARD
#define ID_EXTERNVISIBLE                       24392  // CATEGORY:STANDARD

#define ID_PROJEKT_ENABLEMENU                  24393  // CATEGORY:STANDARD
#define ID_PROJEKT_RATED_NET_SWITCH_DELAY      24394  // CATEGORY:STANDARD

#define ID_PREDEFINED_BITMAPS                  24395  // CATEGORY:STANDARD
#define IDS_KURVE_NEU                          24396  // CATEGORY:STANDARD
#define IDS_KURVE_DEL                          24397  // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP44                      24399  // CATEGORY:STANDARD
#define ID_UEBER_HELLIGKEIT                    24400  // CATEGORY:STANDARD

#define ID_PROJEKT_GRP0                        24401  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP1                        24402  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP2                        24403  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP3                        24404  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP4                        24405  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP5                        24406  // CATEGORY:STANDARD

#define ID_COMBI_FORMULA                       24407  // CATEGORY:STANDARD

#define ID_SAVE_ALWAYS_BIN_AML                 24408  // CATEGORY:STANDARD
#define ID_SAVE_ALWAYS_BIN_CEL                 24409  // CATEGORY:STANDARD
#define ID_AML_ONLY_STACK                      24410  // CATEGORY:STANDARD
#define ID_CEL_ONLY_STACK                      24411  // CATEGORY:STANDARD
#define ID_NETZ_APP_CLOSE_BOX                  24412  // CATEGORY:STANDARD
#define ID_PROJEKT_AML                         24413  // CATEGORY:STANDARD
#define ID_PROJEKT_CEL                         24414  // CATEGORY:STANDARD
#define ID_PROJEKT_POKEACK                     24415  // CATEGORY:STANDARD
#define ID_CEL_RECIPE_WRITE                    24416  // CATEGORY:STANDARD
#define ID_CEL_RECIPE_CHANGE                   24417  // CATEGORY:STANDARD
#define ID_CEL_ARCHIVE_CHANGE                  24418  // CATEGORY:STANDARD
#define ID_PROJEKT_NOT_TRANSLATED              24419  // CATEGORY:STANDARD
#define ID_PROJEKT_CHANGELOG                   24420  // CATEGORY:STANDARD
#define ID_PROJEKT_CHANGELOG_AKTIV             24421  // CATEGORY:STANDARD
#define ID_PROJEKT_CHANGELOG_DETAIL            24422  // CATEGORY:STANDARD
/// Eigenschaft für Projekt: erweiterte Grafikfunktionen
#define ID_PROJEKT_GDIPLUS                     24423  // CATEGORY:STANDARD
#define ID_PROJECT_RUNTIMELASSO                24424  // CATEGORY:STANDARD
#define IDP_BATCH_RECIPE_FCN_IMPORT            24425  // CATEGORY:MDI_BATCH_MR
/// Bewertetes Netzwerk
#define ID_PROJEKT_RATED_NET_DETECT_OFF_TIME   24426  // CATEGORY:STANDARD
#define ID_PROJEKT_RATED_NET_HYSTERESIS        24427  // CATEGORY:STANDARD
#define ID_PROJEKT_RATED_NET_REDUNDANCY_MODE   24428  // CATEGORY:STANDARD
#define ID_PROJEKT_RATED_NET_SUM               24429  // CATEGORY:STANDARD

#define ID_REMA_PROP_GRP2                      24451  // CATEGORY:STANDARD
#define ID_REMA_PROP50                         24452  // CATEGORY:STANDARD
#define ID_REMA_PROP51                         24453  // CATEGORY:STANDARD
#define ID_REMA_PROP52                         24454  // CATEGORY:STANDARD
#define ID_REMA_PROP53                         24455  // CATEGORY:STANDARD
#define ID_REMA_PROP54                         24456  // CATEGORY:STANDARD
#define ID_REMA_PROP55                         24457  // CATEGORY:STANDARD
#define ID_REMA_PROP56                         24458  // CATEGORY:STANDARD
#define ID_REMA_PROP57                         24459  // CATEGORY:STANDARD
#define ID_REMA_PROP58                         24460  // CATEGORY:STANDARD
#define ID_REMA_PROP59                         24461  // CATEGORY:STANDARD
#define ID_REMA_PROP60                         24462  // CATEGORY:STANDARD
#define ID_REMA_PROP61                         24463  // CATEGORY:STANDARD
#define ID_REMA_PROP62                         24464  // CATEGORY:STANDARD
#define ID_REMA_PROP63                         24465  // CATEGORY:STANDARD
#define ID_REMA_PROP64                         24466  // CATEGORY:STANDARD
#define ID_REMA_PROP65                         24467  // CATEGORY:STANDARD
#define ID_REMA_PROP66                         24468  // CATEGORY:STANDARD
#define ID_REMA_PROP67                         24469  // CATEGORY:STANDARD
#define ID_REMA_PROP68                         24470  // CATEGORY:STANDARD
#define ID_REMA_PROP69                         24471  // CATEGORY:STANDARD
#define ID_REMA_PROP70                         24472  // CATEGORY:STANDARD
#define ID_REMA_PROP71                         24473  // CATEGORY:STANDARD
#define ID_REMA_PROP72                         24474  // CATEGORY:STANDARD
#define ID_REMA_PROP73                         24475  // CATEGORY:STANDARD
#define ID_REMA_PROP74                         24476  // CATEGORY:STANDARD
#define ID_REMA_PROP75                         24477  // CATEGORY:STANDARD
#define ID_REMA_PROP76                         24478  // CATEGORY:STANDARD
#define ID_REMA_PROP77                         24479  // CATEGORY:STANDARD
#define ID_REMA_PROP78                         24480  // CATEGORY:STANDARD
#define ID_REMA_PROP79                         24481  // CATEGORY:STANDARD
#define ID_REMA_PROP80                         24483  // CATEGORY:STANDARD
#define ID_REMA_PROP82                         24484  // CATEGORY:STANDARD
#define ID_REMA_PROP83                         24485  // CATEGORY:STANDARD
#define ID_REMA_PROP84                         24486  // CATEGORY:STANDARD
#define ID_REMA_PROP85                         24487  // CATEGORY:STANDARD
#define ID_REMA_PROP86                         24488  // CATEGORY:STANDARD
#define ID_REMA_PROP87                         24489  // CATEGORY:STANDARD
#define ID_REMA_PROP88                         24490  // CATEGORY:STANDARD
#define ID_REMA_PROP89                         24491  // CATEGORY:STANDARD
#define ID_REMA_PROP90                         24492  // CATEGORY:STANDARD
#define ID_REMA_PROP91                         24493  // CATEGORY:STANDARD
#define ID_REMA_PROP92                         24494  // CATEGORY:STANDARD
#define ID_REMA_PROP93                         24495  // CATEGORY:STANDARD
#define ID_REMA_PROP94                         24496  // CATEGORY:STANDARD
#define ID_REMA_PROP95                         24497  // CATEGORY:STANDARD
#define ID_REMA_PROP96                         24498  // CATEGORY:STANDARD
#define ID_REMA_PROP97                         24499  // CATEGORY:STANDARD
#define ID_REMA_PROP98                         24500  // CATEGORY:STANDARD
#define ID_REMA_PROP99                         24501  // CATEGORY:STANDARD
#define ID_REMA_PROP100                        24502  // CATEGORY:STANDARD
#define ID_REMA_PROP101                        24503  // CATEGORY:STANDARD
#define ID_REMA_PROP102                        24504  // CATEGORY:STANDARD
#define ID_REMA_PROP103                        24505  // CATEGORY:STANDARD
#define ID_REMA_PROP104                        24506  // CATEGORY:STANDARD
#define ID_REMA_PROP105                        24507  // CATEGORY:STANDARD
#define ID_REMA_PROP106                        24508  // CATEGORY:STANDARD
#define ID_REMA_PROP107                        24509  // CATEGORY:STANDARD
#define ID_REMA_PROP108                        24510  // CATEGORY:STANDARD
#define ID_REMA_PROP109                        24511  // CATEGORY:STANDARD
#define ID_REMA_PROP110                        24512  // CATEGORY:STANDARD
#define ID_REMA_PROP111                        24513  // CATEGORY:STANDARD
#define ID_REMA_PROP112                        24514  // CATEGORY:STANDARD
#define ID_REMA_PROP113                        24515  // CATEGORY:STANDARD
#define ID_REMA_PROP114                        24516  // CATEGORY:STANDARD
#define ID_REMA_PROP115                        24517  // CATEGORY:STANDARD
#define ID_REMA_PROP116                        24518  // CATEGORY:STANDARD
#define ID_REMA_PROP117                        24519  // CATEGORY:STANDARD
#define ID_REMA_PROP118                        24520  // CATEGORY:STANDARD
#define ID_REMA_PROP119                        24521  // CATEGORY:STANDARD
#define ID_REMA_PROP120                        24522  // CATEGORY:STANDARD
#define ID_REMA_PROP121                        24523  // CATEGORY:STANDARD
#define ID_REMA_PROP122                        24524  // CATEGORY:STANDARD
#define ID_REMA_PROP123                        24525  // CATEGORY:STANDARD
#define ID_REMA_PROP124                        24526  // CATEGORY:STANDARD
#define ID_REMA_PROP125                        24527  // CATEGORY:STANDARD
#define ID_REMA_PROP126                        24528  // CATEGORY:STANDARD
#define ID_REMA_PROP127                        24529  // CATEGORY:STANDARD
#define IDP_BATCH_CS_GENERAL_GRP               24530  // CATEGORY:MDI_BATCH_MR
#define ID_REMA_PROP129                        24531  // CATEGORY:STANDARD
#define ID_REMA_PROP130                        24532  // CATEGORY:STANDARD
#define ID_REMA_PROP131                        24533  // CATEGORY:STANDARD
#define ID_REMA_PROP132                        24534  // CATEGORY:STANDARD
#define ID_REMA_PROP133                        24535  // CATEGORY:STANDARD
#define ID_REMA_PROP134                        24536  // CATEGORY:STANDARD
#define ID_REMA_PROP135                        24537  // CATEGORY:STANDARD
#define ID_REMA_PROP136                        24538  // CATEGORY:STANDARD
#define IDP_BATCH_CS_NAME                      24539  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CS_DESCRIPTION               24540  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CS_IDENTIFIER                24541  // CATEGORY:MDI_BATCH_MR
#define ID_REMA_PROP81                         24542  // CATEGORY:STANDARD EigenschaftsID für WertBit30 der MultiBin ReMa

#define IDS_ANIMATION                          24550  // CATEGORY:STANDARD
#define ID_WRONGPW                             24551  // CATEGORY:STANDARD
#define ID_WRONGUSER                           24552  // CATEGORY:STANDARD
#define ID_VARGROUP                            24553  // CATEGORY:STANDARD

#define	IDS_STRING78	                         24554  // CATEGORY:STANDARD
#define	IDS_STRING79	                         24555  // CATEGORY:STANDARD
#define	IDS_STRING80	                         24556  // CATEGORY:STANDARD
#define	IDS_STRING81	                         24557  // CATEGORY:STANDARD
#define	IDS_STRING82	                         24558  // CATEGORY:STANDARD
#define	IDS_STRING83	                         24559  // CATEGORY:STANDARD

// Properties für Zählergruppen (ZW)
#define ID_ZW_PROP_GRP0                        24570  // CATEGORY:STANDARD
#define ID_ZW_PROP_NAME                        24571  // CATEGORY:STANDARD
#define ID_ZW_PROP_NUMBER                      24572  // CATEGORY:STANDARD
#define ID_ZW_PROP_ZYKLUSZEIT                  24573  // CATEGORY:STANDARD
#define ID_ZW_PROP_EINGANGABS                  24574  // CATEGORY:STANDARD
#define ID_ZW_PROP_AUSGANGABS                  24575  // CATEGORY:STANDARD
#define ID_ZW_PROP_AUSGANGREL                  24576  // CATEGORY:STANDARD
#define ID_ZW_PROP_MAXWERT                     24577  // CATEGORY:STANDARD
#define ID_ZW_PROP_ABFRAGE                     24578  // CATEGORY:STANDARD
#define ID_ZW_PROP_TIMEOUT                     24579  // CATEGORY:STANDARD
#define ID_ZW_PROP_NAHANDLING                  24580  // CATEGORY:STANDARD
#define ID_ZW_PROP_OVHANDLING                  24581  // CATEGORY:STANDARD
#define ID_ZW_PROP_TARIF                       24582  // CATEGORY:STANDARD
#define ID_ZW_PROP_TRIGGER                     24583  // CATEGORY:STANDARD
#define ID_ZW_PROP_OFFSET                      24584  // CATEGORY:STANDARD

#define ID_SCRIPT_IMEX_NAME                    24585  // CATEGORY:STANDARD
#define ID_LEVELLIST_IMEXPO0                   24586  // CATEGORY:STANDARD
#define ID_USERPASSWORD_IMEXPO                 24587  // CATEGORY:STANDARD
#define ID_VAR_ZERO_CLAMPING                   24588  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP33                     24589  // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP34                     24590  // CATEGORY:STANDARD
#define IDP_BATCH_RECIPE_EXPORT_FILE_NAME_PV   24591  // CATEGORY:MDI_BATCH_MR
#define ID_SCRIPT_SYNCWRITE                    24592  // CATEGORY:STANDARD
#define ID_SCRIPT_SYNCWRITE_TIMEOUT            24593  // CATEGORY:STANDARD

#define IDP_RGM_VARIABLETAGNAME                24594  // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_UNIT                           24595  // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_SYMBOLTEXT                     24596  // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_ACTUALVALUE                    24597  // CATEGORY:MDI_REZEPTUR
#define ID_RGM_PROP05                          24598  // CATEGORY:MDI_REZEPTUR
#define ID_RGM_PROP06                          24599  // CATEGORY:MDI_REZEPTUR
#define ID_RGM_PROP07                          24600  // CATEGORY:MDI_REZEPTUR
#define ID_RGM_PROP08                          24601  // CATEGORY:MDI_REZEPTUR
#define ID_RGM_PROP09                          24602  // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_RESOURCESLABEL                 24603  // CATEGORY:MDI_REZEPTUR
#define IDP_BATCH_RECIPE_EXPORT_FILTER         24604  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_OPERATION_EXPORT_FILTER      24605  // CATEGORY:MDI_BATCH_MR
#define ID_RGM_PROP13                          24606  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP14                          24607  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP15                          24608  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP16                          24609  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP17                          24610  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP18                          24611  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP19                          24612  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP20                          24613  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP21                          24614  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP22                          24615  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP23                          24616  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_BATCH_RECIPE_EXPORT_TYPE           24617  // CATEGORY:MDI_BATCH_MR
#define ID_RGM_PROP25                          24618  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP26                          24619  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP27                          24620  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_BATCH_RECIPE_EXPORT_NAMING         24621  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_EXPORT_FILE_NAME      24622  // CATEGORY:MDI_BATCH_MR
#define ID_RGM_PROP30                          24623  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP31                          24624  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP32                          24625  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP33                          24626  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP34                          24627  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP35                          24628  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_PROP36                          24629  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT

#define ID_ARV_PROP01                          24630  // CATEGORY:MDI_AE
#define ID_ARV_PROP02                          24631  // CATEGORY:MDI_AE
#define ID_ARV_PROP03                          24632  // CATEGORY:MDI_AE
#define ID_ARV_PROP04                          24633  // CATEGORY:MDI_AE
#define ID_ARV_PROP05                          24634  // CATEGORY:MDI_AE
#define ID_ARV_PROP06                          24635  // CATEGORY:MDI_AE
#define ID_ARV_PROP07                          24636  // CATEGORY:MDI_AE
#define ID_ARV_PROP08                          24637  // CATEGORY:MDI_AE
#define ID_ARV_PROP09                          24638  // CATEGORY:MDI_AE
#define ID_ARV_PROP10                          24639  // CATEGORY:MDI_AE
#define ID_ARV_PROP11                          24640  // CATEGORY:MDI_AE
#define ID_ARV_PROP12                          24641  // CATEGORY:MDI_AE
#define ID_ARV_PROP13                          24642  // CATEGORY:MDI_AE
#define ID_ARV_PROP14                          24643  // CATEGORY:MDI_AE
#define ID_ARV_PROP15                          24644  // CATEGORY:MDI_AE
#define ID_ARV_PROP16                          24645  // CATEGORY:MDI_AE
#define ID_ARV_PROP17                          24646  // CATEGORY:MDI_AE
#define ID_ARV_PROP18                          24647  // CATEGORY:MDI_AE
#define ID_ARV_PROP19                          24648  // CATEGORY:MDI_AE
#define ID_ARV_PROP20                          24649  // CATEGORY:MDI_AE
#define ID_ARV_PROP21                          24650  // CATEGORY:MDI_AE
#define ID_ARV_PROP22                          24651  // CATEGORY:MDI_AE
#define ID_ARV_PROP23                          24652  // CATEGORY:MDI_AE
#define ID_ARV_PROP24                          24653  // CATEGORY:MDI_AE
#define ID_ARV_PROP25                          24654  // CATEGORY:MDI_AE
#define ID_ARV_PROP26                          24655  // CATEGORY:MDI_AE
#define ID_ARV_PROP27                          24656  // CATEGORY:MDI_AE
#define ID_ARV_PROP28                          24657  // CATEGORY:MDI_AE
#define ID_ARV_PROP29                          24658  // CATEGORY:MDI_AE
#define ID_ARV_PROP30                          24659  // CATEGORY:MDI_AE
#define ID_ARV_PROP31                          24660  // CATEGORY:MDI_AE
#define ID_ARV_PROP32                          24661  // CATEGORY:MDI_AE

#define IDP_RGM_FILTER_TARGETRECIPE_SET       24662  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_FILTER_TARGETVERSION_SET      24663  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_FILTER_TARGETSTATUS_SET       24664  // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT

#define ID_PROJEKT_AUTOMATIC_FUNCTION_ID       24665  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP11_ID                24666  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP12_ID                24667  // CATEGORY:STANDARD
#define ID_PROJECT_MULTIUSER                   24668  // CATEGORY:STANDARD
#define ID_ERSETZEN_ZUSAMMEN                   24670  // CATEGORY:STANDARD
#define ID_KNOTEN_VERKN                        24671  // CATEGORY:STANDARD
#define ID_VORSCHAU                            24672  // CATEGORY:STANDARD
#define IDS_VAR_ERSATZWERT_STRING              24673  // CATEGORY:MDI_AE
#define ID_ARCHIV_BACKUPPFAD                   24674  // CATEGORY:STANDARD
#define ID_RECIPE_PW                           24675  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP6                        24676  // CATEGORY:STANDARD
#define ID_PROJECT_ASMDNS                      24677  // CATEGORY:STANDARD
#define ID_PROJECT_ASMTABLE                    24678  // CATEGORY:STANDARD
#define ID_PROJECT_ASMPREDEFFILTER             24679  // CATEGORY:STANDARD
#define ID_PROJECT_ASMAKZ                      24680  // CATEGORY:STANDARD
#define ID_VARINASM                            24681  // CATEGORY:STANDARD
#define ID_PROJECT_ASMACTIVE                   24682  // CATEGORY:STANDARD
#define ID_PROJECT_ASMCYCLETIME                24683  // CATEGORY:STANDARD
#define ID_PROJECT_ASMBUFFERSIZE               24684  // CATEGORY:STANDARD
#define ID_COMBO_STATETEXT                     24685  // CATEGORY:STANDARD
#define ID_COMBO_STATEVALUE                    24686  // CATEGORY:STANDARD

#define ID_CHANGELOG_PROP_GRP0                 24687  // CATEGORY:STANDARD
#define ID_CHANGELOG_NUMBER                    24688  // CATEGORY:STANDARD
#define ID_CHANGELOG_TIMESTAMP                 24689  // CATEGORY:STANDARD
#define ID_CHANGELOG_USER                      24690  // CATEGORY:STANDARD
#define ID_CHANGELOG_ARBEITSPLATZ              24691  // CATEGORY:STANDARD
#define ID_CHANGELOG_MODUL                     24692  // CATEGORY:STANDARD
#define ID_CHANGELOG_OBJEKT                    24693  // CATEGORY:STANDARD
#define ID_CHANGELOG_PROPERTY                  24694  // CATEGORY:STANDARD
#define ID_CHANGELOG_AKTION                    24695  // CATEGORY:STANDARD
#define ID_CHANGELOG_COMMENT                   24696  // CATEGORY:STANDARD
#define ID_CHANGELOG_WERTALT                   24697  // CATEGORY:STANDARD
#define ID_CHANGELOG_WERTNEU                   24698  // CATEGORY:STANDARD
#define ID_VAR_ALARMQUIT                       24699  // CATEGORY:STANDARD
#define ID_VAR_ALARMQUIT_VALUE                 24700  // CATEGORY:STANDARD
#define ID_COMBI_DOWNTEXT                      24701  // CATEGORY:STANDARD

#define ID_VAR_SWP_ART                         24702  // CATEGORY:STANDARD
#define ID_VAR_SWP_ACT                         24703  // CATEGORY:STANDARD
#define ID_VAR_SWP_VBA                         24704  // CATEGORY:STANDARD

#define ID_PROJEKT_ALT_PATH                    24705  // CATEGORY:STANDARD

#define ID_RECIPE_GRP1                         24706  // CATEGORY:STANDARD
#define ID_SCRIPT_GRP0                         24707  // CATEGORY:STANDARD
#define ID_TREIBER_GRP0                        24708  // CATEGORY:STANDARD
#define ID_VAR_NORMALZUSTANDAKT                24709  // CATEGORY:STANDARD

#define ID_VAR_GW_DEL                          24710  // CATEGORY:STANDARD
#define ID_VAR_GW_NEW                          24711  // CATEGORY:STANDARD
#define ID_TREND_NEU                           24712  // CATEGORY:STANDARD
#define ID_TREND_DEL                           24713  // CATEGORY:STANDARD
#define ID_SCRIPT_DEL                          24714  // CATEGORY:STANDARD
#define ID_SCRIPT_NEW                          24715  // CATEGORY:STANDARD

#define ID_RGM_PROP37                          24716  // CATEGORY:STANDARD
#define IDP_ETM_FIRST_CUR_VAR                  24717  // CATEGORY:STANDARD
#define IDP_ETM_SECOND_CUR_VAR                 24718  // CATEGORY:STANDARD
#define ID_REMA_STATES                         24719  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_DEL                    24720  // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_NEW                    24721  // CATEGORY:STANDARD
#define ID_MONITOR_VERWALTUNG                  24725  // CATEGORY:STANDARD

#define ID_VAR_GW_KOMMENTAR                    24726  // CATEGORY:STANDARD
#define ID_PROP_AML_FILTER_COMMENT             24727  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG89                    24728  // CATEGORY:STANDARD

#define IDP_RV_FCT_FILENAME                    24729  // CATEGORY:STANDARD

#define ID_TYPE_GW_NEW                         24730  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_IDCLIENT              24731  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP20                       24732  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_SOURCECONTROL_STATE                 24733  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_OBJECT                24734  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_MODULE                24735  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_SHOWSTATE             24736  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_SHOWCLIENT            24737  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_CTIME                 24738  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_MTIME                 24739  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_SHOWCTIME             24740  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_SHOWMTIME             24741  // CATEGORY:STANDARD
#define ID_SOURCECONTROL_TARGET                24742  // CATEGORY:STANDARD
#define ID_PROJECT_ASMAKZMODE                  24743  // CATEGORY:STANDARD
#define ID_ELE_DRAGBEGIN                       24744  // CATEGORY:STANDARD
#define ID_ELE_DRAGOVER                        24745  // CATEGORY:STANDARD
#define ID_ELE_DRAGDROP                        24746  // CATEGORY:STANDARD

#define IDP_RV_FCT_VARIABLE                    24747  // CATEGORY:STANDARD

#define ID_CHANGELOG_ELEMENT                   24748  // CATEGORY:STANDARD
#define ID_PROJEKT_CHANGELOG_AUTOCHECKOUT      24749  // CATEGORY:STANDARD
#define ID_LEVELEDIT                           24750  // CATEGORY:STANDARD
#define ID_BACKUP_FILE_NAME                    24751  // CATEGORY:STANDARD
#define ID_BACKUP_FILE_SIZE                    24752  // CATEGORY:STANDARD
#define ID_BACKUP_FILE_DESC                    24753  // CATEGORY:STANDARD
#define ID_BACKUP_FILE_TIME                    24754  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP7                        24755  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP8                        24756  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP9                        24757  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP10                       24758  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP11                       24759  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP12                       24760  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP13                       24761  // CATEGORY:STANDARD
#define ID_PROJEKT_GRP14                       24762  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP10                      24763  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP16                      24764  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP21                      24765  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP22                      24766  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP23                      24767  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP25                      24768  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP26                      24769  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP27                      24770  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP28                      24771  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP29                      24772  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP30                      22773  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP33                      24774  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP43                      24775  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP45                      24776  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP46                      24777  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP47                      24778  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP48                      24779  // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP49                      24780  // CATEGORY:STANDARD

#define ID_VERRIEG_PROP16                      24781  // CATEGORY:STANDARD
#define LOCK_FILL_COLOR                        24782  // CATEGORY:STANDARD
#define LOCK_LINE_COLOR                        24783  // CATEGORY:STANDARD

#define IDP_BATCH_RECIPE_EXPORT_FILE_OVR_EXIST 24784  // CATEGORY:MDI_BATCH_MR

#define ID_ELE_PROP379                         24785  // CATEGORY:STANDARD
#define ID_ELE_PROP380                         24786  // CATEGORY:STANDARD
#define IDP_LOCKED_BUTTONS                     24787  // CATEGORY:STANDARD
#define ID_ELE_PROP381                         24788  // CATEGORY:STANDARD
#define ID_PROJECT_DBD_SERVER                  24789  // CATEGORY:STANDARD
#define ID_LEVELLIST_IMEXPO1                   24790  // CATEGORY:MDI_LOGIN
#define ID_LEVELLIST_IMEXPO2                   24791  // CATEGORY:MDI_LOGIN
#define ID_LEVELLIST_IMEXPO3                   24792  // CATEGORY:MDI_LOGIN
  
#define ID_PROJECT_IPA_SHIFTINFOPFS            24793  // CATEGORY:MDI_ASM
#define ID_PROJECT_IPA_SHIFTLIST               24794  // CATEGORY:MDI_ASM
#define ID_PROJECT_IPA_SHIFTINFOVARIABLE       24795  // CATEGORY:MDI_ASM
#define ID_PROJECT_IPA_SHIFTPFS                24796  // CATEGORY:MDI_ASM

#define ID_SATBEF_PROP_SCRIPTING_TYPE          24797  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR01         24798  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR02         24799  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR03         24800  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR04         24801  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR05         24802  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR06         24803  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR07         24804  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR08         24805  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR09         24806  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR10         24807  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR11         24808  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR12         24809  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR13         24810  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR14         24811  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_VAR15         24812  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define IDP_ANALYZER_REP_SECURE_CONNECTION     24813  // CATEGORY:STANDARD
#define IDP_ANALYZER_REP_CONNECTION_TIMEOUT    24814  // CATEGORY:STANDARD
#define IDS_TEXTCOLOR_VARIABLE                 24815  // CATEGORY:STANDARD COMMENT:Textfarbe dynamisch
#define ID_ELE_PROP_GRP_TEXTCOLORDYN           24816  // CATEGORY:STANDARD COMMENT:Gruppe Textfarbe dynamisch
#define ID_DYN_PROP_LINECOLORVAR_PREVIEW       24817  // CATEGORY:STANDARD COMMENT:Grenzwertvorschau Linienfarbe dynamisch
#define ID_SATBEF_PROP_SCRIPTING_FKT01         24818  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT02         24819  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT03         24820  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT04         24821  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT05         24822  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT06         24823  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT07         24824  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT08         24825  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT09         24826  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_FKT10         24827  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR01         24828  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR02         24829  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR03         24830  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR04         24831  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR05         24832  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR06         24833  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR07         24834  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR08         24835  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR09         24836  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SCRIPTING_PAR10         24837  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_FKTMODE                 24838  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_CMD_ON               24839  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_CMD_OFF              24840  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_CMD_3                24841  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_CMD_4                24842  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_CMD_5                24843  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_SETPOINT             24844  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_RI                   24845  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_LOCK_1               24846  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_LOCK_2               24847  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_PV_LOCK_3               24848  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_CMD_DET_ON              24849  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_CMD_DET_OFF             24850  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_CMD_DET_3               24851  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_CMD_DET_4               24852  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_CMD_DET_5               24853  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_SETPOINT_DET            24854  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_RI_STATE_LOCK           24855  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_RI_STATE_LOCKMASK       24856  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_TIMEOUT                 24857  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_MOD_STAT_BITS           24858  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_LOCKINVERT              24859  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_DETAIL                  24860  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND
#define ID_SATBEF_PROP_LOCKGLOBAL              24861  // CATEGORY:MDI_BEFDBAG:MDI_STATUS:MDI_ZUSTAND

#define ID_PROJECT_IPA_USRLEVEL                24862  // CATEGORY:MDI_LOGIN

#define ID_ARCHIVE_BATCH_IDX                   24863  // CATEGORY:MDI_AE:MDI_BATCH_MR

#define ID_ELE_PROP382                         24864  // CATEGORY:STANDARD  ALC
#define ID_ELE_PROP383                         24865  // CATEGORY:STANDARD
#define ID_ELE_PROP384                         24866  // CATEGORY:STANDARD
#define ID_ELE_PROP385                         24867  // CATEGORY:STANDARD
#define ID_ELE_PROP386                         24868  // CATEGORY:STANDARD
#define ID_PROJECT_ALC_CONFIG                  24869  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_ALARM2                  24870  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_ALARM3                  24871  // CATEGORY:STANDARD
#define ID_ELE_MULTVAR_BLINK                   24872  // CATEGORY:STANDARD

#define ID_PICTURE_MIN                         24873  // CATEGORY:STANDARD
#define ID_PICTURE_SYSMENU                     24874  // CATEGORY:STANDARD
#define ID_BACKUP_FILE_COMPUTER                24875  // CATEGORY:STANDARD
#define ID_BACKUP_FILE_ISSERVER                24876  // CATEGORY:STANDARD

#define ID_PROJEKT_VARBEZEICHNER               24877  // CATEGORY:STANDARD

#define IDS_PROJEKT_INFO                       24878  // CATEGORY:STANDARD
#define IDS_PROJEKT_DIRS                       24879  // CATEGORY:STANDARD
#define IDS_PROJEKT_REMTRANS                   24880  // CATEGORY:STANDARD
#define IDS_PROJEKT_MODIFILES                  24881  // CATEGORY:STANDARD
#define ID_REMA_CHAIN                          24882  // CATEGORY:STANDARD
/// Array Startindex
#define ID_VAR_LBOUND                          24883  // CATEGORY:STANDARD
///UserProperty1
#define ID_VAR_GW_USERPROP1                    24884  // CATEGORY:MDI_LOGIN
///UserProperty2
#define ID_VAR_GW_USERPROP2                    24885  // CATEGORY:MDI_LOGIN 
///OwnerFlag für UserProperty1
#define ID_VARED_OWN_FLAG61                    24886   // CATEGORY:STANDARD
///OwnerFlag für UserProperty2
#define ID_VARED_OWN_FLAG62                    24887   // CATEGORY:STANDARD 
#define IDS_PROJEKT_ACTIVE_DIR                 24888   // CATEGORY:STANDARD
///Alarmbereich 1 der Variable
#define ID_VAR_ALARMBEREICH1                   24889   // CATEGORY:ALARM
///Projekteigenschaft: Kann der Signaturtext zur RT geändert werden?
#define ID_EDITSIGNATURE                       24890   // CATEGORY:STANDARD

#define ID_PROJECT_IPA_ALARMCAUSELIST          24891   // CATEGORY:ALARM:MDI_ASM
#define ID_PROJECT_IPA_USRLEVELCAUSE           24892   // CATEGORY:STANDARD
#define ID_PROJECT_MAIN_TEMPLATES							 24893   // CATEGORY:STANDARD
#define ID_PROJECT_ZOOM_STEPS									 24894   // CATEGORY:STANDARD

// in resource.h: #define IDP_OLE_INIT_FAILED 24896

/// Eigenschaftengruppe für AML: Speicher
#define ID_AML_GRP_MEM                         24898   // CATEGORY:ALARM
/// Eigenschaftengruppe für AML: Statuszeile
#define ID_AML_GRP_STATUSBAR                   24899   // CATEGORY:ALARM
/// Eigenschaft für AML: Alarm-Verw. aktiv
#define ID_AML_AKTIV                           24900   // CATEGORY:ALARM
/// Eigenschaft für AML: Blinkquittierung
#define ID_AML_BLINKQUIT                       24901   // CATEGORY:ALARM
/// Eigenschaft für AML: Quittierung in CEL
#define ID_AML_QUITINCEL                       24902   // CATEGORY:ALARM
/// Eigenschaft für AML: mit Reaktiviertzeit
#define ID_AML_MITREAKTZEIT                    24903   // CATEGORY:ALARM
/// Eigenschaft für AML: Gruppen
#define ID_AML_GRUPPEN                         24904   // CATEGORY:ALARM
/// Eigenschaft für AML: Klassen
#define ID_AML_KLASSEN                         24905   // CATEGORY:ALARM
/// Eigenschaft für AML: Bereiche
#define ID_AML_BEREICHE                        24906   // CATEGORY:ALARM
/// Eigenschaft für AML: Alarm kommt
#define ID_AML_COLOR_KOMMT                     24907   // CATEGORY:ALARM
/// Eigenschaft für AML: Alarm geht
#define ID_AML_COLOR_GEHT                      24908   // CATEGORY:ALARM
/// Eigenschaft für AML: Alarm quittiert
#define ID_AML_COLOR_QUIT                      24909   // CATEGORY:ALARM
/// Eigenschaft für AML: Klassenfarbe
#define ID_AML_CLS_COLOR                       24910   // CATEGORY:ALARM
/// Eigenschaft für AML: Alarmanzahl im Sp.
#define ID_AML_MEMCOUNT                        24912   // CATEGORY:ALARM
/// Eigenschaft für AML: Alarme Ausreihen
#define ID_AML_DETACH                          24913   // CATEGORY:ALARM
/// Eigenschaft für AML: Spalteneinstallungen
#define ID_AML_LISTENTRY                       24914   // CATEGORY:ALARM
/// Eigenschaft für AML: Statusz. aktiv
#define ID_AML_STATUS_AKTIV                    24916   // CATEGORY:ALARM
/// Eigenschaft für AML: nächsten nachschieben
#define ID_AML_STATUS_SUBSEQ                   24917   // CATEGORY:ALARM
/// Eigenschaft für AML: Anzeige
#define ID_AML_STATUS_DISPLAY                  24918   // CATEGORY:ALARM
/// Eigenschaft für AML: Schriftart
#define ID_AML_STATUS_FONT                     24919   // CATEGORY:ALARM
/// Eigenschaft für AML: Meldung 1 Alarmanzahl
#define ID_AML_COUNT1                          24920   // CATEGORY:ALARM
/// Eigenschaft für AML: Meldung 1 Text
#define ID_AML_MSG1                            24921   // CATEGORY:ALARM
/// Eigenschaft für AML: Meldung 2 Alarmanzahl
#define ID_AML_COUNT2                          24922   // CATEGORY:ALARM
/// Eigenschaft für AML: Meldung 2 Text
#define ID_AML_MSG2                            24923   // CATEGORY:ALARM
/// Eigenschaft für AML: Meldung 3 Alarmanzahl
#define ID_AML_COUNT3                          24924   // CATEGORY:ALARM
/// Eigenschaft für AML: Meldung 3 Text
#define ID_AML_MSG3                            24925   // CATEGORY:ALARM
/// Eigenschaft für AML: Alarmlisten Kopfzeile
#define ID_AML_LST_STYLE                       24926   // CATEGORY:ALARM

/// Eigenschaftengruppe für CEL: Allgemein
#define ID_CEL_GRP_ALLGEMEIN                   24927   // CATEGORY:EZ_BTB
/// Eigenschaftengruppe für CEL: Farben
#define ID_CEL_GRP_COLOR                       24928   // CATEGORY:EZ_BTB
/// Eigenschaftengruppe für CEL: Speicher
#define ID_CEL_GRP_MEM                         24929   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: CEL-Verw. aktiv
#define ID_CEL_AKTIV                           24930   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: Systemmeld. drucken
#define ID_CEL_SYSMSGPRT                       24931   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: spontan
#define ID_CEL_SPONTAN                         24932   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: sortierter Text
#define ID_CEL_COLOR_SORT                      24933   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: unsortierter Text
#define ID_CEL_COLOR_UNSORT                    24934   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: Klassenfarbe
#define ID_CEL_CLS_COLOR                       24935   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: Anzahl der Ereignisse
#define ID_CEL_MEMCOUNT                        24936   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: Listen Kopfzeile
#define ID_CEL_LST_STYLE                       24937   // CATEGORY:EZ_BTB
/// Eigenschaft für CEL: Spalteneinstallungen
#define ID_CEL_LISTENTRY                       24938   // CATEGORY:EZ_BTB
///Eigenschaft für Vorschau Spalte in der Listenansicht
#define ID_LIST_PREVIEW                        24939   // CATEGORY:EZ_BTB
/// Eigenschaft für Variablenmodifizieren. Fehlermeldung
#define ID_VARMOD_MSG                          24940   // CATEGORY:STANDARD
/// Eigenschaft für Variablenmodifizieren. Treiber
#define ID_VARMOD_TRB                          24941   // CATEGORY:STANDARD
/// Name des exportierten Property für Symbole
#define ID_EXP_PROP_NAME                       24942   // CATEGORY:STANDARD
/// Knoten der exportierten Properties
#define ID_DYN_EXPPROPS                        24943   // CATEGORY:STANDARD
/// ID des exportierten Property für Symbole
#define ID_EXP_PROP_ID                         24944   // CATEGORY:STANDARD
/// ID für Wert des exportierten Properties
#define ID_EXP_PROP_VALUE                      24945   // CATEGORY:STANDARD

/// Industial Maintenance Manager
#define ID_PROJEKT_GRP15                       24946   // CATEGORY:MDI_IMM
#define ID_IMM_USERLVL                         24947   // CATEGORY:MDI_IMM  
#define ID_IMM_DNS                             24948   // CATEGORY:MDI_IMM
#define ID_IMM_TABLEDEV                        24949   // CATEGORY:MDI_IMM
#define ID_IMM_TABLEMAINT                      24950   // CATEGORY:MDI_IMM
#define ID_IMM_TABLEHIST                       24951   // CATEGORY:MDI_IMM
#define ID_IMM_TABLEDOC                        24952   // CATEGORY:MDI_IMM
#define ID_VERRIEG_ILOCKTYPE                   24953   //CATEGORY:MDI_ENERGY

#define IDP_BATCH_RECIPE_EXPORT_SHOW_RT        24954  // CATEGORY:MDI_BATCH_MR

#define IDP_GRP_HDDMANAGER                     24955   // CATEGORY:STANDARD
#define IDP_HDD_FILLDATA                       24956   // CATEGORY:STANDARD
#define IDP_RTP_SYSKEYLOCK                     24957   // CATEGORY:STANDARD
#define IDP_HDD_ACTIVE                         24958   // CATEGORY:STANDARD
#define IDP_RTP_WATCHFILES                     24959   // CATEGORY:STANDARD
#define IDP_GRP_FCNMANAGER                     24960   // CATEGORY:STANDARD
#define IDP_RTP_PICTBACKCOUNT                  24961   // CATEGORY:STANDARD
#define IDP_AML_LONGLIMITS                     24962   // CATEGORY:STANDARD
#define IDP_CEL_LONGLIMITS                     24963   // CATEGORY:STANDARD
#define IDP_PRN_MAXJOBS                        24964   // CATEGORY:STANDARD
#define IDP_CEL_ARVERRPERIOD                   24965   // CATEGORY:STANDARD
#define IDP_GRP_RTDIALOGES                     24966   // CATEGORY:STANDARD
#define IDP_RTD_ACTION_OK                      24967   // CATEGORY:STANDARD
#define IDP_RTD_FILE_REPLACE                   24968   // CATEGORY:STANDARD
#define IDP_RTD_INVALID_INPUT                  24969   // CATEGORY:STANDARD

/// Straton Knoten "Workbench"
#define IDP_STRATON_WORKBENCH                 24970   // CATEGORY:STANDARD
/// Straton Knoten "Runtime"
#define IDP_STRATON_RUNTIME                   24971   // CATEGORY:STANDARD
/// Verbindungstimeout
#define IDP_STRATON_TIMEOUT                   24972   // CATEGORY:STANDARD
/// Host für die Startzeile der VM
#define IDP_STRATON_CMD_HOST                  24973   // CATEGORY:STANDARD
/// MainPort für die Startzeile der VM
#define IDP_STRATON_CMD_MAINPORT              24974   // CATEGORY:STANDARD
/// BindPort für die Startzeile der VM
#define IDP_STRATON_CMD_BINDPORT              24975   // CATEGORY:STANDARD
/// Startart für die Satrtzeile der VM
#define IDP_STRATON_CMD_START                 24976   // CATEGORY:STANDARD
/// Schrittmodus des Startes der VM
#define IDP_STRATON_CMD_STEP                  24977   // CATEGORY:STANDARD
/// Priority des Startes der VM
#define IDP_STRATON_CMD_PRIO                  24978   // CATEGORY:STANDARD
#define IDP_RGM_FILTER_FILTER_SET             24979   // CATEGORY:STANDARD
/// Redundanz im Betrieb der VM
#define IDP_STRATON_CMD_REDUNDANCY            24980   // CATEGORY:STANDARD
//Verriegelung
#define ID_INTERLOCKING_ACTIONS               24981   // CATEGORY:STANDARD
#define ID_INTERLOCKING_VARIABLES             24982   // CATEGORY:STANDARD
#define ID_INTERLOCKING_ISCOMMAND             24983   // CATEGORY:STANDARD
/// Befehlsgabe MDI modal
#define ID_VERRIEG_PROP17                     24984   // CATEGORY:STANDARD
/// Befehlsgabe MDI-Fenstertitel aus RM Variable
#define ID_VERRIEG_PROP18                     24985   // CATEGORY:STANDARD
/// Befehlsgabe Befehlsfenster    
#define ID_VERRIEG_PROP19                     24986   // CATEGORY:STANDARD
/// Befehlsparameter spezifisches MDI-Fenster
#define ID_VERRIEG_PROP20                     24987   // CATEGORY:STANDARD
/// Befehlsparameter Button     
#define ID_VERRIEG_PROP21                     24988   // CATEGORY:STANDARD
/// Befehlsparameter Fenster nach 2. Stufe schliessen
#define ID_VERRIEG_PROP22                     24989   // CATEGORY:STANDARD
/// Befehlsparameter Zweihand
#define ID_VERRIEG_PROP23                     24990   // CATEGORY:STANDARD
/// Flankenverzögerung bei Einzelbefehl
#define ID_VERRIEG_PROP24                     24991   // CATEGORY:STANDARD
/// Befehlsparameter zweistufige Bedienung
#define ID_VERRIEG_PROP25                     24992   // CATEGORY:STANDARD
///Projekteigenschaft: Runtime-Version
#define ID_PROJECT_RTVERSION                  24993   // CATEGORY:STANDARD
/// Bildfilter Power Aufschaltstufe
#define ID_FLTPWR_LEVEL                       24994   // CATEGORY:STANDARD
/// Bildfilter Power Variable für Verriegelung
#define ID_FLTPWR_ILOCKVAR                    24995   // CATEGORY:STANDARD
///Original Breite vom Symbol
#define ID_PROP_ORGWIDTH                      24996   // CATEGORY:STANDARD
///Original Höhe vom Symbol
#define ID_PROP_ORGHEIGTH                     24997   // CATEGORY:STANDARD
/// Befehlsparameter Button f. XML
#define ID_VERRIEG_PROP26                     24998   // CATEGORY:STANDARD
/// Variablenname für Import / Export
#define ID_VERRIEG_PROP27                     24999   // CATEGORY:STANDARD

#define ID_PROJEKT_GRP16                      25000   // CATEGORY:STANDARD
#define ID_PROJEKT_GRP17                      25001   // CATEGORY:STANDARD
#define ID_PROJEKT_GRP18                      25002   // CATEGORY:STANDARD
#define ID_PROJEKT_GRP19                      25003   // CATEGORY:STANDARD
/// Befehlsgabe-Aktion disabled wenn Zustand bereits vorhanden
#define IDP_CMD_GUI_NOT_ACTUAL                25004   // CATEGORY:STANDARD


#define IDP_SHIFT_PIC_FLT_SHOW_RT             25005 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_PIC_FLT_WORK_DAYS           25006 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_PIC_FLT_WORK_DAY_TIMES      25007 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_PIC_FLT_FIRST_WEEK_DAY      25008 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_PIC_FLT_VIEW_MODE           25009 // CATEGORY:MDI_SHIFTMANAGEMENT

/// Befehlsverriegelung / Befehlsparameter Bildname
#define ID_VERRIEG_PROP28                     25010   // CATEGORY:STANDARD
/// ID für Gruppe zu welche das exportierte Property vom Symbol gehört.
#define ID_EXP_GRP_ID                         25011   // CATEGORY:STANDARD
#define ID_PROP_COMBOLIST_SOFORTREAKT         25012   // CATEGORY:STANDARD

// Owner-Flags für Properties
#define ID_VARED_OWN_FLAG63                   25013   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG64                   25014   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG65                   25015   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG66                   25016   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG67                   25017   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG68                   25018   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG69                   25019   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG70                   25020   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG71                   25021   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG72                   25022   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG73                   25023   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG74                   25024   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG75                   25025   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG76                   25026   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG77                   25027   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG78                   25028   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG79                   25029   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG80                   25030   // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG81                   25031   // CATEGORY:STANDARD
#define ID_VAR_PROP_GRP13                     25032   // CATEGORY:STANDARD
#define ID_VAR_PROP_ANALYZER1                 25033   // CATEGORY:STANDARD
#define ID_VAR_PROP_ANALYZER2                 25034   // CATEGORY:STANDARD
#define ID_VAR_PROP_ANALYZER3                 25035   // CATEGORY:STANDARD
#define IDP_BATCH_PHASE_CONTROLSTRATEGY       25036   // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CS_TAGLINK                  25037   // CATEGORY:MDI_BATCH_MR
/// Schaltfolge-Aktion überspringen wenn Zustand bereits vorhanden
#define IDP_CMDSEQ_SKIP_ACTUAL                25038   // CATEGORY:STANDARD

#define ID_ELE_PROP387                        25039   // CATEGORY:STANDARD
#define ID_ELE_PROP388                        25040   // CATEGORY:STANDARD

/// Ob die Zahlenbasis der in der RT angezeigten Werte präsentiert werden muss
#define ID_ELE_NUM_BASE_ON                    25041   // CATEGORY:STANDARD
#define ID_ELE_PROP389                        25042   // CATEGORY:STANDARD

// Bunte Kasperlrahmen um Elemente
#define ID_ELE_PROP_GRP50                     25043   // CATEGORY:STANDARD
#define ID_ELE_PROP390                        25044   // CATEGORY:STANDARD
#define ID_ELE_PROP391                        25045   // CATEGORY:STANDARD
#define ID_ELE_PROP392                        25046   // CATEGORY:STANDARD
#define ID_ELE_PROP393                        25047   // CATEGORY:STANDARD

/// Quell-Pfadmodus der Dateioperation
#define IDP_FILE_FCN_PATH_SRC                 25048   // CATEGORY:STANDARD
/// Ziel-Pfadmodus der Dateioperation
#define IDP_FILE_FCN_PATH_DST                 25049   // CATEGORY:STANDARD
/// Dateioperation: Tage für "nicht älter als"
#define IDP_FILE_FCN_OLD_DAYS                 25050   // CATEGORY:STANDARD
/// Dateioperation: Stunden für "nicht älter als"
#define IDP_FILE_FCN_OLD_HOURS                25051   // CATEGORY:STANDARD
/// Ob das Keyboardfenster beim Sollwertsezen kommen soll
#define IDP_DYN_ELE_KBD                       25052   // CATEGORY:STANDARD
/// Name des Keyboardfensters, das beim Sollwertsezen kommen soll
#define IDP_DYN_ELE_KBD_NAME                  25053   // CATEGORY:STANDARD
///Properties für Gruppe/Klasse der Alarmierung
#define ID_ALARM_PROP_GRPKLS_NAME             25054   // CATEGORY:ALARM
#define ID_ALARM_PROP_GRPKLS_TEXT             25055   // CATEGORY:ALARM
#define ID_ALARM_PROP_BEREICH_NAME            25056   // CATEGORY:ALARM
#define ID_ALARM_PROP_BEREICH_ITEMS           25057   // CATEGORY:ALARM
#define ID_ALARM_BEREICHITEM_STATUSVAR        25058   // CATEGORY:ALARM
#define ID_ALARM_PROP_GRPKLS_COLOR            25059   // CATEGORY:ALARM
#define ID_ALARM_PROP_GRPKLS                  25062   // CATEGORY:ALARM
#define ID_ALARM_BEREICHITEM_ALARMVAR         25063   // CATEGORY:ALARM
#define ID_ALARM_BEREICHITEM_QUITVAR          25064   // CATEGORY:ALARM
#define ID_ALARM_BEREICHITEM_KLASSE           25065   // CATEGORY:ALARM
#define ID_ALARM_BEREICHITEM_DELETE           25066   // CATEGORY:ALARM
#define ID_ALARM_BEREICHITEM_KLASSENAME       25067   // CATEGORY:ALARM
/// Ob die führenden Nullen - bei nicht dezimalen Werten - dargestellt werden sollen
#define IDP_VALUE_LEADING_ZEROS               25068   // CATEGORY:STANDARD

#define ID_AMLCEL_STATUSFILTER                25069   // CATEGORY:STANDARD
#define ID_AMLCEL_STATUSMASK                  25070   // CATEGORY:STANDARD

/// automatische Tastatur, Positionierung
#define ID_PROJEKT_TOUCHSCREEN_TOPBOT         25071   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCHSCREEN_RIGHTLEFT      25072   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCHSCREEN_HORZ           25073   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCHSCREEN_VERT           25074   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCHSCREEN_TOPBOT_ALT     25075   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCHSCREEN_RIGHTLEFT_ALT  25076   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCHSCREEN_HORZ_ALT       25077   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCHSCREEN_VERT_ALT       25078   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCH1                     25079   // CATEGORY:STANDARD
#define ID_PROJEKT_TOUCH2                     25080   // CATEGORY:STANDARD

// EMS Properties
#define ID_EMS_PROP_GRP0                      25081   // CATEGORY:MDI_EMS Allgemein
#define ID_EMS_PROP0                          25082   // CATEGORY:MDI_EMS   
#define ID_EMS_PROP1                          25083   // CATEGORY:MDI_EMS
#define IDP_VAR_ALARMEQUIP                    25084   // CATEGORY:ALARM
#define ID_VARED_OWN_FLAG82                   25085   // CATEGORY:STANDARD
#define IDP_FCN_SEQ_TEACHING_SHOWRT           25086   // CATEGORY:MDI_SCHALTFOLGEN
#define IDP_FCN_SEQ_TEACHING_OPTION           25087   // CATEGORY:MDI_SCHALTFOLGEN
#define IDP_FKT_ARCHIVE_EXPORT_TYPE           25088   // CATEGORY:STANDARD
#define IDP_FKT_ARCHIVE_EXPORT_USE_LOT        25089   // CATEGORY:STANDARD
#define ID_EMS_PROP8                          25090   // CATEGORY:MDI_EMS
#define ID_EMS_PROP9                          25091   // CATEGORY:MDI_EMS
#define ID_EMS_PROP10                         25092   // CATEGORY:MDI_EMS
#define ID_EMS_PROP11                         25093   // CATEGORY:MDI_EMS
#define ID_EMS_PROP12                         25094   // CATEGORY:MDI_EMS
#define ID_EMS_PROP13                         25095   // CATEGORY:MDI_EMS
#define ID_EMS_PROP14                         25096   // CATEGORY:MDI_EMS
#define ID_EMS_PROP15                         25097   // CATEGORY:MDI_EMS
#define ID_EMS_PROP16                         25098   // CATEGORY:MDI_EMS
#define ID_EMS_PROP17                         25099   // CATEGORY:MDI_EMS
#define ID_EMS_PROP18                         25100   // CATEGORY:MDI_EMS
#define ID_EMS_PROP19                         25101   // CATEGORY:MDI_EMS
#define ID_EMS_PROP20                         25102   // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP1                      25103   // CATEGORY:MDI_EMS STROM
#define IDP_FCN_MT_PARALLELEXEC_SHOWRT        25104   // CATEGORY:STANDARD
#define ID_EMS_PROP_GRP3                      25105   // CATEGORY:MDI_EMS KOPT Parameter
#define IDP_FCN_MT_PARALLELEXEC_COMMAND       25106   // CATEGORY:STANDARD
#define ID_EMS_PROP22                         25107   // CATEGORY:MDI_EMS
#define ID_EMS_PROP23                         25108   // CATEGORY:MDI_EMS
#define ID_EMS_PROP24                         25109   // CATEGORY:MDI_EMS
#define ID_EMS_PROP25                         25110   // CATEGORY:MDI_EMS
#define ID_EMS_PROP26                         25111   // CATEGORY:MDI_EMS
#define ID_EMS_PROP27                         25112   // CATEGORY:MDI_EMS
#define ID_EMS_PROP28                         25113   // CATEGORY:MDI_EMS
#define ID_EMS_PROP29                         25114   // CATEGORY:MDI_EMS
#define ID_EMS_PROP30                         25115   // CATEGORY:MDI_EMS
#define ID_EMS_PROP31                         25116   // CATEGORY:MDI_EMS
#define ID_EMS_PROP32                         25117   // CATEGORY:MDI_EMS
#define ID_EMS_PROP33                         25118   // CATEGORY:MDI_EMS
#define ID_EMS_PROP34                         25119   // CATEGORY:MDI_EMS
#define ID_EMS_PROP35                         25120   // CATEGORY:MDI_EMS
#define ID_EMS_PROP36                         25121   // CATEGORY:MDI_EMS
#define ID_GFXRT_HIDE_COLUMNSETTINGS_MENU     25122   // CATEGORY:STANDARD
#define IDP_SIMUL_PLAYBACK                    25123   // CATEGORY:STANDARD
#define ID_GFXRT_COLUMNORDERSTATIC            25124   // CATEGORY:STANDARD
#define ID_GFXRT_NOSORTHEADER                 25125   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_ADVISEVARS    25126   // CATEGORY:STANDARD
#define IDP_FNC_PR_PLAYBACK_SHOWRT            25127   // CATEGORY:STANDARD
#define IDP_FNC_PR_PLAYBACK_MODE              25128   // CATEGORY:STANDARD
#define ID_EMS_PROP44                         25129   // CATEGORY:MDI_EMS
#define ID_EMS_PROP45                         25130   // CATEGORY:MDI_EMS
#define ID_EMS_PROP46                         25131   // CATEGORY:MDI_EMS
#define ID_EMS_PROP47                         25132   // CATEGORY:MDI_EMS
#define ID_EMS_PROP48                         25133   // CATEGORY:MDI_EMS
#define ID_EMS_PROP49                         25134   // CATEGORY:MDI_EMS
#define ID_EMS_PROP50                         25135   // CATEGORY:MDI_EMS
#define ID_EMS_PROP51                         25136   // CATEGORY:MDI_EMS
#define ID_EMS_PROP52                         25137   // CATEGORY:MDI_EMS
#define ID_EMS_PROP53                         25138   // CATEGORY:MDI_EMS
#define ID_EMS_PROP54                         25139   // CATEGORY:MDI_EMS
#define ID_EMS_PROP55                         25140   // CATEGORY:MDI_EMS
#define ID_EMS_PROP56                         25141   // CATEGORY:MDI_EMS
#define ID_EMS_PROP57                         25142   // CATEGORY:MDI_EMS
#define ID_EMS_PROP58                         25143   // CATEGORY:MDI_EMS
#define ID_EMS_PROP59                         25144   // CATEGORY:MDI_EMS

/// Ob ein Eintrag der Combolistbox den Sollwert setzt
#define IDP_CLBX_SETVALUE                     25145   // CATEGORY:STANDARD
#define ID_VAR_GW_GRUPPENAME                  25146   // CATEGORY:STANDARD
#define ID_VAR_GW_KLASSENAME                  25147   // CATEGORY:STANDARD
#define ID_ALARM_PROP_GRPKLS_ID               25148   // CATEGORY:STANDARD
#define ID_VAR_ALARMBEREICHNAME1              25149   // CATEGORY:STANDARD
#define ID_ALARM_PROP_BEREICH_ID              25150   // CATEGORY:STANDARD

#define ID_ALARM_BEREICH_STATUSVAR            25151   // CATEGORY:ALARM
#define ID_ALARM_BEREICH_ALARMVAR             25152   // CATEGORY:ALARM
#define ID_ALARM_BEREICH_QUITVAR              25153   // CATEGORY:ALARM
#define IDP_FKT_VBA_XML_PROP_25154            25154   // CATEGORY:STANDARD
#define IDP_USER_LOGIN_RTP                    25155   // CATEGORY:MDI_LOGIN
#define IDP_FKT_VBA_XML_PROP_25156            25156   // CATEGORY:STANDARD
#define ID_DYN_PROP_BLINKVAR                  25157   // CATEGORY:STANDARD
#define ID_DYN_PROP_USEBLINKCOLOR             25158   // CATEGORY:STANDARD

#define IDP_DYN_MULTIBIN_VALUE                25159   // CATEGORY:STANDARD
#define IDP_DYN_MULTIBIN_BITS                 25160   // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP51                     25161   // CATEGORY:STANDARD
#define ID_ELESEG_START_X                     25162   // CATEGORY:STANDARD
#define ID_ELESEG_START_Y                     25163   // CATEGORY:STANDARD
#define ID_ELESEG_END_X                       25164   // CATEGORY:STANDARD
#define ID_ELESEG_END_Y                       25165   // CATEGORY:STANDARD
#define ID_ELESEG_START_ANGLE                 25166   // CATEGORY:STANDARD
#define ID_ELESEG_END_ANGLE                   25167   // CATEGORY:STANDARD

#define ID_PROP_AMLCEL_STATUSCAPTION          25168   // CATEGORY:ALARM:EZ_BTB
#define ID_PROP_AMLCEL_SHOWGRID               25169   // CATEGORY:ALARM:EZ_BTB
#define ID_PROP_AMLCEL_USEOPTIONALCOLORS      25170   // CATEGORY:ALARM:EZ_BTB
#define ID_PROP_AMLCEL_COLOR1                 25171   // CATEGORY:ALARM:EZ_BTB
#define ID_PROP_AMLCEL_COLOR2                 25172   // CATEGORY:ALARM:EZ_BTB
#define ID_PROP_AMLCEL_STATUSCAPTIONSIZE      25173   // CATEGORY:ALARM:EZ_BTB

#define ID_EMS_PROP_GRP4                      25174   // CATEGORY:MDI_EMS Sperrzeiten
#define ID_EMS_PROP_GRP5                      25175   // CATEGORY:MDI_EMS Sperrzeiten Unterknoten
#define ID_EMS_PROP_GRP6                      25176   // CATEGORY:MDI_EMS Schaltstufen Erzeuger
#define ID_EMS_PROP_GRP7                      25177   // CATEGORY:MDI_EMS Schaltstufen Unterknoten Erzeuger
#define ID_EMS_PROP60                         25178   // CATEGORY:MDI_EMS
#define ID_EMS_PROP61                         25179   // CATEGORY:MDI_EMS
#define ID_EMS_PROP62                         25180   // CATEGORY:MDI_EMS
#define ID_EMS_PROP63                         25181   // CATEGORY:MDI_EMS
#define ID_EMS_PROP64                         25182   // CATEGORY:MDI_EMS
#define ID_EMS_PROP65                         25183   // CATEGORY:MDI_EMS
#define ID_EMS_PROP66                         25184   // CATEGORY:MDI_EMS
#define ID_EMS_PROP67                         25185   // CATEGORY:MDI_EMS
#define ID_EMS_PROP68                         25186   // CATEGORY:MDI_EMS
#define ID_EMS_PROP69                         25187   // CATEGORY:MDI_EMS
#define ID_EMS_PROP70                         25188   // CATEGORY:MDI_EMS
#define ID_EMS_PROP71                         25189   // CATEGORY:MDI_EMS
#define ID_EMS_PROP72                         25190   // CATEGORY:MDI_EMS
#define ID_EMS_PROP73                         25191   // CATEGORY:MDI_EMS
#define ID_EMS_PROP74                         25192   // CATEGORY:MDI_EMS
#define IDP_FCN_MT_PARALLELEXEC_CREATEINITIATORVARS   25193   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_RELEASEINITIATORVARS  25194   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_CREATEINITIATORSTARTID 25195   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_CREATEINITIATORENDID   25196   // CATEGORY:STANDARD
#define ID_EMS_PROP79                         25197   // CATEGORY:MDI_EMS
#define ID_EMS_PROP80                         25198   // CATEGORY:MDI_EMS
#define ID_EMS_PROP81                         25199   // CATEGORY:MDI_EMS
#define ID_EMS_PROP82                         25200   // CATEGORY:MDI_EMS
#define ID_EMS_PROP83                         25201   // CATEGORY:MDI_EMS
#define ID_EMS_PROP84                         25202   // CATEGORY:MDI_EMS
#define ID_EMS_PROP85                         25203   // CATEGORY:MDI_EMS
#define ID_EMS_PROP86                         25204   // CATEGORY:MDI_EMS
#define IDP_FCN_MT_PARALLELEXEC_VOIDCOMMANDVARS 25205   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_VOIDCOMMANDSTARTID 25206   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_VOIDCOMMANDENDID 25207   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_DELAYSTARTCOMMANDVARS    25208   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_DELAYSTARTCOMMANDSTARTID 25209   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_DELAYSTARTCOMMANDENDID   25210   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_DELAYSTOPCOMMANDVARS    25211   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_DELAYSTOPCOMMANDSTARTID 25212   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_DELAYSTOPCOMMANDENDID   25213   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_RELEASEINITIATORSTARTID 25215   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_RELEASEINITIATORENDID   25216   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_ADVISESTARTID           25217   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_ADVISEENDID             25218   // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_UNADVISEVARS            25219   // CATEGORY:STANDARD

#define IDP_ASM_SHOW_FILTER                   25220   // CATEGORY:MDI_ASM
#define IDP_ASM_DB_CONNECTION                 25221   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_FILTER                    25222   // CATEGORY:MDI_ASM
#define IDP_ASM_SHOW_RASTER                   25223   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_DATE_ACTIVE               25224   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_DATE_WITH_TIME            25225   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_DATE_SELECTION            25226   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_DATE_START                25227   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_DATE_END                  25228   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TIME_ACTIVE               25229   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TIME_SELECTION            25230   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TIME_START                25231   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TIME_END                  25232   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TIMES                     25233   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_AKZ_ACTIVE                25234   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_AKZ_SEL_NAME              25235   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_AKZ_SEL_LIST              25236   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_GRP_ACTIVE                25237   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_GRP_SEL_LIST              25238   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_CLS_ACTIVE                25239   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_CLS_SEL_LIST              25240   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_SHF_COME_ACTIVE           25241   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_SHF_COME_LIST             25242   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_SHF_GONE_ACTIVE           25243   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_SHF_GONE_LIST             25244   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_DURATION_ACTIVE           25245   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_DURATION_MIN              25246   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_DURATION_MAX              25247   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_FREQUENCY_ACTIVE          25248   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_FREQUENCY_MIN             25249   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_FREQUENCY_MAX             25250   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_STATE_ACTIVE              25251   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_STATE                     25252   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TEXT_CASE                 25253   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TEXT_USE_RE               25254   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TEXT                      25255   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TEXT_ACTIVE               25256   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TEXT_TAG_CASE             25257   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TEXT_TAG_USE_RE           25258   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TEXT_TAG                  25259   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_TEXT_TAG_ACTIVE           25260   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_STATISTIC_COUNT           25261   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_VIEW_MODE                 25262   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_PROJECT_ACTIVE            25263   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_PROJECT_LIST              25264   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_CAUSE_FILTER_ACTIVE       25265   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_EMPTY_CAUSE_ACTIVE        25266   // CATEGORY:MDI_ASM
#define IDP_ASM_SUB_CAUSE_LIST                25267   // CATEGORY:MDI_ASM
#define IDP_ASM_DB_DNS                        25268   // CATEGORY:MDI_ASM
#define IDP_ASM_DB_TABLE                      25269   // CATEGORY:MDI_ASM

#define ID_EMS_PROP_GRP8                      25270 // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP9                      25271 // CATEGORY:MDI_EMS   
#define ID_EMS_PROP_GRP10                     25272 // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP11                     25273 // CATEGORY:MDI_EMS
#define IDP_FCN_MT_PARALLELEXEC_UNADVISESTARTID  25274 // CATEGORY:STANDARD
#define ID_EMS_PROP_GRP13                     25275 // CATEGORY:MDI_EMS  
#define ID_EMS_PROP_GRP14                     25276 // CATEGORY:MDI_EMS  
#define IDP_FCN_MT_PARALLELEXEC_UNADVISEENDID    25277 // CATEGORY:STANDARD
#define ID_EMS_PROP_GRP16                     25278 // CATEGORY:MDI_EMS
#define IDP_FNC_PR_PLAYBACK_TIME              25279 // CATEGORY:STANDARD
#define ID_EWTREND_SHOW_XY_CROSS              25280 // CATEGORY:MDI_EWT
#define ID_EMS_PROP_GRP19                     25281 // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP20                     25282 // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP21                     25283 // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP22                     25284 // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP23                     25285 // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP24                     25286 // CATEGORY:MDI_EMS
#define ID_EMS_PROP_GRP25                     25287 // CATEGORY:MDI_EMS
#define IDP_CRG_LIST_FLT                      25288 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_GRP_RT_BATCHPREF                  25289 // CATEGORY:STANDARD
#define ID_ALARM_PROP_GRPKLS_STATUSVAR        25290 // CATEGORY:ALARM
#define IDP_DYNELE_LIMITCOLOR_ACTIVE          25291 // CATEGORY:ALARM
#define ID_ALARM_PROP_GRPKLS_FUNKTION         25292 // CATEGORY:ALARM

#define IDP_AML_CEL_FILTER_STATUS             25293 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT:MDI_STATUS
#define IDP_AML_CEL_FILTER_SQL                25294 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT:MDI_STATUS
#define IDP_AML_CEL_FILTER_SQL_BASE           25295 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT:MDI_STATUS
#define IDP_AML_CEL_FILTER_SQL_TABLE          25296 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT:MDI_STATUS

#define ID_FKT_EMS_FILTER_PROP_1              25297 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_2              25298 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_3              25299 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_4              25300 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_5              25301 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_6              25302 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_7              25303 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_8              25304 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_9              25305 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_10             25306 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_11             25307 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_12             25308 // CATEGORY:MDI_EMS

#define ID_FKT_CHECKMAINT_PROP_1              25309 // CATEGORY:STANDARD
#define ID_FKT_CHECKMAINT_PROP_2              25310 // CATEGORY:STANDARD
#define ID_FKT_CHECKMAINT_PROP_3              25311 // CATEGORY:STANDARD
#define ID_FKT_CHECKMAINT_PROP_4              25312 // CATEGORY:STANDARD

#define ID_FKT_EMS_PROP01                     25313 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_PROP02                     25314 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_PROP03                     25315 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_PROP04                     25316 // CATEGORY:MDI_EMS

#define ID_PROJEKT_DB_VERS                    25317 // CATEGORY:STANDARD
#define ID_PROJEKT_SYSTABLE_VERS              25318 // CATEGORY:STANDARD

// wie ID_VAR_STRINGLAENGE, nur muss wegen Inkonsistenz der External Names auch ID unterschiedlich sein
#define ID_VAR_STRINGLAENGE2                  25319 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_MSGCONTROL_NAKFUNCTION 25320 // CATEGORY:STANDARD

#define ID_FKT_VSTA_CALLMACRO_PROP1           25321 // CATEGORY:STANDARD  VSTA Makro Name

#define ID_ARV_PROP36                         25322 // CATEGORY:STANDARD
#define ID_ARV_PROP37                         25323 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP29                     25324 // CATEGORY:STANDARD

// Einheiten Properties
#define ID_UNIT_PROP_GRP0                     25325 // CATEGORY:STANDARD Allgemein
#define ID_UNIT_PROP_NAME                     25326 // CATEGORY:STANDARD
#define ID_UNIT_PROP_FACTOR                   25327 // CATEGORY:STANDARD
#define ID_UNIT_PROP_OFFSET                   25328 // CATEGORY:STANDARD
#define ID_UNIT_PROP_DECSHIFT                 25329 // CATEGORY:STANDARD
#define ID_UNIT_PROP_UNITS                    25330 // CATEGORY:STANDARD

// Dialogschrift
#define IDP_RTD_DLGFONT                       25331 // CATEGORY:STANDARD
#define IDP_RTD_ENDLGFONT                     25332 // CATEGORY:STANDARD
#define IDP_TIMEFILTER_PIC                    25333 // CATEGORY:STANDARD

#define IDP_FKT_VBA_XML_25334                 25334 // CATEGORY:STANDARD App-Funktion "Remanentdaten speichern"
#define IDP_FKT_VBA_XML_25335                 25335 // CATEGORY:STANDARD App-Funktion "Remanentdaten speichern"
#define IDP_FKT_VBA_XML_25336                 25336 // CATEGORY:STANDARD App-Funktion "Remanentdaten speichern"
#define IDP_FKT_VBA_XML_25337                 25337 // CATEGORY:STANDARD App-Funktion "Remanentdaten speichern"
#define IDP_FKT_VBA_XML_25338                 25338 // CATEGORY:STANDARD App-Funktion "Remanentdaten speichern"
#define IDP_FKT_VBA_XML_25339                 25339 // CATEGORY:STANDARD App-Funktion "Remanentdaten speichern"

#define IDD_TYP_HIDDEN                        25340 // CATEGORY:STANDARD
#define IDP_TIMEFILTER_PICS                   25341 // CATEGORY:STANDARD
#define IDP_TIMEFILTER_NPICS                  25342 // CATEGORY:STANDARD
#define IDP_TIMEFILTER_TIME                   25343 // CATEGORY:STANDARD
#define IDP_TIMEFILTER_ALLMON                 25344 // CATEGORY:STANDARD
#define IDP_TIMEFILTER_CALLDEF                25345 // CATEGORY:STANDARD

// Bitmaps für Verriegelung
#define LOCK_BITMAP_LOCKING                   25346 // CATEGORY:STANDARD
#define LOCK_BITMAP_USER                      25347 // CATEGORY:STANDARD

// Variable für Verriegelungsergebnis
#define ID_VERRIEG_PROP30                     25348 // CATEGORY:STANDARD

// Properties für Schaltfolgen (SEA)
#define ID_SEA_FLT_PROP_SEA                   25349 // CATEGORY:MDI_SEA
#define ID_SEA_FLT_PROP_START                 25350 // CATEGORY:MDI_SEA
#define ID_SEA_FLT_PROP_HIDEWND               25351 // CATEGORY:MDI_SEA
#define ID_SEA_FLT_PROP_SEAPARAMS             25352 // CATEGORY:MDI_SEA

// RGM Einstellungen
#define IDP_GRP_RGMSETTING                    25353 // CATEGORY:MDI_REZEPTUR

#define IDP_RV_FCT_OVERWRITE                  25354 // CATEGORY:STANDARD

#define IDP_FKT_VBA_XML_PARAMETERS            25355 // CATEGORY:STANDARD
#define IDP_FKT_VBA_XML_PARAMETER_VALUE       25356 // CATEGORY:STANDARD

#define IDP_FKT_VBA_XML_25357                 25357 // CATEGORY:STANDARD App-Funktion "Einheitenverwaltung"    
#define IDP_FKT_VBA_XML_25358                 25358 // CATEGORY:STANDARD App-Funktion "Einheitenverwaltung"    

#define ID_G7_KETTE_NAME                      25259 // CATEGORY:MDI_GRAPH7
#define ID_G7_KETTE_KOMMENTAR                 25360 // CATEGORY:MDI_GRAPH7
#define ID_G7_KETTE_DB                        25361 // CATEGORY:MDI_GRAPH7
#define ID_G7_KETTE_FB                        25362 // CATEGORY:MDI_GRAPH7
#define ID_G7_KETTE_DB_LEN                    25363 // CATEGORY:MDI_GRAPH7
#define ID_G7_KETTE_STEP_NUM                  25364 // CATEGORY:MDI_GRAPH7
#define ID_G7_KETTE_INTERLOCK                 25365 // CATEGORY:MDI_GRAPH7
#define ID_G7_KETTE_SUPERVISION               25366 // CATEGORY:MDI_GRAPH7

#define IDP_DYNELE_ALC_ALIAS                  25367 // CATEGORY:STANDARD Ob das Element ein ALC Alias hat
#define IDP_DYNELE_ALC_ALIAS_NAME             25368 // CATEGORY:STANDARD Der ALC Aliasname des Elements
/// Für Textelemente kann entschieden werden, ob der angezeigte String über den Grenzwert/Rema oder den String der Variable belegt wird.
#define ID_ELE_TEXT_FROM_VARIABLE             25369 // CATEGORY:STANDARD

#define IDP_IPA_FILTER_LISTCONFIG             25370 // CATEGORY:MDI_ASM
#define IDP_IPA_FILTER_COL_SETTINGS           25371 // CATEGORY:MDI_ASM
#define IDP_IPA_FILTER_COLSET_USECUSTOM       25372 // CATEGORY:MDI_ASM
#define IDP_IPA_FILTER_COLSET_WIDTH           25373 // CATEGORY:MDI_ASM
#define IDP_IPA_FILTER_COLSET_CAPTION         25374 // CATEGORY:MDI_ASM
#define ID_PROP_COMBOLIST_FGCOLOR_SEL         25375 // CATEGORY:STANDARD
#define ID_PROP_COMBOLIST_HGCOLOR_SEL         25376 // CATEGORY:STANDARD
#define ID_DRIVER_ID                          25377 // CATEGORY:STANDARD
#define IDP_RGM_FILTER_IMPORTGRPNAME          25378 // CATEGORY:MDI_REZEPTUR
/// Winkel in Grad für den Farbverlauf.
#define ID_ELE_PROP_COLORGRADIENTANGLE        25379 // CATEGORY:STANDARD
/// Y-Position in Prozent für den Farbverlauf.
#define ID_ELE_PROP_COLORGRADIENTOFFSET       25380 // CATEGORY:STANDARD
#define IDP_GRP_RGMKEYBOARDS                  25381 // CATEGORY:MDI_REZEPTUR
/// X-Position innerhalb des Zahlenwertes, an dem die Einheit positioniert werden soll.
#define ID_ELE_PROP_UNIT_POS                  25382 // CATEGORY:STANDARD

#define ID_MATHVAR_PROP_ENABLE_VAR            25383 // CATEGORY:STANDARD

#define IDP_RGM_INTERLOCKING                  25384 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_VISIBILITYVAR                 25385 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER                        25386 // CATEGORY:MDI_REZEPTUR
/// Eigenschaft des RGM Bildfilters "FilterVar"
#define IDP_RGM_FILTER_FILTERVAR              25387 // CATEGORY:MDI_REZEPTUR
/// Eigenschaft des RGM Bildfilters "FilterText"
#define IDP_RGM_FILTER_FILTERTEXT             25388 // CATEGORY:MDI_REZEPTUR

// neue EMS Properties
#define ID_EMS_PROP102                        25389 // CATEGORY:MDI_EMS
#define ID_EMS_PROP103                        25390 // CATEGORY:MDI_EMS
#define ID_EMS_PROP104                        25391 // CATEGORY:MDI_EMS
#define ID_EMS_PROP105                        25392 // CATEGORY:MDI_EMS
#define ID_EMS_PROP106                        25393 // CATEGORY:MDI_EMS
#define ID_EMS_PROP107                        25394 // CATEGORY:MDI_EMS
#define ID_EMS_PROP108                        25395 // CATEGORY:MDI_EMS
#define ID_EMS_PROP109                        25396 // CATEGORY:MDI_EMS
#define ID_EMS_PROP110                        25397 // CATEGORY:MDI_EMS
#define ID_EMS_PROP111                        25398 // CATEGORY:MDI_EMS
#define ID_EMS_PROP112                        25399 // CATEGORY:MDI_EMS
#define ID_EMS_PROP113                        25400 // CATEGORY:MDI_EMS
#define ID_EMS_PROP114                        25401 // CATEGORY:MDI_EMS
#define ID_EMS_PROP115                        25402 // CATEGORY:MDI_EMS
#define ID_EMS_PROP116                        25403 // CATEGORY:MDI_EMS
#define ID_EMS_PROP117                        25404 // CATEGORY:MDI_EMS
#define ID_EMS_PROP118                        25405 // CATEGORY:MDI_EMS
#define ID_EMS_PROP119                        25406 // CATEGORY:MDI_EMS
#define ID_EMS_PROP120                        25407 // CATEGORY:MDI_EMS
#define ID_EMS_PROP121                        25408 // CATEGORY:MDI_EMS
#define ID_EMS_PROP122                        25409 // CATEGORY:MDI_EMS

#define ID_FKT_EMS_FILTER_PROP_13             25410 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_14             25411 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_15             25412 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_16             25413 // CATEGORY:MDI_EMS

#define ID_VERRIEG_PROP31                     25414 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP32                     25415 // CATEGORY:STANDARD

#define ID_USER_LOCKCODE                      25416 // CATEGORY:MDI_LOGIN

#define ID_ELE_PROP394                        25417 // CATEGORY:STANDARD
#define ID_ELE_PROP395                        25418 // CATEGORY:STANDARD
#define ID_ELE_PROP396                        25419 // CATEGORY:STANDARD
#define ID_ELE_PROP397                        25420 // CATEGORY:STANDARD
#define ID_ELE_PROP398                        25421 // CATEGORY:STANDARD
#define ID_ELE_PROP399                        25422 // CATEGORY:STANDARD
#define ID_ELE_PROP400                        25423 // CATEGORY:STANDARD
#define ID_ELE_PROP401                        25424 // CATEGORY:STANDARD
#define ID_ELE_PROP402                        25425 // CATEGORY:STANDARD
#define ID_PROJEKT_RT_VERSIONNR               25426 // CATEGORY:STANDARD

/// Eigenschaft der Bildfunktion Sollwertvorgabe: die Sollwertvorgabe selbst
#define ID_FKT_SETPOINT_SETTING               25427 // CATEGORY:STANDARD
/// Eigenschaft der Bildfunktion Sollwertvorgabe: die Einstellung ob das Fenster geschlossen werden soll
#define ID_FKT_SETPOINT_CLOSEWND              25428 // CATEGORY:STANDARD
/// Eigenschaft des RGM Kanals "Keyboard"
#define IDP_RGM_KEYBOARD                      25429 // CATEGORY:MDI_REZEPTUR:MDI_KEYBOARD
#define ID_ALARM_PROP_BEREICH_NEU             25430 // CATEGORY:ALARM:MDI_IMM
/// Property für die 2. Hintergrundfarbe, wenn ein Farbverlauf projektiert ist.
#define ID_ELE_PROP_BACKCOLOR2                25431 // CATEGORY:STANDARD
/// Der Vorsatz des Drehens (Element->Position->Winkel)
#define IDP_ELE_POS_START_ANGLE               25432 // CATEGORY:STANDARD
/// Eigenschaft für die Art des Farbverlaufes (Linear, Punktuell oder Punktuell mit Kanten)
#define ID_ELE_LIGHTNING                      25433 // CATEGORY:STANDARD
/// Eigenschaft für die neue Text- und Linienfarbe der Vektorelemente.
#define ID_ELE_LINECOLOR                      25434 // CATEGORY:STANDARD
/// Eigenschaft extern sichtbar für
#define ID_EXTERNVISIBLE_FOR                  25435 // CATEGORY:STANDARD

// SAP
/// Gruppe für SAP-Systemeinstellungen
#define ID_SAP_SYSTEM_GRP                     25436 // CATEGORY:STANDARD
/// Hoststring
#define ID_SAP_PROP_SERVER                    25437 // CATEGORY:STANDARD
/// Routerstring
#define ID_SAP_PROP_ROUTER                    25438 // CATEGORY:STANDARD
/// System-ID
#define ID_SAP_PROP_SYSTEM                    25439 // CATEGORY:STANDARD
/// Gruppe für SAP-Login-Einstellungen
#define ID_SAP_LOGON_GRP                      25440 // CATEGORY:STANDARD
/// Mandantennummer
#define ID_SAP_PROP_CLIENT                    25441 // CATEGORY:STANDARD
/// Benutzername
#define ID_SAP_PROP_USER                      25442 // CATEGORY:STANDARD
/// Passwort
#define ID_SAP_PROP_PASSWORD                  25443 // CATEGORY:STANDARD
/// Sprache
#define ID_SAP_PROP_LANGUAGE                  25444 // CATEGORY:STANDARD
/// Gruppe für zusätzliche Einstellungen
#define ID_SAP_ADDITIONAL_GRP                 25445 // CATEGORY:STANDARD
/// Melder, Ableser
#define ID_SAP_PROP_REPORTER                  25446 // CATEGORY:STANDARD
/// Instandhaltungswerk
#define ID_SAP_PROP_PLANT                     25447 // CATEGORY:STANDARD
/// Verbindung zum SAP-System testen
#define ID_SAP_PROP_TEST                      25448 // CATEGORY:STANDARD
/// Gruppe für Tageseinstellungen für Zeitpläne zur Meßwerterfassung
#define ID_SAP_SCHEDULE_DATE_GRP              25449 // CATEGORY:STANDARD
/// Täglich ausführen
#define ID_SAP_PROP_EVERY_DAY                 25450 // CATEGORY:STANDARD
/// Jeden Montag ausführen
#define ID_SAP_PROP_MONDAY                    25451 // CATEGORY:STANDARD
/// Jeden Dienstag ausführen
#define ID_SAP_PROP_TUESDAY                   25452 // CATEGORY:STANDARD
/// Jeden Mittwoch ausführen
#define ID_SAP_PROP_WEDNESDAY                 25453 // CATEGORY:STANDARD
/// Jeden Donnerstag ausführen
#define ID_SAP_PROP_THURSDAY                  25454 // CATEGORY:STANDARD
/// Jeden Freitag ausführen
#define ID_SAP_PROP_FRIDAY                    25455 // CATEGORY:STANDARD
/// Jeden Samstag ausführen
#define ID_SAP_PROP_SATURDAY                  25456 // CATEGORY:STANDARD
/// Jeden Sonntag ausführen
#define ID_SAP_PROP_SUNDAY                    25457 // CATEGORY:STANDARD
/// Gruppe für Zeiteinstellungen für Zeitpläne zur Meßwerterfassung
#define ID_SAP_SCHEDULE_TIME_GRP              25458 // CATEGORY:STANDARD
/// Startzeitpunkt
#define ID_SAP_PROP_START_TIME                25459 // CATEGORY:STANDARD
/// Intervall
#define ID_SAP_PROP_INTERVAL                  25460 // CATEGORY:STANDARD
/// Endzeitpunkt
#define ID_SAP_PROP_END_TIME                  25461 // CATEGORY:STANDARD
/// Gruppe für zusätzliche Einstellungen zum Zeitplan (Melder, Werk)
#define ID_SAP_SCHEDULE_MEAS_DOC_GRP          25462 // CATEGORY:STANDARD
/// Meldungsart
#define ID_SAP_PROP_NOTIFICATION_TYPE         25463 // CATEGORY:STANDARD
/// Techn. Platz oder Equipment
#define ID_SAP_PROP_EQUIPMENT                 25464 // CATEGORY:STANDARD
/// MEssbeleg erzeugen
#define ID_SAP_PROP_MESSBELEG                 25465 // CATEGORY:STANDARD
/// Variablenname (nur für Anzeige in der Liste)
#define ID_SAP_PROP_VAR_NAME                  25466 // CATEGORY:STANDARD
/// Variablenkennung (nur für Anzeige in der Liste)
#define ID_SAP_PROP_VAR_TAG                   25467 // CATEGORY:STANDARD
/// Variablentyp (nur für Anzeige in der Liste)
#define ID_SAP_PROP_VAR_TYPE                  25468 // CATEGORY:STANDARD
/// Variableneinheit (nur für Anzeige in der Liste)
#define ID_SAP_PROP_VAR_UNIT                  25469 // CATEGORY:STANDARD
#define ID_TREIBER_PROP_GRP3                  25470 // CATEGORY:STANDARD
#define ID_TREIBER_PROP_GRP4                  25471 // CATEGORY:STANDARD
/// Exportierte Properties als internal name
#define ID_EXP_PROP_ID_BY_NAME                25472 // CATEGORY:STANDARD
/// Exportierte Properties Gruppenname
#define ID_EXP_GRP_ID_BY_NAME                 25473 // CATEGORY:STANDARD
// Ende

#define ID_FKT_EMS_FILTER_PROP_17             25474 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_18             25475 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_19             25476 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_20             25477 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_21             25478 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_22             25479 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_23             25480 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_24             25481 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_25             25482 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_26             25483 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_27             25484 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_28             25485 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_29             25486 // CATEGORY:MDI_EMS
#define ID_FKT_EMS_FILTER_PROP_30             25487 // CATEGORY:MDI_EMS

#define ID_EMS_PROP123                        25488 // CATEGORY:MDI_EMS
/// Polylinien können über einen Wert von 0.0 - 1.0 einen Rundungsfaktor eingeben.
#define ID_ELE_SplineTension                  25489 // CATEGORY:STANDARD
#define IDP_RGM_BINARYPARAMETER               25490 // CATEGORY:MDI_REZEPTUR
#define ID_EMS_PROP_GRP27                     25491 // CATEGORY:MDI_EMS
#define IDP_SHIFT_MODEL_GROUP_GENERAL_GRP     25492 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_GROUP_NAME            25493 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_GROUP_DESCRIPTION     25494 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_RGM_NUMERICPARAMETER              25495 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_STRINGPARAMETER               25496 // CATEGORY:MDI_REZEPTUR
#define IDP_RT_BATCH_PREFMODULE               25497 // CATEGORY:STANDARD
#define ID_EMS_PROP124                        25498 // CATEGORY:MDI_EMS
#define ID_EMS_PROP125                        25499 // CATEGORY:MDI_EMS
#define ID_EMS_PROP126                        25500 // CATEGORY:MDI_EMS
#define ID_EMS_PROP127                        25501 // CATEGORY:MDI_EMS
#define ID_EMS_PROP128                        25502 // CATEGORY:MDI_EMS
#define IDP_SIMUL_WAIT4ALL                    25503 // CATEGORY:STANDARD
#define IDP_SIMUL_MAXWAIT                     25504 // CATEGORY:STANDARD
/// Gruppe für Störmeldungseigenschaften (damits in der Dialogansicht angezeigt wird)
#define ID_SAP_NOTIFICATION_GRP               25505 // CATEGORY:STANDARD
/// Gruppe für Verbindungstests
#define ID_SAP_DEBUG_GRP                      25506 // CATEGORY:STANDARD
/// Kommunikation mit dem SAP-System mitprotokollieren
#define ID_SAP_PROP_TRACE                     25507 // CATEGORY:STANDARD
/// Variablenbezug (nur für Export)
#define ID_SAP_PROP_VAR_VAR                   25508 // CATEGORY:STANDARD
#define IDP_AML_CEL_FILTER_SORTDESCENDING     25509 // CATEGORY:ALARM:EZ_BTB
/// ID für den Dateinamen beim Button für den gedrückten Zustand
#define ID_ELE_BITMAP_DOWN                    25511 // CATEGORY:STANDARD
/// ID für die 2. Hintergrundfarbe für den Farbverlauf beim Button Element
//#define ID_ELE_PROP_BACKCOLORBUTTON2          25512
/// ID für die 2. Hintergrundfarbe über eine Variable für den Farbverlauf
#define IDS_HGFARBE_VARIABLE2                 25513 // CATEGORY:STANDARD
/// Im Projekt definierbare Linienbreite für die Darstellung des Focus Rahmens zur Laufzeit.
#define IDS_FOCUS_LINEWIDTH                   25514 // CATEGORY:STANDARD
/// Im Projekt definierbare Linienfarbe für die Darstellung des Focus Rahmens zur Laufzeit.
#define IDS_FOCUS_LINECOLOR                   25515 // CATEGORY:STANDARD
/// Absetzen ungültiger Rezepte erlaubt
#define IDP_RGM_WRITE_INVALID_RECIPES         25516  // CATEGORY:MDI_REZEPTUR
/// Gibt an ob die projektierte Schriftart der RGM Tabelle angewendet werden soll oder nicht
#define IDP_RGM_REPORTFONT                    25517 // CATEGORY:MDI_REZEPTUR

#define ID_PROP_SYSTEMMODEL_PROJEKT           25518 // CATEGORY:STANDARD
#define ID_PROP_SYSTEMMODEL_MODULE            25519 // CATEGORY:STANDARD
#define ID_PROP_SYSTEMMODEL_NAME              25520 // CATEGORY:STANDARD
#define ID_PROP_SYSTEMMODELGOUP               25521 // CATEGORY:STANDARD

#define ID_PROP_FKTIPADOCCREATE_TOFILE        25522 // CATEGORY:STANDARD
#define ID_PROP_FKTIPADOCCREATE_FILE          25523 // CATEGORY:STANDARD

#define ID_PROP_SYSTEMMODELMANAGER_MODELS     25524 // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_MATRIX_STEP_NAME    25525 // CATEGORY:MDI_BATCH_MR
#define ID_PROP_SYSTEMGROUP_GUID              25526 // CATEGORY:STANDARD
/// Eigenschaft für einen Bit Wert über den festgelegt wird, ob der Anzeigebereich über die Variable definiert wird.
#define ID_PROP_VIEWLIMITFROMVAR              25527 // CATEGORY:STANDARD
// ALC Reverse SourceID
#define IDP_DYNELE_ALC_REVSRC                 25528 // CATEGORY:STANDARD

// Farbpaletten
/// Gruppe für Palette in CD_CColor
#define ID_COLOR_PALETTE_GRP                  25529 // CATEGORY:STANDARD
/// Gruppe für Farbe in CD_CColor
#define ID_COLOR_COLOR_GRP                    25530 // CATEGORY:STANDARD
/// Name der Farbe (Nur im Dialog)
#define ID_COLOR_COLOR_NAME                   25531 // CATEGORY:STANDARD
/// Farbwert
#define ID_COLOR_COLOR_VALUE                  25532 // CATEGORY:STANDARD

/// Array der Paletten, für VBA und Ex-Import
#define ID_COLOR_PALETTE                      25533 // CATEGORY:STANDARD
/// Array der Farbennamen der Paletten, für VBA und Ex-Import
#define ID_COLOR_COLORNAME_ARRAY              25534 // CATEGORY:STANDARD

/// Name einer Palette, in CD_CColor und für VBA und Ex-Import
#define ID_COLOR_PALETTE_NAME                 25535 // CATEGORY:STANDARD
/// Array der Farben einer Palette, für VBA und Ex-Import
#define ID_COLOR_COLOR_ARRAY                  25536 // CATEGORY:STANDARD

#define ID_DRV_STRAT_DEL                      25537 // CATEGORY:STANDARD
#define ID_DRV_STRAT_GRP                      25538 // CATEGORY:STANDARD
#define ID_DRV_STRAT_PORT                     25539 // CATEGORY:STANDARD
#define ID_DRV_STRAT_CREATE                   25540 // CATEGORY:STANDARD
#define ID_DRV_STRAT_NAME                     25541 // CATEGORY:STANDARD
#define ID_DRV_STRAT_EV_PORT                  25542 // CATEGORY:STANDARD
/// Passwortlevel für Aktionsausführung bei Befehlsgabe
#define IDP_PWL_EXECUTE                       25543 // CATEGORY:MDI_LOGIN:MDI_BEFEHL
/// Passwortlevel für Entriegeln bei Befehlsgabe
#define IDP_PWL_UNLOCK                        25544 // CATEGORY:MDI_LOGIN:MDI_BEFEHL
/// Eigenschaft für die Verknüpfungsregel von Elementen im "freie Schablonenform Editor"
#define IDP_3TFORM_EDITOR                     25545 // CATEGORY:STANDARD
#define IDP_VARSTATUS_REFRESH                 25547 // CATEGORY:STANDARD
#define IDP_VARSTATUS_BASIS                   25548 // CATEGORY:STANDARD
/// Benennung der Verriegelungsbedingung bei Aktionen der Befehlsgabe.
#define ID_VERRIEG_PROP33                     25549 // CATEGORY:STANDARD:MDI_BEFEHL

#define ID_USERGROUP_GRP                      25550 // CATEGORY:MDI_LOGIN
#define ID_EMS_PROP_GRP26                     25551 // CATEGORY:MDI_EMS Schaltstufen Verbraucher
#define ID_USERGROUP_NAME                     25552 // CATEGORY:MDI_LOGIN
#define ID_USERGROUP_LEVEL                    25553 // CATEGORY:MDI_LOGIN
#define ID_USERGROUP_LEVEL0_IMEXP             25554 // CATEGORY:MDI_LOGIN
#define ID_USERGROUP_LEVEL1_IMEXP             25555 // CATEGORY:MDI_LOGIN
#define ID_USERGROUP_LEVEL2_IMEXP             25556 // CATEGORY:MDI_LOGIN
#define ID_USERGROUP_LEVEL3_IMEXP             25557 // CATEGORY:MDI_LOGIN
#define IDP_WSP_MON_FRAME_CY                  25558 // CATEGORY:STANDARD

// Eigenschaften für Graph7-MDI Bildfilter
#define ID_PROP_GRAPH7MDI_COMBLOCK            25559 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7MDI_G7FILE              25560 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7MDI_ZULIFILE            25561 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7MDI_COLORWAIT           25562 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7MDI_COLORDONE           25563 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7MDI_COLORSYMBOL         25564 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7MDI_FONT                25565 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7MDI_LINEWIDTH           25566 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7MDI_KOPFUP              25567 // CATEGORY:MDI_GRAPH7
#define IDP_WSP_MON_GRP                       25568 // CATEGORY:STANDARD

#define ID_ALPHALINECOLOR                     25569 // CATEGORY:STANDARD
#define ID_ALPHABACKCOLOR                     25570 // CATEGORY:STANDARD
#define ID_ALPHABACKCOLOR2                    25571 // CATEGORY:STANDARD

// Eigenschaften für Graph7 Funktion Heuristik auswerten
#define ID_PROP_GRAPH7FKT_COMBLOCK            25572 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7FKT_DESTVAR             25573 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7FKT_G7FILE              25574 // CATEGORY:MDI_GRAPH7
#define ID_PROP_GRAPH7FKT_ZULIFILE            25575 // CATEGORY:MDI_GRAPH7
#define IDP_WSP_MON_FRAME_CX                  25576 // CATEGORY:STANDARD

#define ID_COLORRAHMEN                        25577 // CATEGORY:STANDARD
#define ID_ALPHACOLORRAHMEN                   25578 // CATEGORY:STANDARD

//Neue Properties CEL/AML (REQ3583)	
#define ID_PROP_SKIN_ADVANCEDSETTINGS            	25579 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_GRP                  	25580 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_BACKCOLOR            	25581 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_BACKCOLOR2           	25582 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_BUTTONWIDTH          	25583 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_BUTTONHEIGHT         	25584 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_THUMBSIZE            	25585 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_STYLE                	25586 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_PRJLEFTBMP           	25587 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_PRJRIGHTBMP          	25588 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_PRJTHUMBBMP          	25589 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_PRJSPAN              	25590 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_LIGHTNING            	25591 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_COLORGRADIENTANGLE   	25592 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HORBAR_COLORGRADIENTOFFSET  	25593 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_GRP                  	25594 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_BACKCOLOR            	25595 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_BACKCOLOR2           	25596 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_BUTTONWIDTH          	25597 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_BUTTONHEIGHT         	25598 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_THUMBSIZE            	25599 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_STYLE                	25600 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_PRJLEFTBMP           	25601 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_PRJRIGHTBMP          	25602 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_PRJTHUMBBMP          	25603 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_PRJSPAN              	25604 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_LIGHTNING            	25605 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_COLORGRADIENTANGLE   	25606 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_VERBAR_COLORGRADIENTOFFSET  	25607 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_GRP                 	25608 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_BACKCOLOR           	25609 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_BACKCOLOR2          	25610 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_STYLE               	25611 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_PRJSORTUP           	25612 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_PRJSORTDOWN         	25613 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_PRJSPAN             	25614 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_LIGHTNING           	25615 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_COLORGRADIENTANGLE  	25616 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_COLORGRADIENTOFFSET 	25617 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_ADVANCEDSETTINGS_GROUP        	25618 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_FONT                	25619 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_HEADERBAR_FONT_COLOR          	25620 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_ALARM_PROP_GRPKLS_IMAGE                 	25621 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_IMAGE_KOMMT                         	25623 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_IMAGE_GEHT                          	25624 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_IMAGE_QUIT                          	25625 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_IMAGE_DEL                           	25626 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_COLOR_DEL                           	25627 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_COMESANZ                    	25628 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_GOESANZ                     	25629 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_QUITANZ                     	25630 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_REACTIONTIMEANZ             	25631 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_REACTIONCOUNTANZ            	25632 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_REACTIONSTATANZ             	25633 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_TIMELASTINGANZ              	25634 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_GROUPSYMBOL                 	25635 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_GROUPSYMBOLANZ              	25636 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_GROUPSYMBOLSTYLE            	25637 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_RESOURCLABEL                	25638 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_RESOURCLABELANZ             	25639 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_AREA                        	25640 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_AREAANZ                     	25641 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_AREANR                      	25642 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_AREANRANZ                   	25643 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_CLASSSYMBOL                 	25644 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_CLASSSYMBOLANZ              	25645 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_CLASSSYMBOLSTYLE            	25646 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_UNIT                        	25647 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_UNITANZ                     	25648 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AMLCEL_STATUSSTYLE                 	25649 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_NOSELECTION                   	25650 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_GRIDCOLORV                    	25651 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_GRIDCOLORH                    	25652 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_GRIDSIZEV                     	25653 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_GRIDSIZEH                     	25654 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_GRIDTYPEH                     	25655 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_GRIDTYPEV                     	25656 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_SHOWBORDER                    	25657 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_SHOWHEADER                    	25658 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_GRIDGRP                       	25659 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_COMES_PREF_IMAGE                    	25660 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_COMES_PREF                          	25661 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_GOES_PREF_IMAGE                     	25662 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_GOES_PREF                           	25663 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_QUIT_PREF_IMAGE                     	25664 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_AML_QUIT_PREF                           	25665 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_ELE_PROP_GRP_ALC_FAULTS                  25666 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTTYPE              25667 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTVARTRG            25668 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTVARTRGEX          25669 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTVARFWD            25670 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTVARFWDEX          25671 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTVARREV            25672 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTVARREVEX          25673 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTVARDISP           25674 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_GROUNDFAULTVARDISPEX         25675 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTTYPE               25676 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTVARTRG             25677 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTVARTRGEX           25678 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTVARFWD             25679 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTVARFWDEX           25680 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTVARREV             25681 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTVARREVEX           25682 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTVARDISP            25683 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_SHORTFAULTVARDISPEX          25684 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_DYNELE_ALC_EXCHANGEINOUT                25685 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_NET_CHECK                               25686 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_USER_GROUPS                              25687 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_USER_GROUPS_IMEXPO                       25688 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_FILTER_AREAS                        25689 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_SKIN_ENABLEHEADER                   25690 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define ID_PROP_AML_FILTER_GONEONLY                 25691 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT

#define IDP_RGM_FILTER_COL_WIDTH0                   25692 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH1                   25693 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH2                   25694 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH3                   25695 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH4                   25696 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH5                   25697 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH6                   25698 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH7                   25699 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT0                    25700 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT1                    25701 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT2                    25702 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT3                    25703 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT4                    25704 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT5                    25705 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT6                    25706 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT7                    25707 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_ORDER                    25708 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH8                   25709 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT8                    25710 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_ROWNR                    25711 // CATEGORY:MDI_REZEPTUR
#define ID_EWTREND_KURVE_FUELLFARBE                 25712 // CATEGORY:MDI_EWT
#define ID_EWTREND_KURVE_FUELLALPHA                 25713 // CATEGORY:MDI_EWT
#define ID_FKT_FAULTS_VARS                          25714 // CATEGORY:STANDARD
#define ID_FKT_FAULTS_SOURCEID                      25715 // CATEGORY:STANDARD
#define ID_FKT_FAULTS_SOURCECOLOR                   25716 // CATEGORY:STANDARD
#define ID_FKT_FAULTS_SOURCEBACKGROUND              25717 // CATEGORY:STANDARD
#define IDP_RGM_FILTER_COL_WIDTH9                   25718 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT9                    25719 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_WIDTH10                  25720 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_COL_TEXT10                   25721 // CATEGORY:MDI_REZEPTUR
#define IDP_DYNELE_ALC_SHORTFAULTMARKERCOLOR        25722 // CATEGORY:STANDARD

/// Gruppe für die Vergabe der Rundungen für die verschiedenen Eckpunkte
#define ID_ELE_CORNER_ALL_X                         25723 // CATEGORY:STANDARD
#define ID_ELE_CORNER_ALL_Y                         25724 // CATEGORY:STANDARD
#define ID_ELE_CORNER_LEFTTOP_X                     25725 // CATEGORY:STANDARD
#define ID_ELE_CORNER_LEFTTOP_Y                     25726 // CATEGORY:STANDARD
#define ID_ELE_CORNER_RIGHTTOP_X                    25727 // CATEGORY:STANDARD
#define ID_ELE_CORNER_RIGHTTOP_Y                    25728 // CATEGORY:STANDARD
#define ID_ELE_CORNER_RIGHTBOTTOM_X                 25729 // CATEGORY:STANDARD
#define ID_ELE_CORNER_RIGHTBOTTOM_Y                 25730 // CATEGORY:STANDARD
#define ID_ELE_CORNER_LEFTBOTTOM_X                  25731 // CATEGORY:STANDARD
#define ID_ELE_CORNER_LEFTBOTTOM_Y                  25732 // CATEGORY:STANDARD
#define ID_ELE_CORNER_PROPORTIONAL                  25733 // CATEGORY:STANDARD

#define ID_PROP_GRP_SYSTEMMODEL_MODEL               25734 // CATEGORY:STANDARD
#define ID_ALARM_PROP_ALARMAGGREGATION              25735 // CATEGORY:STANDARD
#define ID_PROP_SYSTEMMODEL_ROOT_NAME               25736 // CATEGORY:STANDARD
#define ID_PROP_SYSTEMMODEL_GROUP_NAME              25737 // CATEGORY:STANDARD

/// Projekteigenschaft: Modus der Erdschlußsuche
#define ID_PROJECT_ALC_GROUNDFAULTMODE              25738 // CATEGORY:STANDARD
#define IDP_SIMUL_CMD                               25739 // CATEGORY:STANDARD
#define IDP_SIMUL_NAME                              25740 // CATEGORY:STANDARD
#define IDP_SIMUL_RTDLG                             25741 // CATEGORY:STANDARD
#define IDP_SIMUL_ERRMSG                            25742 // CATEGORY:STANDARD

#define ID_PROJEKT_ADAM                             25743 // CATEGORY:STANDARD
#define ID_PROJEKT_ADAM_USER                        25744 // CATEGORY:STANDARD
#define ID_PROJEKT_ADAM_PWD                         25745 // CATEGORY:STANDARD
#define ID_AML_GRP_RECIVED                          25746 // CATEGORY:STANDARD
#define ID_AML_GRP_CLEARED                          25747 // CATEGORY:STANDARD
#define ID_AML_GRP_QUIT                             25748 // CATEGORY:STANDARD
#define ID_AML_GRP_DEL                              25749 // CATEGORY:STANDARD

#define ID_PUNCHFRAME_ANGLE                         25750 // CATEGORY:STANDARD
#define ID_PUNCHFRAME_ALPHA                         25751 // CATEGORY:STANDARD
#define ID_PUNCHFRAME_SOFTFOCUS                     25752 // CATEGORY:STANDARD
#define ID_PUNCHFRAME_TYPE                          25753 // CATEGORY:STANDARD
#define ID_PUNCHFRAME_SIZE                          25754 // CATEGORY:STANDARD

#define ID_EWTREND_AKTIV_DATUM                      25755 // CATEGORY:MDI_EWT
#define ID_EWTREND_AKTIV_VARIABLE                   25756 // CATEGORY:MDI_EWT
#define ID_EWTREND_AKTIV_WERT                       25757 // CATEGORY:MDI_EWT
#define ID_EWTREND_AKTIV_EINHEIT                    25758 // CATEGORY:MDI_EWT
#define ID_EWTREND_BREITE_ZEITDIFF                  25759 // CATEGORY:MDI_EWT
#define ID_EWTREND_BREITE_WERTDIFF                  25760 // CATEGORY:MDI_EWT
#define ID_EWTREND_BREITE_SUMME                     25761 // CATEGORY:MDI_EWT
#define ID_EWTREND_BREITE_STDDEV                    25762 // CATEGORY:MDI_EWT
#define ID_EWTREND_BREITE_ANZAHL                    25763 // CATEGORY:MDI_EWT
#define ID_EWTREND_AKTIV_ZEITDIFF                   25764 // CATEGORY:MDI_EWT
#define ID_EWTREND_AKTIV_WERTDIFF                   25765 // CATEGORY:MDI_EWT
#define ID_EWTREND_AKTIV_SUMME                      25766 // CATEGORY:MDI_EWT
#define ID_EWTREND_AKTIV_STDDEV                     25767 // CATEGORY:MDI_EWT
#define ID_EWTREND_AKTIV_ANZAHL                     25768 // CATEGORY:MDI_EWT

#define IDP_DIAGRAM                                 25769 // CATEGORY:MDI_EWT
#define IDP_DIAGRAM_FILE                            25770 // CATEGORY:MDI_EWT
#define IDP_DIAGRAM_FILE_NAME                       25771 // CATEGORY:MDI_EWT
#define ID_PROP_AMLCEL_EINTRAGALL                   25772 // CATEGORY:MDI_EWT

#define ID_PROP_IMMFILTER_PROP1                     25773 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP2                     25774 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP3                     25775 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP4                     25776 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP5                     25777 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP6                     25778 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP7                     25779 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP8                     25780 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP9                     25781 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP10                    25782 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP11                    25783 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP12                    25784 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP13                    25785 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP14                    25786 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP15                    25787 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP16                    25788 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP17                    25789 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP18                    25790 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP19                    25791 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP20                    25792 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP21                    25793 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP22                    25794 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP23                    25795 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP24                    25796 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP25                    25797 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP26                    25798 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP27                    25799 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP28                    25800 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP29                    25801 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP30                    25802 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP31                    25803 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP32                    25804 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP33                    25805 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP34                    25806 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP35                    25807 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP36                    25808 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP37                    25809 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP38                    25810 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP39                    25811 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP40                    25812 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP41                    25813 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP42                    25814 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP43                    25815 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP44                    25816 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP45                    25817 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP46                    25818 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP47                    25819 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP48                    25820 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP49                    25821 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP50                    25822 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP51                    25823 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP52                    25824 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP53                    25825 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP54                    25826 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP55                    25827 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP56                    25828 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP57                    25829 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP58                    25830 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP59                    25831 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP60                    25832 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP61                    25833 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP62                    25834 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP63                    25835 // CATEGORY:MDI_IMM
#define ID_PROP_IMMFILTER_PROP64                    25836 // CATEGORY:MDI_IMM
#define IDP_STRATON_WDG_TO                          25837 // CATEGORY:STANDARD
#define IDP_STRATON_FKT_WDG_TO                      25838 // CATEGORY:STANDARD
#define IDP_CEL_TEXTLEN                             25839 // CATEGORY:STANDARD
#define ID_PROJEKT_NETZ_ROUTING_AKTIV               25840 // CATEGORY:STANDARD

#define IDP_FKT_RTP_LOAD_IDX                        25841 // CATEGORY:STANDARD
#define IDP_FKT_RTP_SAVE_IDX                        25842 // CATEGORY:STANDARD
#define IDP_FKT_RTP_LOAD_NAME                       25843 // CATEGORY:STANDARD
#define IDP_FKT_RTP_SAVE_NAME                       25844 // CATEGORY:STANDARD
#define IDP_FKT_RTP_LOAD_VAR                        25845 // CATEGORY:STANDARD
#define IDP_FKT_RTP_SAVE_VAR                        25846 // CATEGORY:STANDARD

#define ID_PROP_WPFELEM_XAMLFILE                    25847 // CATEGORY:STANDARD
#define ID_PROP_WPFELEM_LINKS                       25848 // CATEGORY:STANDARD
#define ID_PROP_WPFCONNECTION_LNK_ELEMENT           25849 // CATEGORY:STANDARD
#define ID_PROP_WPFCONNECTION_LNK                   25850 // CATEGORY:STANDARD
#define ID_PROP_WPFPROPCONNECTION_VARIABLE          25851 // CATEGORY:STANDARD
#define ID_PROP_WPFPROPCONNECTION_FUNCTION          25852 // CATEGORY:STANDARD
#define ID_PROP_WPFELEM_CONFIG_LINKS                25853 // CATEGORY:STANDARD

#define ID_FKT_VBA_XML_PROP_USERFLAG                25854 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_VARIABLE                25855 // CATEGORY:STANDARD

#define ID_PROP_WPFPROP_AUTH_CONNECTION_TYPE        25856 // CATEGORY:STANDARD

#define ID_EWTREND_DATASOURCE                       25857 // CATEGORY:MDI_EWT

#define IDP_NET_COMPUTER                            25858 // CATEGORY:STANDARD
#define IDP_NET_PROJECT                             25859 // CATEGORY:STANDARD
#define IDP_NET_DIRECTORY                           25860 // CATEGORY:STANDARD

#define IDP_DIAGRAM_WIDTH                           25861 // CATEGORY:STANDARD
#define IDP_DIAGRAM_HEIGHT                          25862 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP4                        25863 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP5                        25864 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP6                        25865 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP7                        25866 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP8                        25867 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP9                        25868 // CATEGORY:STANDARD
#define ID_STATE_FUNKTIONID                         25869 // CATEGORY:STANDARD

#define ID_FKT_VBA_XML_PROP_WGV                     25870 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_GV                      25871 // CATEGORY:STANDARD

#define IDP_NET_COMPUTER_GRP                        25872 // CATEGORY:STANDARD

#define ID_FKT_VBA_XML_PROP_ASMV_DRV                25873 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_ASMV_DRV_NAME           25874 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_ASMV_DRV_DSCR           25875 // CATEGORY:STANDARD

#define IDP_RGM_FILTER_COL_ORDER_ALL                25876 // CATEGORY:MDI_REZEPTUR

#define ID_WPF_CONNECTION_USED                      25877 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_NAME                      25878 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_CONNECTION                25879 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_TYPE                      25880 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_VALUE                     25881 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_UNIT                      25882 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_INFOSTRING                25883 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_ISSTRING                  25884 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_DOUBLEVALUE               25885 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_VALUEMIN                  25886 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_VALUEMAX                  25887 // CATEGORY:STANDARD
#define ID_WPF_CONNECTION_USEVALUEADJUST            25888 // CATEGORY:STANDARD

#define ID_EWTREND_KURVE_GANTT                      25889 // CATEGORY:MDI_EWT
#define ID_EWTREND_KURVE_YOFFSET                    25890 // CATEGORY:MDI_EWT

#define IDP_DRAWTEMPLATE_DUMMY                      25891 // CATEGORY:STANDARD
/// Eigenschaft für AML: Löschen in CEL
#define ID_AML_DELETEINCEL                          25892 // CATEGORY:ALARM
/// Offset folgt dem beim Typ definierten
#define ID_VAR_OFSACCORDINGTYPE                     25893 // CATEGORY:STANDARD
/// Anzeige der Offsetermittlung
#define ID_VAR_OFS_SOURCE                           25894 // CATEGORY:STANDARD

#define IDP_MENU_SEP_GROUP                          25895 // CATEGORY:STANDARD
#define IDP_MENU_SEP_WIDTH                          25896 // CATEGORY:STANDARD
#define IDP_MENU_SEP_COLOR                          25897 // CATEGORY:STANDARD

#define ID_230TOP_PROP_LIRE                         25898 // CATEGORY:STANDARD
#define ID_230TOP_PROP_ZUORD_VAR                    25899 // CATEGORY:STANDARD


#define ID_SAP_FUNCTION_GRP                         25900 // CATEGORY:STANDARD
#define ID_SAP_FUNC_LABEL                           25901 // CATEGORY:STANDARD
#define ID_SAP_FUNC_NAME                            25902 // CATEGORY:STANDARD
#define ID_SAP_FUNC_INFO                            25903 // CATEGORY:STANDARD
#define ID_SAP_FUNC_ERROR_CODE_VAR                  25904 // CATEGORY:STANDARD

#define ID_SAP_PARAMETER_GRP                        25905 // CATEGORY:STANDARD
#define ID_SAP_TABLE_GRP                            25906 // CATEGORY:STANDARD
#define ID_SAP_FIELD_GRP                            25907 // CATEGORY:STANDARD
#define ID_SAP_PAR_TAB_TYPE                         25908 // CATEGORY:STANDARD
#define ID_SAP_PAR_TAB_NAME                         25909 // CATEGORY:STANDARD
#define ID_SAP_PAR_TAB_VARIABLE                     25910 // CATEGORY:STANDARD
#define ID_SAP_PAR_TAB_INFO                         25911 // CATEGORY:STANDARD
#define ID_SAP_PAR_TAB_OPTIONAL                     25912 // CATEGORY:STANDARD

#define ID_SAP_TAB_ROWCOUNT_VAR                     25913 // CATEGORY:STANDARD
#define ID_SAP_FUNC_LAST_ERROR_VAR                  25914 // CATEGORY:STANDARD
#define ID_SAP_FUNC_ERROR_GRP                       25915 // CATEGORY:STANDARD
#define ID_SAP_FUNC_ERROR_TEXT_VAR                  25916 // CATEGORY:STANDARD
#define ID_SAP_FUNC_ACTIVITY_GRP                    25917 // CATEGORY:STANDARD
#define ID_SAP_FUNC_ACTIVITY_VAR                    25918 // CATEGORY:STANDARD
#define ID_SAP_FUNC_ID                              25919 // CATEGORY:STANDARD

#define ID_VERRIEG_PROP34                           25920 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP35                           25921 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP10                       25922 // CATEGORY:STANDARD
#define ID_VERRIEG_PROP_GRP11                       25923 // CATEGORY:STANDARD
#define IDP_RGM_FILTER_VALUESLIST                   25924 // CATEGORY:MDI_REZEPTUR
#define ID_VERRIEG_CBTR_MONITORED                   25925 // CATEGORY:STANDARD
#define ID_VERRIEG_CBTR_FORMULA                     25926 // CATEGORY:STANDARD

#define ID_EWTREND_AKTIV_HEADER                     25927 // CATEGORY:MDI_EWT

#define IDP_ARV_BANNED_STATES                       25928 // CATEGORY:STANDARD
#define IDP_ARV_BANNED_MASK                         25929 // CATEGORY:STANDARD

#define ID_ELE_PROP_SYMBOLFORM_CLICKAREA            25930 // CATEGORY:STANDARD

/// Eindeutige ID der Auscheckaktion in der Änderungshistory (für CheckIn und UndoCheckout).
#define ID_CHANGELOG_CHECKOUT                       25931 // CATEGORY:STANDARD
/// Eindeutige ID für in einem Editor geöffnete Elemente in der Änderungshistorie (für Speichern und nicht Speichern von Dokumenten).
#define ID_CHANGELOG_OPEN                           25932 // CATEGORY:STANDARD
/// Eindeutige ID für ein Element, der bei Auscheckaktionen für die Kennzeichnung der History Einträge verwendet werden kann.
#define ID_ELEMENT                                  25933 // CATEGORY:STANDARD

/// Batch/Unit: Gruppe "Allgemein"
#define IDP_BATCH_UNIT_GENERAL_GRP                  25934 // CATEGORY:MDI_BATCH_MR
/// Batch/Unit: Name
#define IDP_BATCH_UNIT_NAME                         25935 // CATEGORY:MDI_BATCH_MR
/// Batch/Unit: Beschreibung
#define IDP_BATCH_UNIT_DESCRIPTION                  25936 // CATEGORY:MDI_BATCH_MR
/// Batch/Phase: Gruppe "Allgemein"
#define IDP_BATCH_PHASE_GENERAL_GRP                 25937 // CATEGORY:MDI_BATCH_MR
/// Batch/Phase: Name
#define IDP_BATCH_PHASE_NAME                        25938 // CATEGORY:MDI_BATCH_MR
/// Batch/Phase: Beschreibung
#define IDP_BATCH_PHASE_DESCRIPTION                 25939 // CATEGORY:MDI_BATCH_MR

/// Variable: Archiv-Hysterese negativ
#define ID_VAR_ARCHHYSTNEG                          25940 // CATEGORY:MDI_AE
/// Variable: Archiv-Hysterese positiv
#define ID_VAR_ARCHHYSTPOS                          25941 // CATEGORY:MDI_AE
#define IDP_BATCH_TAG_GENERAL_GRP                   25942 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_NAME                          25943 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_DESCRIPTION                   25944 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_TAGTYPE                       25945 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_DATATYPE                      25946 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_MATERIAL                      25947 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_DEFVALUE_STR                  25948 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_RECIPEPARAM                   25949 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_MIN                           25950 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_MAX                           25951 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VAR_UNIT                      25952 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VAR_MIN                       25953 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_DEFVALUE_NUM                  25954 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_DEFVALUE_TIME                 25955 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_DEFVALUE_BOOL                 25956 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VALUES_GRP                    25957 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_INTERLOCKING                25958 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_DONE                        25959 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_TOINTERLOCK                 25960 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_TODONE                      25961 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_TOPHASEEND                  25962 // CATEGORY:MDI_BATCH_MR
#define IDP_AML_CEL_FILTER_INCR                     25963 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_USER_GRP                    25964 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_USERPHASE                   25965 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_USERFKT                     25966 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_USERMSG                     25967 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_GENERAL_GRP                25968 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_TYPE                       25969 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_PRIO                       25970 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_DESCR                      25971 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_RESCMD                     25972 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_RESCMDMODE                 25973 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_CELMSG                     25974 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_CELACTIVE                  25975 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_FUNC                       25976 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_SETTAG                     25977 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_SETTAG_BO                  25978 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_SETTAG_STR                 25979 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_SETTAG_NUM                 25980 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_SETTAG_DUR                 25981 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_DESTTAG                    25982 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_SRCTAG                     25983 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_LOGMSG_EN                  25984 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_LOGMSG                     25985 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_USERTIMEOUT                 25986 // CATEGORY:MDI_BATCH_MR
#define IDP_RGM_FILTER_VERSION                      25987 // CATEGORY:MDI_BATCH_MR
#define IDP_RGM_RECIPE_VERSION                      25988 // CATEGORY:MDI_BATCH_MR
#define IDP_RGM_FILTER_TARGETVERSION                25989 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_SETTAG_GRP                 25990 // CATEGORY:MDI_BATCH_MR
#define IDP_MR_MDI_FILTER_RT                        25991 // CATEGORY:MDI_BATCH_MR
#define IDP_MR_MDI_LIST_CONFIG                      25992 // CATEGORY:MDI_BATCH_MR
#define IDP_GFX_COLCONFENTRY_ID                     25993 // CATEGORY:STANDARD
#define IDP_GFX_COLCONFENTRY_WIDTH                  25994 // CATEGORY:STANDARD
#define IDP_GFX_COLCONFENTRY_ALLIGN                 25995 // CATEGORY:STANDARD
#define IDP_GFX_COLCONFENTRY_SEL                    25996 // CATEGORY:STANDARD
#define IDP_GFX_COLCONFENTRY_SORT                   25997 // CATEGORY:STANDARD
#define IDP_GFX_COLCONFENTRY_SORTASC                25998 // CATEGORY:STANDARD
#define IDP_GFX_COLCONFENTRY_TITLE                  25999 // CATEGORY:STANDARD
#define IDP_GFX_COLCONFENTRY                        26000 // CATEGORY:STANDARD
#define IDP_GFX_LIST_CONFIG_SEARCH_POS              26001 // CATEGORY:STANDARD
#define IDP_GFX_LIST_CONFIG_CATEGORY_NAME           26002 // CATEGORY:STANDARD
#define IDP_BATCH_TAG_VARIABLE                      26003 // CATEGORY:MDI_BATCH_MR
#define IDP_GFX_LIST_COLS_CONFIG                    26004 // CATEGORY:STANDARD
#define IDP_BATCH_TAG_VAR_MAX                       26005 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VAR_DATENART                  26006 // CATEGORY:MDI_BATCH_MR
#define IDP_GFX_COLCONFENTRY_FILTER                 26007 // CATEGORY:STANDARD
#define IDP_BATCH_TAG_PARENT_UNIT                   26008 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_PARENT_PHASE                  26009 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MR_GENERAL_GRP                    26010 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MR_ID                             26011 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MR_NAME                           26012 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_ID                             26013 // CATEGORY:MDI_BATCH_MR
#define IDP_RGM_GROUP_ALLGEMEIN                     26014 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_RECIPE_ALLGEMEIN                    26015 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_VARLNK_ALLGEMEIN                    26016 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_STATUS_LIST                         26017 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_RECIPE_STATUS                       26018 // CATEGORY:MDI_REZEPTUR
#define IDP_BATCH_MR_DESCRIPTION                    26019 // CATEGORY:MDI_BATCH_MR
#define ID_USER_MSGCTRL_USER                        26020 // CATEGORY:MDI_MSGCTRL
#define ID_USER_MSGCTRL_PINCODE                     26021 // CATEGORY:MDI_MSGCTRL
#define ID_USER_MSGCTRL_NACKCODE                    26022 // CATEGORY:MDI_MSGCTRL
#define ID_USER_MSGCTRL_ERSATZUSER                  26023 // CATEGORY:MDI_MSGCTRL
#define ID_USER_MSGCTRL_GSM                         26024 // CATEGORY:MDI_MSGCTRL
#define ID_USER_MSGCTRL_PHONE                       26025 // CATEGORY:MDI_MSGCTRL
#define ID_USER_MSGCTRL_EMAIL                       26026 // CATEGORY:MDI_MSGCTRL
#define IDP_RGM_VARLNK_RANGEFROMVAR                 26027 // CATEGORY:MDI_REZEPTUR
#define IDP_BATCH_TAG_VAR_TREIBER                   26028 // CATEGORY:MDI_BATCH_MR
#define ID_MSGCONTROL_ENGINE_GRP                    26029 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_ENGINE_DISPATCHERS            26030 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_GRP                   26031 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_TIMETOWAIT            26032 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_ATTEMPTS              26033 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_CELITEMS              26034 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_MODEM_GRP                     26035 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_MODEM_COUNTWELCOME            26036 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_MODEM_TIMEOUT                 26037 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_MODEM_IGNOREDISCONNECT        26038 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_MODEM_LINEID                  26039 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_MODEM_LINENAME                26040 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SPEECH_GRP                    26041 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SPEECH_RATE                   26042 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SPEECH_VOLUME                 26043 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SPEECH_VOICEID                26044 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SMSGATEWAY_GRP                26045 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SMSGATEWAY_OUTBOX             26046 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SMSGATEWAY_INBOX              26047 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SMSGATEWAY_STATUSBOX          26048 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SMSGATEWAY_PREFIX             26049 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SMSGATEWAY_SEMAPHOREPREFIX    26050 // CATEGORY:MDI_MSGCTRL
#define IDP_BATCH_PHASE_MINEXECTIME                 26051 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_PARENT_UNIT_NAME            26052 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_PARENT_UNIT_DESCRIPTION     26053 // CATEGORY:MDI_BATCH_MR
#define IDP_DYNELE_ALC_DASHLEN                      26054 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_ALTCOL                       26055 // CATEGORY:STANDARD
#define IDP_RGM_FILTER_STATUS                       26056 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_VERSIONVAR                   26057 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_STATUSVAR                    26058 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_TARGETSTATUS                 26059 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_TARGETRECIPEVAR              26060 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_TARGETVERSIONVAR             26061 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_FILTER_TARGETSTATUSVAR              26062 // CATEGORY:MDI_REZEPTUR
#define ID_MSGCONTROL_SMSGATEWAY_ORIGINID           26063 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SMSGATEWAY_TIMEOUT            26064 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_SMSGATEWAY_SMARTALARM         26065 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_OUTLOOK_GRP                   26066 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_OUTLOOK_PROFILE               26067 // CATEGORY:MDI_MSGCTRL
#define IDP_BATCH_PARALLEL_BRANCH_CELLS             26068 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PARALLEL_BRANCH_BASEIDX           26069 // CATEGORY:MDI_BATCH_MR
#define ID_WORKSPACE_PROPS_GRP                      26070 // CATEGORY:STANDARD
#define ID_WORKSPACE_PROP_PATH                      26071 // CATEGORY:STANDARD
#define ID_MSGCONTROL_ENGINE_EXPORTTOMESSAGE32      26072 // CATEGORY:MDI_MSGCTRL
#define ID_USER_MSGCTRL_GUID                        26073 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define ID_USER_GROUPSORDER_IMEXPO                  26074 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define ID_USERGRP_MSGCTRL_GUID                     26075 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define ID_USERGRP_MSGCTRL_ISMSGCTRL                26076 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define IDP_BATCH_MR_VERSION                        26077 // CATEGORY:MDI_BATCH_MR
#define ID_MSGCONTROL_PROJECT_ACTIVEATSTARTUP       26078 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SUPPRESS_GROUPS             26079 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define ID_PROP_FKT_MSG_SUPPRESS_CLASSES            26080 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define ID_PROP_FKT_MSG_SUPPRESS_AREAS              26081 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define ID_PROP_FKT_MSG_SUPPRESS_SYSTEMMODEL        26082 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define ID_PROP_FKT_MSG_SUPPRESS_ACTIVATE           26083 // CATEGORY:MDI_MSGCTRL:MDI_LOGIN
#define IDP_BATCH_MR_STATUS                         26084 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_REACTION_GRP               26085 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_LOG_GRP                    26086 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_ALLOC_GRP                  26087 // CATEGORY:MDI_BATCH_MR
/// Ob MultiTouch aktiviert ist
#define ID_PROJEKT_MULTITOUCH                       26088 // CATEGORY:STANDARD
#define IDP_BATCH_PHASE_TOALLOCATION                26089 // CATEGORY:MDI_BATCH_MR
#define ID_USERGRP_MSGCTRL_USERORDER                26090 // CATEGORY:MDI_LOGIN:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_ACKFUNCTIONS           26091 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_ACKTIMEOUTFUNCTIONS    26092 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_NACKFUNCTIONS          26093 // CATEGORY:MDI_MSGCTRL
#define IDP_FACEPLATEFILTER_FLT_AVAIL_RT            26094 // CATEGORY:MDI_FACEPLATE
#define ID_PROP_FKT_MSG_SEND_TYPESTYLE              26095 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_DESTIFROMVAR           26096 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_DESTIVAR               26097 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_ACKCODE                26098 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_NACKCODE               26099 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_USEFUNCCODES           26100 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_ATTACHMENTVAR          26101 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_ATTACHFROMVAR          26102 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_ATTACHMENTNAME         26103 // CATEGORY:MDI_MSGCTRL
#define IDP_BATCH_ACTION_NAME                       26104 // CATEGORY:MDI_BATCH_MR
#define ID_PROP_ELE_RT_LASSO                        26105 // CATEGORY:MDI_MSGCTRL
#define ID_ELE_TEXT_TRANSLATE_TEXT                  26106 // CATEGORY:STANDARD
#define IDP_BATCH_PHASE_TRANS_CND_GRP               26107 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_PAUSING_CND                 26108 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_HOLDING_CND                 26109 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_STOPPING_CND                26110 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_ABORTING_CND                26111 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_RESTARTING_CND              26112 // CATEGORY:MDI_BATCH_MR
#define IDP_RGM_FILTER_RCPLIST                      26113 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_RCP_TIMECHANGE                      26114 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_RCP_TIMESENT                        26115 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_DYNPICTURE_DONTRESIZEELEMS               26116 // CATEGORY:STANDARD
#define IDP_RGM_RCP_COMMENTS_GRP                    26117 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_RCP_COMMENT3                        26118 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_RCP_COMMENT4                        26119 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_RCP_COMMENT5                        26120 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_RCP_COMMENT6                        26121 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_RCP_COMMENT7                        26122 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_RCP_COMMENT8                        26123 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_GFXRT_ROWHEIGHT                         26124 // CATEGORY:STANDARD
#define ID_PROP_MSGCTRL_MESSAGE_GROUP               26125 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_GUID                26126 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_ATTEMPTS            26127 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_DISPATCHTYPE        26128 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_DESTINATION         26129 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_OUTLOOK_SUBJECT               26130 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_SUBJECT_DYN           26131 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_CUSTOMID            26132 // CATEGORY:MDI_MSGCTRL
#define IDP_RGM_GROUP_FEEDBACK                      26133 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE                26134 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ                 26135 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK                26136 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_RESULT         26137 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_NAME           26138 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_NUMBER         26139 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_VERSION        26140 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_STATUS_TXT     26141 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_RIGHTS         26142 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_TIMECHANGE     26143 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_CMT1           26144 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_CMT2           26145 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_CMT3           26146 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_CMT4           26147 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_CMT5           26148 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_CMT6           26149 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_CMT7           26150 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_CMT8           26151 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_STATUS_NR      26152 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_WRITE_USERCHANGE     26153 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_RESULT          26154 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_NAME            26155 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_NUMBER          26156 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_VERSION         26157 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_STATUS_TXT      26158 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_RIGHTS          26159 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_TIMECHANGE      26160 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_CMT1            26161 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_CMT2            26162 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_CMT3            26163 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_CMT4            26164 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_CMT5            26165 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_CMT6            26166 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_CMT7            26167 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_CMT8            26168 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_STATUS_NR       26169 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_READ_USERCHANGE      26170 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_RESULT         26171 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_DIFFER         26172 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_NAME           26173 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_NUMBER         26174 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_VERSION        26175 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_STATUS_TXT     26176 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_RIGHTS         26177 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_TIMECHANGE     26178 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_CMT1           26179 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_CMT2           26180 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_CMT3           26181 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_CMT4           26182 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_CMT5           26183 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_CMT6           26184 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_CMT7           26185 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_CMT8           26186 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_STATUS_NR      26187 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_GROUP_FEEDBACK_CHECK_USERCHANGE     26188 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_MDI_DATSETNAME                       26189 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_MDI_DATSETTYPE                       26190 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_MDI_TIMEFILTER                       26191 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_MDI_FILTER                           26192 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_MDI_KANAL                            26193 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_MDI_RDLFILE                          26194 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_FCT_RENDERDO                         26195 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_FCT_NAMEFROMVAR                      26196 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RV_MDI_DATASET                          26197 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_MSGCTRL_GSM_SMS_GRP                     26198 // CATEGORY:MDI_MSGCTRL
#define IDP_MSGCTRL_GSM_SMS_COM_PORT                26199 // CATEGORY:MDI_MSGCTRL
#define IDP_MSGCTRL_GSM_SMS_SMSC_NUMBER             26200 // CATEGORY:MDI_MSGCTRL
#define IDP_BATCH_TAG_VAR_TREIBERBEZ                26201 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VAR_STRLENGTH                 26202 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_MODIFIED                      26203 // CATEGORY:MDI_BATCH_MR
#define IDP_MSGCTRL_GSM_SMS_CHECK_MODEM             26204 // CATEGORY:MDI_MSGCTRL
#define IDP_MSGCTRL_GSM_SMS_PIN                     26205 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_MAXATTEMPTS         26206 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_TIMETOWAIT          26207 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRLQUEUEMDI_CONFIG              26208 // CATEGORY:MDI_MSGCTRL
#define IDP_RGM_SHADOW_VARIABLE                     26209 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_PROP_MSGCTRL_MESSAGE_TITLE               26210 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_MESSAGE             26211 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_DRAW_STATUS         26212 // CATEGORY:MDI_MSGCTRL
#define IDP_BATCH_TAG_TIME_MIN                      26213 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_TIME_MAX                      26214 // CATEGORY:MDI_BATCH_MR
#define IDP_STRATON_CMD_RETAINBYNAME                26215 // CATEGORY:STANDARD
#define ID_PROP_MSGCTRL_MESSAGE_SEND                26216 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_SENT                26217 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_ACKREQ              26218 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_TYPESTYLE           26219 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_DESTINATIONTYPE     26220 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_ATTACHMENT          26221 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_CODESFROMFUNCTION   26222 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_ACKTIMEOUT          26223 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_CYCLECOUNTER        26224 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_DISPATCHTYPE_TEXT   26225 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_TYPESTYLE_TEXT      26226 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_DESTINATIONTYPE_TEXT 26227 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_STATUSIMAGE_SENT      26228 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_STATUSIMAGE_SENDING   26229 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_STATUSIMAGE_ERROR     26230 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_COLOR_SENT            26231 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_COLOR_SENDING         26232 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_PROJECT_COLOR_ERROR           26233 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_POP_GROUP              26234 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_GROUP                   26235 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_SERVER                  26236 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_PORT                    26237 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_SECURITY                26238 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_APOP                    26239 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_KEEP_MAILS              26240 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_USERNAME                26241 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_PASSWORD                26242 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_GROUP                  26243 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_IS_POP_SERVER          26244 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_SERVER                 26245 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_PORT                   26246 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_SECURITY               26247 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_AUTHENTICATION         26248 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_OTHER_CREDENTIALS      26249 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_USERNAME               26250 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_PASSWORD               26251 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_SUBJECT                26252 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_SRCADDR                26253 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_SMTP_SRCADDR_IS_USERNAME    26254 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCTRL_MAIL_POP_POLLING_INTERVALL       26255 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SUPPRESS_INPUTATRT          26256 // CATEGORY:MDI_MSGCTRL
#define IDP_BATCH_TAG_VARIABLE_GRP                  26257 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_CR_EDITABLE                   26258 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_FKT_MSG_SEND_MESSAGECONTENT         26259 // CATEGORY:MDI_MSGCTRL
#define ID_PROJECT_ALC_SEARCHMODE                   26260 // CATEGORY:STANDARD
#define ID_MSGCONTROL_PROJECT_LOG_DELETE            26261 // CATEGORY:MDI_MSGCTRL
///Versionierung von Projekten
#define ID_PROJECT_VERSIONS                         26262 // CATEGORY:STANDARD
#define ID_PROJECT_VERSIONNUMBER                    26263 // CATEGORY:STANDARD
#define ID_PROJECT_VERSIONDETAIL                    26264 // CATEGORY:STANDARD
#define ID_PROJECT_VERSIONSTRING                    26265 // CATEGORY:STANDARD
#define ID_PROJECT_USEVERSION                       26266 // CATEGORY:STANDARD
#define ID_PROJECT_BACKUPXML                        26267 // CATEGORY:STANDARD
#define ID_PROJECT_BACKUPTIME                       26268 // CATEGORY:STANDARD
#define IDP_CR_MDI_LIST_CONFIG                      26269 // CATEGORY:STANDARD
#define ID_BACKUP_FILE_VERSION                      26270 // CATEGORY:STANDARD
#define IDP_FACEPLATEFILTER_FILTERGUID              26271 // CATEGORY:MDI_FACEPLATE
#define IDP_BATCH_CR_NAME                           26272 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_DESCRIPTION                    26273 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_STATUS                         26274 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_REE_STATUS                        26275 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_REE_MODUS                         26276 // CATEGORY:MDI_BATCH_MR
#define IDP_RGM_GROUP_FEEDBACK_XMLIMPORT            26277 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_GROUP_FEEDBACK_XMLIMPORT_RESULT     26278 // CATEGORY:MDI_REZEPTUR
#define ID_PROJEKT_INFO_AUTHOR                      26279 // CATEGORY:STANDARD
#define ID_PROJEKT_INFO_MANAGER                     26280 // CATEGORY:STANDARD
#define ID_PROJEKT_INFO_COMPANY                     26281 // CATEGORY:STANDARD
#define ID_PROJEKT_INFO_COMMENT                     26282 // CATEGORY:STANDARD
#define IDP_RTD_INSUFFICIENT_LEVEL                  26283 // CATEGORY:STANDARD
#define IDP_FILE_SHOW_MTIME                         26284 // CATEGORY:STANDARD

#define ID_ELE_PROP_GRP_ALC_FOS                     26285 // CATEGORY:STANDARD
#define IDP_BATCH_FILTER_VAR_LIST                   26286 // CATEGORY:MDI_BATCH_MR
#define IDP_DYNELE_ALC_VARPROTREACT                 26287 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARPROTREACTEX               26288 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARMAXI                      26289 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARMAXIEX                    26290 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARCURI                      26291 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARCURIEX                    26292 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARCURP                      26293 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARCURPEX                    26294 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_LOADTYPE                     26295 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_LOADVAL                      26296 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARLOAD                      26297 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARLOADEX                    26298 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_LINEREACT                    26299 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_LINERESIST                   26300 // CATEGORY:STANDARD
#define ID_PROJECT_ALC_MAXOVERLOAD                  26301 // CATEGORY:STANDARD

#define ID_PROP_COMBOLIST_DYNCONTENT_USE            26302 // CATEGORY:STANDARD
#define ID_PROP_COMBOLIST_DYNCONTENT_VARIABLE       26303 // CATEGORY:STANDARD
#define ID_COMBO_STATE_VIS_VAR                      26304 // CATEGORY:STANDARD

#define IDP_AXIS_UNITDISABLE                        26305 // CATEGORY:STANDARD
#define IDP_TIMEAXIS_GRABPOINTSIZE                  26306 // CATEGORY:STANDARD
#define IDP_FACEPLATEFILTER_LINKCONTAINER           26307 // CATEGORY:MDI_FACEPLATE
#define IDP_FACEPLATEFILTER_LINKSYMBOLS             26308 // CATEGORY:MDI_FACEPLATE

#define ID_ELE_PROP_GRP_EFFECTS                     26309 // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP_GLOW_EFFECT                 26310 // CATEGORY:STANDARD
#define ID_ELE_PROP_GLOWEFFECT_ACTIVE               26311 // CATEGORY:STANDARD
#define ID_ELE_PROP_GLOWEFFECT_USECOLOR             26312 // CATEGORY:STANDARD
#define ID_ELE_PROP_GLOWEFFECT_COLOR                26313 // CATEGORY:STANDARD
#define ID_ELE_PROP_GLOWEFFECT_ALPHA                26314 // CATEGORY:STANDARD
#define ID_ELE_PROP_GLOWEFFECT_SPREAD               26315 // CATEGORY:STANDARD
#define ID_DYN_PROP_GLOWEFFECT_GLOWCOLOR_VARIABLE   26316 // CATEGORY:STANDARD
#define ID_DYN_PROP_GLOWEFFECT_SICHTBARKEIT_VARIABLE          26317 // CATEGORY:STANDARD
#define ID_DYN_PROP_GLOWEFFECT_SICHTBARKEIT_AUSGRENZWERT      26318 // CATEGORY:STANDARD
#define ID_DYN_PROP_GLOWEFFECT_SICHTBARKEIT_VON     26319 // CATEGORY:STANDARD
#define ID_DYN_PROP_GLOWEFFECT_SICHTBARKEIT_BIS     26320 // CATEGORY:STANDARD
#define ID_DYN_PROP_GLOWEFFECT_BLINKVAR             26321 // CATEGORY:STANDARD
#define ID_DYN_PROP_GLOWEFFECT_USEBLINKCOLOR        26322 // CATEGORY:STANDARD
#define ID_ELE_PROP_GLOWEFFECT_2NDBLINKSTATEVISIBLE 26323   // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_BLINKVAR                26324 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_GLOWEFFECT_GLOWCOLOR_VARIABLE     26325 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_GLOWEFFECT_SICHTBARKEIT_VARIABLE  26326 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_GLOWEFFECT_BLINKVAR     26327 // CATEGORY:STANDARD
#define IDP_RGM_VARLNK_BORDERS                      26328 // CATEGORY:STANDARD
#define IDP_RGM_VARLNK_GENERAL                      26329 // CATEGORY:STANDARD
#define ID_ELE_PROP_GLOWEFFECT_EVENT                26330 // CATEGORY:STANDARD
#define ID_DYNPICTURE_SCHAB_HIGHLIGHT_TYPE          26331 // CATEGORY:STANDARD
#define ID_DYNPICTURE_SCHAB_HIGHLIGHT_COLOR         26332 // CATEGORY:STANDARD
#define ID_DYNPICTURE_SCHAB_HIGHLIGHT_ALPHA         26333 // CATEGORY:STANDARD
#define IDP_RGM_VERSION_FILTER_TEXT                 26334 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_STATUS_FILTER_TEXT                  26335 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_VARLNK_SHADOW                       26336 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_VERSION_FILTER_ID                   26337 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_STATUS_FILTER_ID                    26338 // CATEGORY:MDI_REZEPTUR

#define ID_ETM_CURVE_COLORASCOLOR                   26339 // CATEGORY:MDI_EWT
#define ID_GFXRT_CHECKIMAGE_0N                      26340 // CATEGORY:STANDARD
#define ID_GFXRT_CHECKIMAGE_0FF                     26341 // CATEGORY:STANDARD
#define ID_GFXRT_CHECKIMAGE_0N_INACTIVE             26342 // CATEGORY:STANDARD
#define ID_GFXRT_CHECKIMAGE_0FF_INACTIVE            26343 // CATEGORY:STANDARD
#define ID_EWTREND_CURVELIST_CONFIG                 26344 // CATEGORY:MDI_EWT
#define IDP_BATCH_RECIPE_VIEW                       26345 // CATEGORY:MDI_BATCH_MR:MDI_REZEPT_ALT:MDI_REZEPTUR

#define ID_EWTREND_KURVE_GANTT_SHOWLIMIT            26346 // CATEGORY:MDI_EWT
#define ID_EWTREND_KURVE_GANTT_SHOWLIMITTEXT        26347 // CATEGORY:MDI_EWT

#define ID_230TOP_PROP_B_SV                         26348 // CATEGORY:STANDARD
#define ID_230TOP_PROP_B_FOS                        26349 // CATEGORY:STANDARD
#define IDP_FACEPLATEFILTER_LINKGUID                26350 // CATEGORY:MDI_FACEPLATE
#define IDP_FACEPLATEFILTER_LINKGUIDS               26351 // CATEGORY:MDI_FACEPLATE
#define ID_230TOP_PROP_RES_NR                       26352 // CATEGORY:STANDARD
#define ID_230TOP_PROP_ZUORD_VAR_EX                 26353 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_TYPE                      26354 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_I_VAR                     26355 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_I_VAR_EX                  26356 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_U_VAR                     26357 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_U_VAR_EX                  26358 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_I_VAL                     26359 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_U_VAL                     26360 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_CABLETYPE                 26361 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_LENGTH                    26362 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_REAKT                     26363 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_RESIST                    26364 // CATEGORY:STANDARD
#define ID_230TOP_PROP_NC_CURRENTMAX                26365 // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP_GRP4                      26366 // CATEGORY:STANDARD
#define ID_TOPOLOGIE_PROP_GRP5                      26367 // CATEGORY:STANDARD
#define ID_230TOP_PROP_INVISIBLE                    26368 // CATEGORY:STANDARD
#define IDP_GFXCOLUMN_FIXEDFILTER                   26369 // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP52							26370 // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP53							26371 // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP54							26372 // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_MATRIX_STEP_NUMBER  			26373 // CATEGORY:MDI_BATCH_MR
#define IDP_RGM_FILTER_XMLEXPORT_OVERWRITE_FILE     26374 // CATEGORY:STANDARD
#define IDP_RGM_FILTER_XMLIMPORT_OVERWRITE_RECIPE   26375 // CATEGORY:STANDARD
#define IDP_FACEPLATEFILTER_FILTERS                 26376 // CATEGORY:MDI_FACEPLATE
#define IDP_FACEPLATEFILTER_PICFILTERLINK           26377 // CATEGORY:MDI_FACEPLATE
#define IDP_BATCH_FILTER_SEL_CS_NAME    26378 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_CS_DESC    26379 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_CS_NUMBER  26380 // CATEGORY:MDI_BATCH_MR
#define ID_DYNPICTURE_MULTITOUCH                    26381 // CATEGORY:STANDARD
#define IDP_BATCH_ACTION_RECIPE_GRP                 26382 // CATEGORY:MDI_BATCH_MR:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_BATCH_ACTION_FUNCTION_GRP               26383 // CATEGORY:MDI_BATCH_MR:STANDARD

#define ID_MDITEMPLATE_NAME             26384 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_GUID             26385 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_PATH             26386 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_FOLDER           26387 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_MDITYPE          26388 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_LANGUAGE         26389 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_DESCRIPTION      26390 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_CDTEMPLATE       26391 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_DEFAULTTEMPLATE  26392 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_SCREEN_X         26393 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_SCREEN_Y         26394 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_WIDTH            26395 // CATEGORY:STANDARD
#define ID_MDITEMPLATE_HEIGHT           26396 // CATEGORY:STANDARD
#define ID_RGM_RCP_WRITESYNC_OWNER      26397 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_RGM_RCP_WRITETIMEOUT_OWNER   26398 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT

#define ID_MSGCTRL_GRP                  26399 // CATEGORY:MDI_MSGCTRL

#define IDP_BATCH_OP_GENERAL_GRP        26400 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_OP_ID                 26401 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_OP_NAME               26402 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_OP_DESCRIPTION        26403 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_OP_STATUS             26404 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_OP_VIEW               26405 // CATEGORY:MDI_BATCH_MR
#define IDP_AML_CEL_FILTER_RT_MDI_FILTER  26406 // CATEGORY:ALARM:EZ_BTB:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_LIST_TEXTCOLOR_SELECT_FOCUS   26407 // CATEGORY:STANDARD
#define IDP_LIST_BACKCOLOR_SELECT_FOCUS   26408 // CATEGORY:STANDARD
#define IDP_LIST_TEXTCOLOR_SELECT_NOFOCUS 26409 // CATEGORY:STANDARD
#define IDP_LIST_BACKCOLOR_SELECT_NOFOCUS 26410 // CATEGORY:STANDARD

#define IDP_DYNELE_ALC_LINELENGTH         26411 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_MAXITYPE           26412 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_MAXIVAL            26413 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARCALCI           26414 // CATEGORY:STANDARD
#define IDP_DYNELE_ALC_VARCALCIEX         26415 // CATEGORY:STANDARD

#define IDP_BATCH_FILTER_MR_NAME          26416 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_MR_DESC          26417 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_MR_STATE_STR     26418 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_MR_STATE_NUM     26419 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_CR_NAME          26420 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_CR_DESC          26421 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_CR_STATE_STR     26422 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_CR_STATE_NUM     26423 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_OP_NAME          26424 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_OP_DESC          26425 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_REE_MODE_STR     26426 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_REE_MODE_NUM     26427 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_RECIPE_MODE_STR  26428 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_RECIPE_MODE_NUM  26429 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_NAME         26430 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_DESC         26431 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_TYPE_STR     26432 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_TYPE_NUM     26433 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_STATE_STR    26434 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_STATE_NUM    26435 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_ISTATE_STR   26436 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_ISTATE_NUM   26437 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_BEG_TIME     26438 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_END_TIME     26439 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_DUR          26440 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_CNT          26441 // CATEGORY:MDI_BATCH_MR

#define IDP_PH_PAR_MDI_LIST_CONFIG_1      26442 // CATEGORY:STANDARD
#define IDP_PH_PAR_MDI_LIST_CONFIG_2      26443 // CATEGORY:STANDARD
#define IDP_BATCH_PH_PAR_LIST_SHOW_CMDS   26444 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PH_PAR_LIST_SHOW_RETS   26445 // CATEGORY:MDI_BATCH_MR
#define IDP_FACEPLATEFILTER_ISFILTERRT    26446 // CATEGORY:MDI_FACEPLATE
#define IDP_BATCH_PH_PAR_LIST_COUNT_VAR   26447 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_FILTER_REE_STATE_STR    26448 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_REE_STATE_NUM    26449 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_SEL_UNIT         26450 // CATEGORY:MDI_BATCH_MR

#define ID_PROJECT_ALC_MARKERSIZE         26451 // CATEGORY:STANDARD
#define ID_PROJECT_ALC_MARKERLINE         26452 // CATEGORY:STANDARD
#define ID_PROJECT_ALC_MARKERTYPE         26453 // CATEGORY:STANDARD
#define ID_TIMEFILTER_MODIFYTIMEPERIOD    26454 // CATEGORY:STANDARD

#define IDP_BATCH_TAG_DEFVALUE            26455 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VALUE_MIN           26456 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VALUE_MAX           26457 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAGENTRY_SETVALUE       26458 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VAR_ACTVALUE        26459 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAGENTRY_ACTVALUE       26460 // CATEGORY:MDI_BATCH_MR

#define IDP_RGM_FILTER_PROJECTNAME        26461 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT

#define IDP_BATCH_MRLPF_KIND              26462 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MRLPF_PV                26463 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CRLPF_KIND              26464 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CRLPF_PV                26465 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MRL_AUTO_OPEN           26466 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CRL_AUTO_OPEN           26467 // CATEGORY:MDI_BATCH_MR
#define IDP_RV_MDI_FILTER_PICTURE         26468 // CATEGORY:STANDARD:MDI_PICTIME
#define IDP_ETM_TIMEAXE_MDI_FILTERSCREEN  26469 // CATEGORY:MDI_EWT
#define IDP_ETM_XAXE_MDI_FILTERSCREEN     26470 // CATEGORY:MDI_EWT
#define IDP_RGM_FILTER_VERSIONVAR_ON      26471 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define IDP_RGM_FILTER_STATUSVAR_ON       26472 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_EWTREND_DELTADATA              26473 // CATEGORY:MDI_EWT
#define ID_EWTREND_SORTDATA               26474 // CATEGORY:MDI_EWT
#define IDP_BATCH_PHASE_ESCAPING          26475 // CATEGORY:MDI_BATCH_MR
#define ID_SCREEN_GRP_MULTITOUCH_POINTER_MSG        26476 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERDOWN_MSG              26477 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERENTER_MSG             26478 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERLEAVE_MSG             26479 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERUP_MSG                26480 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERUPDATE_MSG            26481 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERWHEEL_MSG             26482 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERHWHEEL_MSG            26483 // CATEGORY:STANDARD
#define IDP_BATCH_PHASE_MIN_EXEC_TIME_CR_MODIFIABLE 26484 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_RT_LOCAL_FLAGS              26485 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PARALLEL_BRANCH_CELL_OUTPUTCONNECTOR         26486 // CATEGORY:MDI_BATCH_MR
#define ID_SCREEN_PROP_NCPOINTERDOWN_MSG            26487 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_NCPOINTERUP_MSG              26488 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_NCPOINTERUPDATE_MSG          26489 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERACTIVATE_MSG          26490 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERCAPTURECHANGED_MSG    26491 // CATEGORY:STANDARD
#define ID_SCREEN_PROP_POINTERMESSAGE_HANDLING      26492 // CATEGORY:STANDARD
#define ID_SCREEN_GRP_API                           26493 // CATEGORY:STANDARD
#define IDP_REPORTVIEWER_FKT_FILTER                 26494 // CATEGORY:STANDARD
#define ID_PROJEKT_GRP_INTERACTION                  26495 // CATEGORY:STANDARD
#define ID_PROJEKT_PROP_GRP_MULTITOUCH              26496 // CATEGORY:STANDARD
#define ID_PROJEKT_PROP_MULTITOUCH_MODE             26497 // CATEGORY:STANDARD
#define IDS_MULTITOUCH_INACTIVE                     26498 // CATEGORY:STANDARD
#define IDS_MULTITOUCH_WINDOWS7                     26499 // CATEGORY:STANDARD
#define IDS_MULTITOUCH_WINDOWS8                     26500 // CATEGORY:STANDARD
#define ID_PROJEKT_PROP_GRP_INPUT_VISUALISATION_TOUCH 26501 // CATEGORY:STANDARD
#define ID_PROJEKT_PROP_GRP_INPUT_VISUALISATION_PEN   26502 // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_GRP_MR                    26503 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_GRP_CR                    26504 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_GRP_REE                   26505 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_GRP_PH                    26506 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_GRP_ERR                   26507 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_MR_ID                     26508 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_MR_NAME                   26509 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_MR_DESCR                  26510 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_CR_ID                     26511 // CATEGORY:MDI_BATCH_MR
#define ID_PROJEKT_PROP_TOUCH_ACTIVE                26512 // CATEGORY:STANDARD
#define ID_PROJEKT_PROP_PEN_ACTIVE                  26513 // CATEGORY:STANDARD
#define ID_ELEMENT_PROP_INTERACTION_ACTIVE                                          26514 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION                      26515 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_TRANSLATION_X        26516 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_TRANSLATION_Y        26517 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_ROTATION             26518 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_SCALING              26519 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_TRANSLATION_INERTIA  26520 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_ROTATION_INERTIA     26521 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_SCALING_INERTIA      26522 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_RAILS_X              26523 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_RAILS_Y              26524 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_EXACT                26525 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE                       26526 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_HORIZONTAL            26527 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_SELECT                26528 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_SPEED_BUMP            26529 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_REARRANGE             26530 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_EXACT                 26531 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_TAP                               26532 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_TAP_DOUBLE                        26533 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_SECONDARY_TAP                     26534 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_HOLD                              26535 // CATEGORY:STANDARD
#define IDP_BATCH_TAG_RT_LOCAL_FLAGS                                                26536 // CATEGORY:MDI_BATCH_MR
#define ID_ELEMENT_INTERACTION_CONFIGURATION_FLAG_DRAG                              26537 // CATEGORY:STANDARD
#define ID_ELEMENT_INTERACTION_CONFIGURATION_GRP                                    26538 // CATEGORY:STANDARD
#define IDP_BATCH_UNIT_RT_CR_NAME             26539 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_CR_DESCR            26540 // CATEGORY:MDI_BATCH_MR
#define ID_SCREEN_PROP_INTERACTION_ACTIVE                                           26541 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION                       26542 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_TRANSLATION_X         26543 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_TRANSLATION_Y         26544 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_ROTATION              26545 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_SCALING               26546 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_TRANSLATION_INERTIA   26547 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_ROTATION_INERTIA      26548 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_SCALING_INERTIA       26549 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_RAILS_X               26550 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_RAILS_Y               26551 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_MANIPULATION_EXACT                 26552 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE                        26553 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_HORIZONTAL             26554 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_SELECT                 26555 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_SPEED_BUMP             26556 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_REARRANGE              26557 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_CROSS_SLIDE_EXACT                  26558 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_TAP                                26559 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_TAP_DOUBLE                         26560 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_SECONDARY_TAP                      26561 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_HOLD                               26562 // CATEGORY:STANDARD
#define IDP_BATCHFLTR_TXT_CASE_SENSITIVE                                            26563 // CATEGORY:MDI_BATCH_MR
#define ID_SCREEN_INTERACTION_CONFIGURATION_FLAG_DRAG                               26564 // CATEGORY:STANDARD
#define ID_SCREEN_INTERACTION_CONFIGURATION_GRP                                     26565 // CATEGORY:STANDARD

#define IDP_MODUL_KBD_LAYOUT                      26566 // CATEGORY:STANDARD
#define IDP_BATCH_KBD_BOOL                        26567 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_KBD_NUM                         26568 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_KBD_STRING                      26569 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_KBD_SPAN                        26570 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_KBD_LAYOUT                  26571 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_KBD_USAGE                   26572 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_KBD                         26573 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_GLOB_EXPLANATION_NEEDED         26574 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_GLOB_SETVALUE_GRP               26575 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_EXPLANATION_NEEDED          26576 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_EXPLANATION_NEEDED        26577 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_GLOB_CYCLICIMAGE_GROUP          26578 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_GLOB_CYCLEWRITEACTIVE           26579 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_GLOB_CYCLETIME                  26580 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_GLOB_JOBVARIABLE_GRP            26581 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_GLOB_JOBVARIABLE                26582 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_GLOB_JOBVARIABLE_APPLYTYPE      26583 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_JOBID                        26584 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FILTER_CR_JOBID                 26585 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_PARAMCHANGE_GRP             26586 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_UNIT_RT_CR_JOBID                26587 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_APPROVED_USERID                 26588 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_APPROVED_USERNAME               26589 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_APPROVED_TIME                   26590 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_CR_CREATED_USERID               26591 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_CREATED_USERNAME             26592 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_CREATED_TIME                 26593 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_CR_STARTED_USERID               26594 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_STARTED_USERNAME             26595 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_STARTED_TIME                 26596 // CATEGORY:MDI_BATCH_MR

///Alarmbereich 2 der Variable
#define ID_VAR_ALARMBEREICH2                      26597 // CATEGORY:ALARM
///Alarmbereich 3 der Variable
#define ID_VAR_ALARMBEREICH3                      26598 // CATEGORY:ALARM
///Alarmbereich 4 der Variable
#define ID_VAR_ALARMBEREICH4                      26599 // CATEGORY:ALARM
#define ID_VAR_ALARMBEREICHNAME2                  26600 // CATEGORY:ALARM
#define ID_VAR_ALARMBEREICHNAME3                  26601 // CATEGORY:ALARM
#define ID_VAR_ALARMBEREICHNAME4                  26602 // CATEGORY:ALARM
#define ID_VARED_OWN_FLAG90                       26603 // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG91                       26604 // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG92                       26605 // CATEGORY:STANDARD

#define IDP_CR_MDI_LIST_FILTER                    26606 // CATEGORY:STANDARD
#define IDP_CRL_FILTER_NEED_READY                 26607 // CATEGORY:STANDARD
#define IDP_CRL_FILTER_NEED_RUN                   26608 // CATEGORY:STANDARD
#define IDP_CRL_FILTER_NEED_DONE                  26609 // CATEGORY:STANDARD
#define IDP_CRL_FILTER_NEED_SRC                   26610 // CATEGORY:STANDARD
#define IDP_CRL_FILTER_DYN_PARENTS                26611 // CATEGORY:STANDARD
#define IDP_BATCH_RL_CONFIG_SRC                   26612 // CATEGORY:MDI_BATCH_MR
#define IDP_CRL_FILTER_NEED_OUTDATED              26613 // CATEGORY:STANDARD
#define IDP_BATCHFLTR_FILTERFORRECIPETYPE         26614 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_SETTINGMR                   26615 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_SETTINGCR                   26616 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_SELECTIONFROMPICTURE        26617 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_MRTEXTFILTER                26618 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_CRTEXTFILTER                26619 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_PV_MR                       26620 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_PV_CR                       26621 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RV_FILTER                       26622 // CATEGORY:MDI_BATCH_MR
#define IDP_CRL_FILTER_INIT_PARENTS               26623 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_MR_CURRENTNESS              26624 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_CR_CURRENTNESS              26625 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_MR_STATE                    26626 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCHFLTR_CR_STATE                    26627 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CR_JOBID_VAR                    26628 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_JOBVARIABLE_LIST                26629 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_CRNAMECREATION                  26630 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CRNAMECREATIONVAR               26631 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_LINKJOBID                       26632 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_INDIVIDUALJOBVARIABLE           26633 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_INDIVIDUALJOBIDLINKTYPE         26634 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CRCREATEFILTER                  26635 // CATEGORY:MDI_BATCH_MR

#define ID_DYNPICTURE_MULTITOUCH_GROUP            26636 // CATEGORY:STANDARD
#define IDP_BATCH_GLOB_WRITE_TIMEOUT              26637 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_GLOB_WRITE_VARS                 26638 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_GRP_MATRIX              26639 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_MATRIX_STEP_COUNT       26640 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_STATECMDFILTER                  26641 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_FRAME_TB                 26642 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_STATECMD                        26643 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_FRAME_PN                 26644 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_STATECMDMODE                    26645 // CATEGORY:MDI_BATCH_MR

#define ID_VAR_SYMBADDR                           26646 // CATEGORY:STANDARD
#define ID_PRIM_VIEWSYMB                          26647 // CATEGORY:STANDARD

#define IDP_BATCH_PHASE_FAILURE                   26648 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_COMMUNICATION_FAILURE_GRP       26649 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_COMMUNICATION_FAILURE           26650 // CATEGORY:MDI_BATCH_MR

#define ID_ELESEG_OFFSET_GRP                      26651 // CATEGORY:STANDARD
#define ID_ELESEG_OFFSET_ADJUSTABLE               26652 // CATEGORY:STANDARD
#define ID_ELESEG_OFFSET_END_EQUALS_START         26653 // CATEGORY:STANDARD
#define ID_ELESEG_OFFSET_START                    26654 // CATEGORY:STANDARD
#define ID_ELESEG_OFFSET_END                      26655 // CATEGORY:STANDARD

#define IDP_BATCH_PHASE_RECOVER                   26656 // CATEGORY:MDI_BATCH_MR

#define IDP_REP_FILTER_DS_BATCH_IMG_PFC_GRID      26657 // CATEGORY:MDI_BATCH_MR
#define IDP_REP_FILTER_DS_BATCH_DEEPNESS          26658 // CATEGORY:MDI_BATCH_MR
#define IDP_REP_FILTER_DS_BATCH_IMG_PFC_BC        26659 // CATEGORY:MDI_BATCH_MR
#define IDP_REP_FILTER_DS_BATCH_IMG_PFC_BCALPHA   26660 // CATEGORY:MDI_BATCH_MR
#define IDP_REP_FILTER_DS_BATCH_IMG_MTX_BC        26661 // CATEGORY:MDI_BATCH_MR
#define IDP_REP_FILTER_DS_BATCH_IMG_MTX_BCALPHA   26662 // CATEGORY:MDI_BATCH_MR
#define IDP_REP_FILTER_DS_BATCH_IMG_PFC_GRID_C    26663 // CATEGORY:MDI_BATCH_MR
#define IDP_REP_FILTER_DS_BATCH_IMG_MTX_GRID_C    26664 // CATEGORY:MDI_BATCH_MR

#define IDP_GESTURETAP_GROUP                      26665 // CATEGORY:STANDARD
#define IDP_GESTURETAP_REACTION                   26666 // CATEGORY:STANDARD
#define IDP_GESTURETAP_FUNCTION                   26667 // CATEGORY:STANDARD
#define IDP_GESTURETAPANDHOLD_GROUP               26668 // CATEGORY:STANDARD
#define IDP_GESTURETAPANDHOLD_REACTION            26669 // CATEGORY:STANDARD
#define IDP_GESTURETAPANDHOLD_FUNCTION            26670 // CATEGORY:STANDARD
#define IDP_GESTUREDOUBLETAP_GROUP                26671 // CATEGORY:STANDARD
#define IDP_GESTUREDOUBLETAP_REACTION             26672 // CATEGORY:STANDARD
#define IDP_GESTUREDOUBLETAP_FUNCTION             26673 // CATEGORY:STANDARD

#define IDP_YACHSE_AUTOSCALE                      26674 // CATEGORY:STANDARD
#define IDP_PROJEKT_LOCKVAR                       26675 // CATEGORY:STANDARD
#define IDP_GESTUREMANIPULATION_GROUP             26676 // CATEGORY:STANDARD
#define IDP_GESTUREMANIPULATION_Y                 26677 // CATEGORY:STANDARD
#define IDP_GESTUREMANIPULATION_X                 26678 // CATEGORY:STANDARD
#define IDP_MSGCTRL_GSM_SMS_BULK_DELETE           26679 // CATEGORY:MDI_MSGCTRL
#define IDP_RV_MDI_MAXROWCOUNT                    26680 // CATEGORY:STANDARD
#define IDP_RV_MDI_CALC                           26681 // CATEGORY:STANDARD

#define IDP_BATCH_OUTDATED_USERID                 26682 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_OUTDATED_USERNAME               26683 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_OUTDATED_TIME                   26684 // CATEGORY:MDI_BATCH_MR

#define IDP_GESTUREMANIPULATION_X_Y_IN_ONE        26685 // CATEGORY:STANDARD
#define IDP_GESTUREMANIPULATION_ZOOM              26686 // CATEGORY:STANDARD
#define IDP_BATCH_PHASE_FAILURE_GRP               26687 // CATEGORY:MDI_BATCH_MR
#define IDP_MSGCTRL_GENERALSETTINGS_GRP           26688 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_USER              26689 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_WPFCONNECTIONS                    26690 // CATEGORY:STANDARD
#define ID_PROP_WPFCONNECTION                     26691 // CATEGORY:STANDARD
#define ID_PROP_WPFCONNECTION_DELETE              26692 // CATEGORY:STANDARD
#define IDP_BATCH_PHASE_ERROR_PLC                 26693 // CATEGORY:MDI_BATCH_MR

#define ID_SGW_PROP_GRP0                          26694 // CATEGORY:STANDARD
#define ID_SGW_PROP_GRP1                          26695 // CATEGORY:STANDARD
#define ID_SGW_PROP_GRP2                          26696 // CATEGORY:STANDARD
#define ID_SGW_PROP_GRP3                          26697 // CATEGORY:STANDARD     
#define ID_SGW_PROP_T_NEU                         26698 // CATEGORY:STANDARD
#define ID_SGW_PROP_T_DEL                         26699 // CATEGORY:STANDARD
#define ID_SGW_PROP_T_MEN_DEL                     26700 // CATEGORY:STANDARD
#define ID_SGW_PROP1                              26701 // CATEGORY:STANDARD
#define ID_SGW_PROP2                              26702 // CATEGORY:STANDARD
#define ID_SGW_PROP3                              26703 // CATEGORY:STANDARD
#define ID_SGW_PROP4                              26704 // CATEGORY:STANDARD
#define ID_SGW_PROP5                              26705 // CATEGORY:STANDARD
#define ID_SGW_PROP6                              26706 // CATEGORY:STANDARD
#define ID_SGW_PROP7                              26707 // CATEGORY:STANDARD
#define ID_SGW_PROP8                              26708 // CATEGORY:STANDARD
#define ID_SGW_PROP9                              26709 // CATEGORY:STANDARD
#define ID_SGW_PROP10                             26710 // CATEGORY:STANDARD
#define ID_SGW_PROP11                             26711 // CATEGORY:STANDARD
#define ID_SGW_PROP12                             26712 // CATEGORY:STANDARD
#define ID_SGW_PROP13                             26713 // CATEGORY:STANDARD
#define ID_SGW_PROP14                             26714 // CATEGORY:STANDARD
#define ID_SGW_PROP15                             26715 // CATEGORY:STANDARD

#define IDP_BATCH_UNIT_RT_PLCERROR_COUNT          26716  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_RT_PLCERROR_FIXED_COUNT    26717  // CATEGORY:MDI_BATCH_MR
#define IDPBATCH_PH_PAR_LIST_SHOW_MR              26718 // CATEGORY:MDI_BATCH_MR
#define IDPBATCH_PH_PAR_LIST_SHOW_CR              26719 // CATEGORY:MDI_BATCH_MR
#define IDPBATCH_PH_PAR_LIST_SHOW_CURR            26720 // CATEGORY:MDI_BATCH_MR
#define IDPBATCH_PH_PAR_LIST_SHOW_NOT_MR          26721 // CATEGORY:MDI_BATCH_MR
#define IDPBATCH_PH_PAR_LIST_SHOW_NOT_CR          26722 // CATEGORY:MDI_BATCH_MR
#define IDPBATCH_PH_PAR_LIST_SHOW_NOT_CURR        26723 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_PHASE_CONTROLSTRATEGIES_GRP     26724 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_CONTROLSTRATEGIES_ACTIVE  26725 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_CONTROLSTRATEGIES_TAG     26726 // CATEGORY:MDI_BATCH_MR

#define ID_ETM_CURVE_VARIABLENAME                 26730 // CATEGORY:MDI_EWT

#define ID_GFXRT_SHOWFILTER                       26731 // CATEGORY:STANDARD
#define ID_GFXRT_SHOWHEADER                       26732 // CATEGORY:STANDARD
#define ID_GFXRT_HEADERSTATIC                     26733 // CATEGORY:STANDARD
#define ID_GFXRT_HEADERHEIGHT                     26734 // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP55                         26735 // CATEGORY:STANDARD

#define IDP_BATCH_MR_VERSION_SOURCE               26736 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_VERSION_GRP                     26737 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_VERSION_ACTIVE                  26738 // CATEGORY:MDI_BATCH_MR

#define ID_PROJEKT_NETWORK_REDUNDANCY_GRP         26739 // CATEGORY:STANDARD
#define IDP_BATCH_SINGLEVERSIONAPPROVED           26740 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_EXECUTION_AFTER_RESTART_GRP     26741 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RESTART_AFTER_RTEND             26742 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RESTART_AFTER_FAILURE           26743 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_GLOB_WRITEIMAGE_ONPHASEACTIVATION  26744 // CATEGORY:MDI_BATCH_MR

#define ID_230TOP_PROP_NC_I_MAX                   26745 // CATEGORY:STANDARD
#define ID_230TOP_PROP_LS_SOURCE_VAR              26746 // CATEGORY:STANDARD
#define ID_230TOP_PROP_LS_CONSGROUP               26747 // CATEGORY:STANDARD
#define ID_230TOP_PROP_LS_CONS_VAR                26748 // CATEGORY:STANDARD
#define ID_230TOP_PROP_LS_VALUE_VAR               26749 // CATEGORY:STANDARD
#define ID_230TOP_PROP_LS_IBIT_VAR                26750 // CATEGORY:STANDARD

#define ID_EWTREND_KURVE_GANTT_FROM_STRING        26751 // CATEGORY:MDI_EWT

#define IDP_BATCH_CEL_GROUP_RECIPE  			        26752  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CEL_CLASS_RECIPE		  	        26753  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CEL_GROUP_CMD  		    	        26754  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CEL_CLASS_CMD		      	        26755  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CEL_GROUP_VALUE  		    	      26756  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CEL_CLASS_VALUE		      	      26757  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CEL_GROUP_JUMP_FORCE_STEP       26758  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CEL_CLASS_JUMP_FORCE_STEP       26759  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_CEL_GROUP                26760  // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_CEL_CLASS                26761  // CATEGORY:MDI_BATCH_MR
#define IDP_CHARGENFILTER_CHARGENNAMENFILTERTYPE      26762  // CATEGORY:MDI_EWT
#define IDP_CHARGENFILTER_CHARGENNAMENFILTERVARIABLE  26763  // CATEGORY:MDI_EWT
#define IDP_CHARGENFILTER_ARCHIVNAMENFILTERVARIABLE   26764  // CATEGORY:MDI_EWT

#define ID_FKT_VBA_XML_PROP_REDUNDANCY_SWITCH_DIRECTION 26765
#define ID_FKT_VBA_XML_PROP_REDUNDANCY_SWITCH_OFF_TIME  26766

#define ID_EWTREND_SMART_ARCHIVE                  26767 // CATEGORY:MDI_EWT
#define ID_EWTREND_TIMERANGE_FROM                 26768 // CATEGORY:MDI_EWT
#define ID_EWTREND_TIMERANGE_TO                   26769 // CATEGORY:MDI_EWT

#define ID_ARVTEMPLATE_NAME                       26770  // CATEGORY:STANDARD
#define ID_ARVTEMPLATE_GUID                       26771  // CATEGORY:STANDARD
#define ID_ARVTEMPLATE_LANGUAGE                   26772  // CATEGORY:STANDARD
#define ID_ARVTEMPLATE_PATH                       26773  // CATEGORY:STANDARD
#define ID_ARVTEMPLATE_FOLDER                     26774  // CATEGORY:STANDARD
#define ID_ARVTEMPLATE_DESCRIPTION                26775  // CATEGORY:STANDARD
#define ID_ARVTEMPLATE_CDTEMPLATE                 26776  // CATEGORY:STANDARD

#define IDP_CHARGENFILTER_STATE                   26777  // CATEGORY:MDI_EWT
#define ID_AML_UNACKBLINK                         26778  // CATEGORY:STANDARD
#define ID_DYNPICTURE_MOVEBYMOUSE                 26779  // CATEGORY:STANDARD
#define ID_DYNPICTURE_PROP_GRP6                   26780  // CATEGORY:STANDARD
#define ID_FRAME_VERSCHIEBEN                      26781  // CATEGORY:STANDARD
#define ID_FRAME_BEGRENZUNG                       26782  // CATEGORY:STANDARD
#define ID_FRAME_BEGRENZ_MIN_NOLIMIT							26783	 // CATEGORY:STANDARD
#define ID_FRAME_BEGRENZ_MIN_WIDTH								26784	 // CATEGORY:STANDARD
#define ID_FRAME_BEGRENZ_MIN_HEIGHT								26785	 // CATEGORY:STANDARD
#define ID_FRAME_BEGRENZ_MIN_RELATIVE							26786	 // CATEGORY:STANDARD
#define ID_FRAME_AUFSCHALT_SCHABLONEN							26787	 // CATEGORY:STANDARD
#define ID_FRAME_AUFSCHALT_WIDTH									26788	 // CATEGORY:STANDARD
#define ID_FRAME_AUFSCHALT_HEIGHT									26789	 // CATEGORY:STANDARD
#define ID_FRAME_AUFSCHALT_RELATIVE								26790	 // CATEGORY:STANDARD
#define ID_FRAME_BEGRENZUNG_CONTACTPOINTSIZE      26791	 // CATEGORY:STANDARD

#define ID_RGM_GROUP_COLORS                       26792	 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_TEXTCOLOR_INVALID_VALUE            26793	 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_BACKCOLOR_INVALID_VALUE            26794	 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_TEXTCOLOR_MATCH_PLC                26795	 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_BACKCOLOR_MATCH_PLC                26796	 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_TEXTCOLOR_NOMATCH_PLC              26797	 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_BACKCOLOR_NOMATCH_PLC              26798	 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_TEXTCOLOR_INVALID_PLC              26799	 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_BACKCOLOR_INVALID_PLC              26800	 // CATEGORY:MDI_REZEPTUR

#define IDP_GFXCOLUMN_OWN_CLRS                    26801 // CATEGORY:STANDARD
#define IDP_GFXCOLUMN_OWN_CLR_TEXT                26802 // CATEGORY:STANDARD
#define IDP_GFXCOLUMN_OWN_CLR_BACK                26803 // CATEGORY:STANDARD

#define IDP_GFXRT_SHOW_BOOL_AS_NUMBER             26804 // CATEGORY:STANDARD

#define ID_ARV_PROP38                             26805 // CATEGORY:MDI_AE
#define ID_ARV_PROP39                             26806 // CATEGORY:MDI_AE


#define ID_RGM_RECIPE_VALUE_CHECK                            26807 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_INTERLOCKING                                  26808 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_TEXTCOLOR_INTERLOCKED_RECIPE_PARAMETER        26809 // CATEGORY:MDI_REZEPTUR
#define ID_RGM_BACKCOLOR_INTERLOCKED_RECIPE_PARAMETER        26810 // CATEGORY:MDI_REZEPTUR

#define IDP_ELE_VISIBILITY_TYPE                              26811 // CATEGORY:STANDARD
#define IDP_ELE_VISIBILITY_FROM_VARIABLE                     26812 // CATEGORY:STANDARD
#define IDP_ELE_VISIBILITY_FROM_INTERLOCKING                 26813 // CATEGORY:STANDARD
#define IDP_ELE_VISIBILITY_INTERLOCKINGS                     26814 // CATEGORY:STANDARD
#define IDP_ELE_VISIBILITY_WHEN_INTERLOCKED                  26815 // CATEGORY:STANDARD
#define IDP_FKT_VBA_XML_VISIB_INTERLOCKING                   26816 // CATEGORY:STANDARD
#define ID_ELE_TEXT_TEXTSOURCE  26817 // CATEGORY:STANDARD
#define ID_VAR_GW_PREVIEW       26818 // CATEGORY:STANDARD
#define ID_VAR_GW_PREVIEW_MINMAX    26819 // CATEGORY:STANDARD
#define ID_VAR_GW_PREVIEW_COLOR     26820 // CATEGORY:STANDARD
#define ID_VAR_GW_PREVIEW_BLINK     26821 // CATEGORY:STANDARD
#define ID_VAR_GW_PREVIEW_INVISIBLE   26822 // CATEGORY:STANDARD
#define ID_VAR_GW_PREVIEW_LIMITTEXT 26823 // CATEGORY:STANDARD
#define ID_VAR_GW_PREVIEW_VALUE     26824 // CATEGORY:STANDARD

#define ID_MSGCONTROL_VOIP_DOMAIN                 26825 // CATEGORY:STANDARD
#define ID_MSGCONTROL_VOIP_USERNAME               26826 // CATEGORY:STANDARD
#define ID_MSGCONTROL_VOIP_PASSWORD               26827 // CATEGORY:STANDARD
#define IDP_BATCH_PFC_LINESEGMENTS                26828// CATEGORY:MDI_BATCH_MR

#define ID_REA_ZUSTAND_PREVIEW_COLOR     26830 // CATEGORY:STANDARD
#define ID_REA_ZUSTAND_PREVIEW_BLINK     26831 // CATEGORY:STANDARD
#define ID_REA_ZUSTAND_PREVIEW_INVISIBLE   26832 // CATEGORY:STANDARD
#define ID_REA_ZUSTAND_PREVIEW_LIMITTEXT 26833 // CATEGORY:STANDARD
#define ID_REA_ZUSTAND_PREVIEW_VALUE     26834 // CATEGORY:STANDARD
#define ID_REA_ZUSTAND_PREVIEW_STATE     26835 // CATEGORY:STANDARD
#define ID_REA_ZUSTAND_PREVIEW       26836 // CATEGORY:STANDARD
#define IDP_DYNELE_LIMITCOLOR_PREVIEW 26837 // CATEGORY:STANDARD
#define ID_DYN_PROP_BLINKVAR_PREVIEW 26838 // CATEGORY:STANDARD
#define ID_DYN_PROP_VISVAR_PREVIEW 26839 // CATEGORY:STANDARD
#define ID_DYN_PROP_TEXTCOLORVAR_PREVIEW 26840 // CATEGORY:STANDARD
#define ID_DYN_PROP_FILLCOLORVAR_PREVIEW 26841 // CATEGORY:STANDARD
#define IDS_HGFARBE_VARIABLE2_PREVIEW 26842 // CATEGORY:STANDARD
#define IDS_GLOW_COLORVAR_PREVIEW 26843 // CATEGORY:STANDARD
#define IDS_GLOW_VISVAR_PREVIEW 26844 // CATEGORY:STANDARD
#define IDS_GLOW_BLINKVAR_PREVIEW 26845 // CATEGORY:STANDARD
#define ID_230TOP_PROP_B_SHL      26846 // CATEGORY:STANDARD
#define ID_230TOP_PROP_B_WBR      26847 // CATEGORY:STANDARD
#define ID_230TOP_PROP_USE_FRAME  26848 // CATEGORY:STANDARD
#define ID_230TOP_PROP_ZUORD_VAR_PREVIEW 26849 // CATEGORY:STANDARD
#define IDP_BATCH_MATRIX_CONTENT 26850 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MATRIX_CELL_ACTIVE 26851 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CHART_ID 26852 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CHART_CELL_PHASE 26853 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CHART_CELL_CS 26854 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_TAGS 26855 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_REACTIONS 26856 // CATEGORY:MDI_BATCH_MR
#define ID_DYNPICTURE_EXPORTFORWEB 26857 // CATEGORY:STANDARD

#define IDP_BATCH_RECIPE_DOCUMENT 26858 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MR_MATRIX_FIXCOLUMNS 26859 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MR_MATRIX_FIXROWS 26860 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MR_MATRIX_FIXCOLCELL_NAME 26861 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_MR_MATRIX_FIXROWCELL_NAME 26862 // CATEGORY:MDI_BATCH_MR

#define IDP_STYLES_ITEM_NAME 26863 // CATEGORY:STANDARD
#define IDP_STYLES_ITEM_TYPE 26864 // CATEGORY:STANDARD
#define IDP_STYLES_ITEM_DESCRIPTION 26865 // CATEGORY:STANDARD
#define ID_MSGCONTROL_DISPATCHER_SMS_GATEWAY_ACTIVE     26866 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHER_OUTLOOK_ACTIVE         26867 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHER_GSMSMG_ACTIVE          26868 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHER_SMPTPOP_ACTIVE         26869 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHER_MODEM_VOICE_ACTIVE     26870 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHER_MODEM_TTS_ACTIVE       26871 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHER_VOIP_VOICE_ACTIVE      26872 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHER_VOIP_TTS_ACTIVE        26873 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHERS_VOICE_MAIN_GRP        26874 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHERS_VOICE_DISPATCHER_GRP  26875 // CATEGORY:MDI_MSGCTRL
#define ID_VARED_OWN_FLAG83                             26876 // CATEGORY:STANDARD COMMENT:use in ProcRecorder / local
#define ID_MSGCONTROL_DISPATCHERS_VOICE_VOIP_GRP        26877 // CATEGORY:MDI_MSGCTRL
#define ID_MSGCONTROL_DISPATCHERS_VOICE_TTS_GRP         26878 // CATEGORY:MDI_MSGCTRL

#define IDP_BATCH_IMP_FCN_FLT_SHOW_RT 26879 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_IMP_FCN_FLT_NAME_FROM_VAR 26880 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_IMP_FCN_FLT_NAME 26881 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_IMP_FCN_FLT_NAME_PV 26882 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_IMP_FCN_FLT_MR_ACT 26883 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_IMP_FCN_FLT_CR_ACT 26884 // CATEGORY:MDI_BATCH_MR

#define IDP_BATCH_RECIPE_DOC_NEXT_OBJ_ID  26885 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_DOC_SIZE_CX      26886 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_DOC_SIZE_CY      26887 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_ADDRESSING          26889 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FORMULA_EXPRESSION      26890 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_FORMULA_TAG             26891 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_INTERLOCKING    26892 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_DONE            26893 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_ESCAPING        26894 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_PAUSING         26895 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_HOLDING         26896 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_STOPPING        26897 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_ABORTING        26898 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_RESTARTING      26899 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_FAILURE         26900 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_RECOVER         26901 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_FORMULA_PLC_ERROR       26902 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_ADDRESSING_CHART_ID     26903 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CHART_OBJ_ROW 26904 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CHART_OBJ_COL 26905 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PFC_DOC_CENTER_CX 26906 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PFC_DOC_CENTER_CY 26907 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PFC_CONTENT 26908 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_UNITCLASS_GRP           26909 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_ASSIGNINSTANCE_TIMEOUT  26910 // CATEGORY:MDI_BATCH_MR
#define IDP_FKT_ARCHIVE_PIVOT_FORMAT            26911 // CATEGORY:STANDARD
#define IDP_BATCH_ACTION_SET_TAG_DATA_TYPE      26912 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PFC_TRANSITION_CONDITION      26913 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PFC_LINE_FIRSTCOL             26914 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PFC_LINE_FIRSTROW             26915 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PFC_LINE_SECONDCOL            26916 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PFC_LINE_SECONDROWL           26917 // CATEGORY:MDI_BATCH_MR
#define IDP_PRJ_EXTERNALLOGIN_USERLOCK          26918 // CATEGORY:STANDARD
#define IDP_PRJ_EXTERNALLOGIN_SYSTEMLOCK        26919 // CATEGORY:STANDARD
#define ID_PROJECT_EXTERNAL_REFERENCE           26920 // CATEGORY:STANDARD
#define IDP_TYPE_EXTERNAL_REFERENCE             26921 // CATEGORY:STANDARD
#define IDP_GLOWEFFECTSTYLE                     26922 // CATEGORY:STANDARD
#define IDP_FILLINGSTYLE                        26923 // CATEGORY:STANDARD
#define IDP_TEXTSTYLE                           26924 // CATEGORY:STANDARD
#define IDP_ROUNDINGSTYLE                       26925 // CATEGORY:STANDARD
#define IDP_STYLEGROUP                          26926 // CATEGORY:STANDARD

#define IDP_SHADOWEFFECTSTYLE 26927 // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP_RECORDER                26928 // CATEGORY:STANDARD COMMENT:Group ProcessRecorder
#define IDP_VOIP_SIP_PORT       26929 // CATEGORY:MDI_MSGCTRL
#define IDP_PR_USE_PROCESSRECORDER              26930 // CATEGORY:STANDARD COMMENT:use in ProcessRecorder
#define IDP_VOIP_RTP_PORT_START 26931 // CATEGORY:MDI_MSGCTRL
#define IDP_VOIP_RTP_PORT_END   26932 // CATEGORY:MDI_MSGCTRL
#define IDP_SEL_FEEDBACK_VARIABLE 26933 // CATEGORY:STANDARD
#define IDP_RUECKMELDE_VAR_GRP    26934 // CATEGORY:STANDARD

#define IDP_RT_GRP_MSG_PICS         26935 // CATEGORY:STANDARD
#define IDP_RT_MSG_PIC_Ok           26936 // CATEGORY:STANDARD
#define IDP_RT_MSG_PIC_OkCancel     26937 // CATEGORY:STANDARD
#define IDP_RT_MSG_PIC_YesNo        26938 // CATEGORY:STANDARD
#define IDP_RT_MSG_PIC_YesNoCancel  26939 // CATEGORY:STANDARD
#define IDP_RT_MSG_PIC_MultiYesNo   26940 // CATEGORY:STANDARD
#define IDP_TRANSFORMATION_ORDER    26941 // CATEGORY:STANDARD

#define IDP_LINESTYLE               26942 // CATEGORY:STANDARD
#define IDP_ELE_TEXT_HIDDEN_INPUT   26943 // CATEGORY:STANDARD
#define IDP_ELE_TEXT_MASKING_LETTER 26944 // CATEGORY:STANDARD
#define IDP_DYNTEXT_PROPERTIES_GRP  26945 // CATEGORY:STANDARD

#define IDP_AML_COMMENTS  26946 // CATEGORY:STANDARD
#define IDP_CEL_COMMENTS  26947 // CATEGORY:STANDARD

#define ID_PROP_AMLCEL_CAUSE 26948 // CATEGORY:STANDARD
#define ID_PROP_AMLCEL_CAUSEANZ 26949 // CATEGORY:STANDARD
#define ID_ELE_PROP_COMMITONKILLFOCUS 26950 // CATEGORY:STANDARD

#define IDP_SHIFT_PIC_FLT_MODEL_GFX_CFG 26951 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_TRENDELE_LINETYPES 26952 // CATEGORY:STANDARD

#define IDP_USER_LOGIN_CODE 26953 // CATEGORY:MDI_LOGIN
#define IDP_FCN_USER_LOGIN_CODE_FLAG 26954 // CATEGORY:STANDARD
#define IDP_FCN_USER_LOGIN_CODE_PV 26955 // CATEGORY:STANDARD

#define IDP_TEXTLIST_FILTER_EXPANDMODE 26956  // CATEGORY:MDI_TEXTLIST

// Properties für Zuweisungen
#define ID_PROCESS_RECORDER_PROP_GRP0          26964  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP1              26965  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP2              26966  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP3              26967  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP4              26968  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP5              26969  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP6              26970  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP7              26971  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP8              26972  // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROCESS_RECORDER_PROP9              26973  // CATEGORY:MDI_PROCESS_RECORDER
#define IDP_SM_FCN_SQL_EXPORT_SHOW_RT          26974 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SM_FCN_SQL_EXPORT_CONNECTION       26975 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SM_FCN_SQL_EXPORT_TIME_FLT         26976 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SM_FCN_SQL_EXPORT_EQUIPMENT_FLT    26977 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SM_FCN_SQL_EXPORT_FILTER           26978 // CATEGORY:MDI_SHIFTMANAGEMENT

#define ID_VAR_GW_ALARMCAUSE    26979 // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG93     26980 // CATEGORY:STANDARD
#define ID_PROP_AML_FILTER_ALARMCAUSE            26981  // CATEGORY:STANDARD

#define IDP_AML_TEXTLIST_PIC  26982 // CATEGORY:STANDARD

#define IDP_SM_SHIFT_BREAK_NAME       26983 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SM_SHIFT_BREAK_START_DAY  26984 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SM_SHIFT_BREAK_START_TIME 26985 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SM_SHIFT_BREAK_END_DAY    26986 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SM_SHIFT_BREAK_END_TIME   26987 // CATEGORY:MDI_SHIFTMANAGEMENT

#define IDP_SCALE_STYLE               26988 // CATEGORY:STANDARD
#define IDP_FRAMESTYLE                26989 // CATEGORY:STANDARD
#define IDP_PADDING_STYLE             26990 // CATEGORY:STANDARD

#define IDP_ADDIN_NAME                26991 // CATEGORY:STANDARD
#define IDP_ADDIN_VERSION             26992 // CATEGORY:STANDARD
#define IDP_ADDIN_CATEGORY            26993 // CATEGORY:STANDARD
#define IDP_ADDIN_HASSOURCE           26994 // CATEGORY:STANDARD
#define IDP_ADDIN_DESCRIPTION         26995 // CATEGORY:STANDARD
#define IDP_ADDIN_STARTUPMODE         26996 // CATEGORY:STANDARD
#define IDP_ADDIN_RUNSTATE            26997 // CATEGORY:STANDARD

#define IDP_SIMUL_PR_FILTER           26998 // CATEGORY:STANDARD COMMENT: Process Recorder - Replay Filter
#define IDP_SIMUL_PR_TIMEFILTER       26999 // CATEGORY:STANDARD
#define IDP_SIMUL_PR_BEGINTIME        27000 // CATEGORY:STANDARD
#define IDP_SIMUL_PR_ENDTIME          27001 // CATEGORY:STANDARD
#define IDP_SIMUL_PR_RANGE_BEFORE     27002 // CATEGORY:STANDARD
#define IDP_SIMUL_PR_RANGE_AFTER      27003 // CATEGORY:STANDARD
#define IDP_SIMUL_PR_START_FROM       27004 // CATEGORY:STANDARD
#define IDP_SIMUL_PR_STARTTIME        27005 // CATEGORY:STANDARD
#define IDP_SIMUL_PR_FROM_VARIABLE    27006 // CATEGORY:STANDARD

#define IDP_ELE_PROP_GRP_BARFILLING   27007 // CATEGORY:STANDARD
#define ID_PROJEKT_AD_ZENON_USER_GROUP_FOR_LOGIN    27008 // CATEGORY:STANDARD
#define IDP_ELE_PROP_GRP_TIMEPRESENTATION 27009 // CATEGORY:STANDARD
#define IDP_TIMESTYLE 27010 // CATEGORY:STANDARD
#define IDP_STYLE_REFEXT 27011 // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_ADVISEASYNC 27012 // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_UNADVISEASYNC 27013 // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_XORADVISEASYNC 27014 // CATEGORY:STANDARD
#define IDP_VERRIEG_ILOCKAKTIV 27015 // CATEGORY:MDI_ENERGY
#define IDP_VERRIEG_ILOCKUNLOCKABLE 27016 // CATEGORY:MDI_ENERGY
#define IDP_VERRIEG_ILOCKLOCKED 27017 // CATEGORY:MDI_ENERGY
#define IDP_VERRIEG_LISTCONFIGEXP 27018 //CATEGORY:MDI_ENERGY
#define IDP_FILLINGSTYLE2 27019  // CATEGORY:STANDARD
#define IDP_ELE_PROP_GRP_VALUEPRESENTATION 27020 // CATEGORY:STANDARD
#define IDP_VALUESTYLE 27021 // CATEGORY:STANDARD
#define IDP_GROUP_SYS_AUTHORIZATION 27022     // CATEGORY:STANDARD
#define IDP_SYS_AUTHORIZATION_AVAILABLE 27023 // CATEGORY:STANDARD
#define IDP_SYS_AUTHORIZATION_OWNER 27024     // CATEGORY:STANDARD
#define IDP_GFXRT_WORDWRAP 27025              // CATEGORY:STANDARD
#define IDP_FCN_ADDINFRAMEWORK_EXECUTEWIZARD_EXTENSIONID 27026 // CATEGORY:STANDARD
#define IDP_FCN_ADDINFRAMEWORK_EXECUTEWIZARD_FRAMEWORKID 27027 // CATEGORY:STANDARD
#define IDP_FCN_ADDINFRAMEWORK_EXECUTEWIZARD_SHOWDLGATRT 27028 // CATEGORY:STANDARD

#define IDP_STYLES_ITEM_GUID 27029 // CATEGORY:STANDARD

#define IDP_SHIFT_MODEL_VALIDDAYS_MONDAY 27030// CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_VALIDDAYS_TUESDAY 27031// CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_VALIDDAYS_WEDNESDAY 27032// CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_VALIDDAYS_THURSDAY 27033// CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_VALIDDAYS_FRIDAY 27034// CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_VALIDDAYS_SATURDAY 27035// CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_VALIDDAYS_SUNDAY 27036// CATEGORY:MDI_SHIFTMANAGEMENT

#define IDP_FILLINGSTYLE2_SELECTION 27037 // CATEGORY:STANDARD
#define IDP_TEXTSTYLE2_SELECTION 27038 // CATEGORY:STANDARD
#define IDP_GRP_POINTER_BAR_REPRESENTATION 27039 // CATEGORY:STANDARD

#define IDP_WIZARDEXTENSION_NAME        27040 // CATEGORY:STANDARD
#define IDP_WIZARDEXTENSION_CATEGORY    27041 // CATEGORY:STANDARD
#define IDP_WIZARDEXTENSION_DESCRIPTION 27042 // CATEGORY:STANDARD
#define IDP_WIZARDEXTENSION_GROUP       27043 // CATEGORY:STANDARD
#define IDP_SYSTEMMODEL_FILTER_HIERARCHIC       27044 // CATEGORY:STANDARD
#define IDP_ELEMENTFRAME_GRP 27045 // CATEGORY:STANDARD
#define IDP_GRAPHICSFILE_GRP 27046 // CATEGORY:STANDARD
#define IDP_PROJEKT_NETZ_TOKEN_TYPE 27047 // CATEGORY:STANDARD
#define ID_PROJEKT_AD_DOMAIN 27048   // CATEGORY:STANDARD
#define IDP_ELE_PROP_GRP_VALUE      27049  // CATEGORY:STANDARD
#define IDP_HORIZONTAL_ALIGN2       27050  // CATEGORY:STANDARD
#define IDP_VERTICAL_ALIGN2         27051  // CATEGORY:STANDARD
#define IDP_TEXTSTYLE2              27052 // CATEGORY:STANDARD
#define IDP_STYLE_GRAPHICSFILE 27053 // CATEGORY:STANDARD
#define IDP_FILLINGSTYLE2_GRAPHICS 27054 //CATEGORY:STANDARD
#define IDP_AML_TEXTLIST_ENDNODE_SEL   27055 // CATEGORY:STANDARD
#define IDP_STYLE_XML_NODE             27056 // CATEGORY:STANDARD
#define IDP_FILLINGSTYLE2_POINTER 27057 //CATEGORY:STANDARD
#define IDP_DISPLAYTYPE 27058 //CATEGORY:STANDARD
#define ID_ARV_RUN_STATUS                             27059 // CATEGORY:MDI_AE
#define ID_ARV_EVACUATION_STATUS                     27060 // CATEGORY:MDI_AE
#define IDP_EXTERNALREF_WRITEABLE 27061 //CATEGORY:STANDARD
#define IDP_GRP_UNIVERSALSLIDER_REPRESENTATION 27062 // CATEGORY:STANDARD
#define IDP_UNIVERSALSLIDERSTYLE 27063 // CATEGORY:STANDARD
#define IDP_GRP_GAUGE_PRESENTATION 27064 // CATEGORY:STANDARD
#define IDP_BATCH_FILTER_SEL_ELEMENT_ID 27065 // CATEGORY:MDI_BATCH_MR
#define IDP_STYLES_ITEM_CATEGORY 27066 // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_ADVISELOCAL 27067  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_UNADVISELOCAL 27068  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_XORADVISELOCAL 27069  // CATEGORY:STANDARD
#define ID_ETM_CURVE_FILLCOLOR_XML              27070  // CATEGORY:MDI_EWT
#define IDP_GRP_ALC_STATUS                27070 //CATEGORY:STANDARD
#define IDP_ALC_STATUSVAR_HIGHSOURCE_IN   27071 //CATEGORY:STANDARD
#define IDP_ALC_STATUSVAR_HIGHSOURCE_OUT  27072 //CATEGORY:STANDARD
#define IDP_ALC_STATUSVAR_SOURCELIST_IN   27073 //CATEGORY:STANDARD
#define IDP_ALC_STATUSVAR_SOURCELIST_OUT  27074 //CATEGORY:STANDARD
#define IDP_ALC_STATUSVAR_HIGHSOURCE_IN_IMEX   27075 //CATEGORY:STANDARD
#define IDP_ALC_STATUSVAR_HIGHSOURCE_OUT_IMEX  27076 //CATEGORY:STANDARD
#define IDP_ALC_STATUSVAR_SOURCELIST_IN_IMEX   27077 //CATEGORY:STANDARD
#define IDP_ALC_STATUSVAR_SOURCELIST_OUT_IMEX  27078 //CATEGORY:STANDARD
#define IDP_ALC_ENCLOSEMENT_USEAGE 27079 //CATEGORY:STANDARD
#define IDP_ALC_ENCLOSEMENT_SIZE   27080 //CATEGORY:STANDARD
#define ID_ETM_CURVE_INFO 27081 //CATEGORY:STANDARD
#define IDP_SHIFT_MANAGEMENT_HOLIDAY_GRP  27082 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MANAGEMENT_HOLIDAY_CODE 27083 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_MODEL_VALIDDAYS_HOLIDAY 27084 // CATEGORY:MDI_SHIFTMANAGEMENT
#define ID_PROJECT_ALC_POWER_FLOW         27085 // CATEGORY:STANDARD
#define IDP_GRP_ALC_LOADFLOW              27086 // CATEGORY:STANDARD
#define IDP_ALC_LF_ACTIVE_POWER           27087 // CATEGORY:STANDARD
#define IDP_ALC_LF_ACTIVE_POWER_VAR       27088 // CATEGORY:STANDARD
#define IDP_ALC_LF_REACTIVE_POWER         27089 // CATEGORY:STANDARD
#define IDP_ALC_LF_REACTIVE_POWER_VAR     27090 // CATEGORY:STANDARD
#define IDP_ALC_LF_VOLTAGE                27091 // CATEGORY:STANDARD
#define IDP_ALC_LF_VOLTAGE_VAR            27092 // CATEGORY:STANDARD
#define IDP_GRP_ALC_TOPOLOGY              27093 // CATEGORY:STANDARD
#define IDP_GRP_ALC_TOPOLOGY_COMPATIBILITY              27094 // CATEGORY:STANDARD
#define IDP_ALC_LF_ACTIVE_POWER_VAR_IMEX                27095 // CATEGORY:STANDARD
#define IDP_ALC_LF_REACTIVE_POWER_VAR_IMEX              27096 // CATEGORY:STANDARD
#define IDP_ALC_LF_VOLTAGE_VAR_IMEX                     27097 // CATEGORY:STANDARD
#define ID_ELE_PROP_GRP_POWERFLOW                       27098 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_ELECTRICITY_VAR                 27099 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_POWERFACTOR_VAR                 27100 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_603                         27101 // CATEGORY:MDI_SYSMODEL
#define IDP_ALC_LF_GENERATOR_REACTIVE_POWER_VAR         27102 // CATEGORY:STANDARD
#define IDP_ALC_LF_GEN_LOAD_PHASE_VAR                   27103 // CATEGORY:STANDARD
#define IDP_ALC_LF_LOAD_POWER_VAR                       27104 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_ELECTRICITY_VAR_IMEX            27105 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_POWERFACTOR_VAR_IMEX            27106 // CATEGORY:STANDARD
#define IDP_EQM_SCREEN_WITHALARMS                       27107 // CATEGORY:STANDARD
#define IDP_ALC_LF_GENERATOR_REACTIVE_POWER_VAR_IMEX    27108 // CATEGORY:STANDARD
#define IDP_ALC_LF_GEN_LOAD_PHASE_VAR_IMEX              27109 // CATEGORY:STANDARD
#define IDP_ALC_LF_LOAD_POWER_VAR_IMEX                  27110 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_TICK_CALCULATION            27111 //CATEGORY:STANDARD
#define IDP_USE_FOR_CURVE                               27112 //CATEGORY:MDI_EWT
#define ID_VBA_MICRO_XML_PROP                           27113  // CATEGORY:STANDARD
#define ID_VBA_KOMMT_TIMESTAMP_EXTERN_XML_PROP          27114  // CATEGORY:STANDARD
#define ID_VBA_KOMMT_TIMESTAMP_INTERN_XML_PROP          27115  // CATEGORY:STANDARD
#define ID_VBA_GEHT_TIMESTAMP_INTERN_XML_PROP           27116  // CATEGORY:STANDARD
#define ID_VBA_GEHT_TIMESTAMP_EXTERN_XML_PROP           27117  // CATEGORY:STANDARD
#define ID_VBA_REAKTIV_TIMESTAMP_INTERN_XML_PROP        27118  // CATEGORY:STANDARD
#define ID_VBA_REAKTIV_TIMESTAMP_EXTERN_XML_PROP        27119  // CATEGORY:STANDARD
#define ID_VBA_GOESTIME_INTERN_ANZ_XML_PROP             27120  // CATEGORY:STANDARD
#define ID_VBA_GOESTIME_EXTERN_ANZ_XML_PROP             27121  // CATEGORY:STANDARD
#define ID_VBA_COMESTIME_INTERN_ANZ_XML_PROP            27122  // CATEGORY:STANDARD
#define ID_VBA_COMESTIME_EXTERN_ANZ_XML_PROP            27123  // CATEGORY:STANDARD
#define ID_VBA_REAKTIV_INTERN_ANZ_XML_PROP              27124  // CATEGORY:STANDARD
#define ID_VBA_REAKTIV_EXTERN_ANZ_XML_PROP              27125  // CATEGORY:STANDARD
#define ID_VBA_EQM_ANZ_XML_PROP                         27126  // CATEGORY:STANDARD
#define ID_VBA_EQM_XML_PROP                             27127  // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_AXIS_LABELING               27128 // CATEGORY:STANDARD
#define ID_FKT_VBA_XML_PROP_TREND_LABELING_VARIABLE     27129 // CATEGORY:STANDARD
#define ID_VBA_EQM_GUID_XML_PROP                        27130  // CATEGORY:STANDARD
#define IDP_ALC_LF_LISTCONFIG            27131 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_FAILLINE         27132 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_FAILLINECAPACITY 27133 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_FAILACTUAL_A     27134 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_FAILACTUAL_P     27135 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_LOADLINE         27136 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_LOADACTUAL_A     27137 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_LOADACTUAL_P     27138 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_LOAD_N_1_A       27139 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LF_LIST_LOAD_N_1_P       27140 // CATEGORY:MDI_POWERFLOW_N_1
#define IDP_ALC_LINENAME                 27141 // CATEGORY:STANDARD
#define ID_PROJECT_ALC_LF_N_1            27142 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_AXISTYPE          27143 // CATEGORY:STANDARD  
#define IDP_SCALESTYLE_RASTER            27144 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_LEGEND_VERT_AXIS  27145 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_CALCULATION       27146 // CATEGORY:STANDARD
#define IDP_SHIFT_FILTER                 27147 // CATEGORY:STANDARD
#define IDP_GROUP_SYS_ALARMAGGREGATION   27148 // CATEGORY:STANDARD
#define IDP_ADDIN_MINIMUMVERSION         27149 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_VOLTAGE_IN_VAR      27150 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_VOLTAGE_OUT_VAR     27151 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_POWER_IN_VAR        27152 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_POWER_OUT_VAR       27153 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_REACTIVE_IN_VAR     27154 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_REACTIVE_OUT_VAR    27155 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_VOLTAGE_IN_VAR_IMEX      27156 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_VOLTAGE_OUT_VAR_IMEX     27157 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_POWER_IN_VAR_IMEX        27158 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_POWER_OUT_VAR_IMEX       27159 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_REACTIVE_IN_VAR_IMEX   27160 // CATEGORY:STANDARD
#define IDP_ALC_LF_LINE_REACTIVE_OUT_VAR_IMEX  27161 // CATEGORY:STANDARD
#define IDP_CEL_TEXT_VALUE_CHANGE       27162 // CATEGORY:STANDARD
#define IDP_CEL_TEXT_NEW_AND_OLD_VALUE  27163 // CATEGORY:STANDARD
#define IDP_FCN_BATCH_MR_RELEASE_FILTER 27164 // CATEGORY:MDI_BATCH_MR
#define IDP_PROJEKT_SW_CHANGE_CEL       27165 // CATEGORY:STANDARD
#define IDP_AML_CEL_FILTER_SHIFT_SYSMODELFILTER 27166 // CATEGORY:EZ_BTB
#define IDP_SHIFT_INCLUDE_SHIFTS_WITHOUT_EQUIPMENT_MODEL 27167 // CATEGORY:EZ_BTB
#define ID_PROP_SYSTEMMODELGOUP_HIERACHIC 27168 // CATEGORY:STANDARD
#define IDP_GRP_CURVE_REPRESENTATION 27169 // CATEGORY:STANDARD
#define IDP_CURVESTYLE 27170 // CATEGORY:STANDARD
#define IDP_GRP_CURVESTYLE_CURVE 27171 // CATEGORY:STANDARD
#define IDP_GRP_CURVESTYLE_GANTT 27172 // CATEGORY:STANDARD
#define ID_ELE_PROP_PARAM_FROM_SCREEN 27173 // CATEGORY:STANDARD
#define IDP_GRP_ALC_LF_TRANSFORMER_INPUT                27174 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_NOMINAL_ACTIVE_POWER     27175 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_LOST_ACTIVE_POWER        27176 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_LOST_REACTIVE_POWER      27177 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_SHUNT_ACTIVE_POWER       27178 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_SHUNT_REACTIVE_POWER     27179 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_TAP_MINIMUM_POSITION     27180 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_TAP_NOMINAL_POSITION     27181 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_TAP_MAXIMUM_POSITION     27182 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_TAP_STEP_SIZE            27183 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_TAP_ON_SECONDARY         27184 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_TAP_POSITION_VAR         27185 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_TAP_POSITION_VAR_IMEX    27186 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_PHASE_SHIFT              27187 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_PHASE_SHIFT_VAR          27188 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_PHASE_SHIFT_VAR_IMEX     27189 // CATEGORY:STANDARD
#define IDP_TIME_FLT_SHIFT_LIST_NAME 27190 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_DESCRIPTION 27191 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_START_DATE 27192 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_START_TIME 27193 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_END_DATE 27194 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_END_TIME 27195 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_EQM_LINKS 27196 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_EQM_RECURS_LINKS 27197 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_USERS 27198 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST 27199 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_TIME_FLT_SHIFT_LIST_CONFIG_FIRST_WRITE 27200 // CATEGORY:MDI_PICTIME:MDI_PICAMLFLT:MDI_PICCELFLT
#define IDP_SCALESTYLE_LEGEND_HOR_AXIS 27201 // CATEGORY:STANDARD
#define IDP_SUBSTITUTE_INTERLOCKING_VARS 27202 // CATEGORY:STANDARD
#define IDP_ALC_LF_PRIMARY_THREE_WINDING_TRANSFORMER 27203 // CATEGORY:STANDARD
#define IDP_SHIFT_NAMEFILTERMODE 27204 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_NAMEFILTERSTRING 27205 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_NAMEFILTERSTRING_IS_CASESENSITIVE 27206 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_SHIFT_SHIFTNAMENFILTERVARIABLE 27207 // CATEGORY:MDI_SHIFTMANAGEMENT
#define IDP_GRP_ALC_CAPACITOR 27208 // CATEGORY:STANDARD
#define IDP_ALC_LF_CAPACITOR_STEPSIZE 27209 // CATEGORY:STANDARD
#define IDP_ALC_LF_CAPACITOR_WIRING 27210 // CATEGORY:STANDARD
#define IDP_ALC_LF_CAPACITOR_POSITION 27211 // CATEGORY:STANDARD
#define IDP_ALC_LF_CAPACITOR_POSITION_IMEX 27212 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_NAME 27213 // CATEGORY:STANDARD
#define ID_REMA_PROP49 27214  // CATEGORY:STANDARD
#define IDP_SHIFT_SHIFTSELECTIONMODE 27215 // CATEGORY:EZ_BTB
#define IDP_SHIFT_TIMELIMITSMODE 27216 // CATEGORY:EZ_BTB
#define IDP_SHIFT_OVERRIDE_TIMEFILTER_BY_SHIFTFILTER 27217 // CATEGORY:EZ_BTB
#define ID_VAR_PROP_GRP14 27218 // CATEGORY:STANDARD
#define ID_VAR_ADP_VARSELECTOR 27219 // CATEGORY:STANDARD
#define IDP_VAR_ETM_SETTINGS 27220 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTCURRENT 27221 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTVOLTAGE 27222 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTCOSPHI 27223 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTACTIVEPOWER 27224 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTREACTIVEPOWER 27225 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTCURRENT 27226 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTVOLTAGE 27227 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTCOSPHI 27228 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTACTIVEPOWER 27229 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTREACTIVEPOWER 27230 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTCURRENT_IMEX 27231 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTVOLTAGE_IMEX 27232 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTCOSPHI_IMEX 27233 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTACTIVEPOWER_IMEX 27234 //CATEGORY:STANDARD
#define IDP_ALC_SE_INPUTREACTIVEPOWER_IMEX 27235 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTCURRENT_IMEX 27236 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTVOLTAGE_IMEX 27237 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTCOSPHI_IMEX 27238 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTACTIVEPOWER_IMEX 27239 //CATEGORY:STANDARD
#define IDP_ALC_SE_OUTPUTREACTIVEPOWER_IMEX 27240 //CATEGORY:STANDARD
#define IDP_GRP_ALC_LOADFLOW_LINE 27241 //CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG88 27242  // CATEGORY:STANDARD
#define IDP_VAR_ADP_SOURCEVARS     27243 // CATEGORY:STANDARD
#define IDP_VAR_ADP_SOURCEVARS_DIALOG 27244 // CATEGORY:STANDARD
#define IDP_VAR_ADP_SOURCEVAR      27245 // CATEGORY:STANDARD
#define IDP_VAR_ADP_SOURCEPRIORITY 27246 // CATEGORY:STANDARD
#define IDP_VAR_ADP_SELECTSTATUS   27247 // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_ADVISEVALUEADJUSTMENT 27248  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_UNADVISEVALUEADJUSTMENT 27249  // CATEGORY:STANDARD
#define IDP_FCN_MT_PARALLELEXEC_XORADVISEVALUEADJUSTMENT 27250  // CATEGORY:STANDARD
#define ID_PROP_MSGCTRL_MESSAGE_SENDINGMODE 27251 // CATEGORY:MDI_MSGCTRL
#define ID_TEMPLATE_BACKGROUNDGRAPHICALIGNMENT 27252  // CATEGORY:STANDARD
#define ID_SCREEN_BACKGROUNDGRAPHICALIGNMENT 27253  // CATEGORY:STANDARD
#define ID_PROP_MSGCTRL_MESSAGE_RECIPIENTTYPE 27254 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_MSGCTRL_MESSAGE_SENDINGMETHOD 27255 // CATEGORY:MDI_MSGCTRL
#define ID_PROP_TEMPLATE_FRAMEBORDERSTYLE 27256 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_VARIABLE_TIMESTAMP 27257 // CATEGORY:STANDARD
#define IDP_ELE_PROP_GRP_TIMEAXIS 27258 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_IS_YEAR        27259 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_IS_MONTH       27260 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_IS_DAY         27261 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_IS_HOUR        27262 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_IS_MINUTE      27263 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_IS_SECOND      27264 // CATEGORY:STANDARD
#define IDP_SCALESTYLE_IS_MILLISECOND 27265 // CATEGORY:STANDARD
#define IDP_RV_MDI_USEBACKUPFOLDER    27266 // CATEGORY:MDI_REZEPTUR:MDI_REZEPT_ALT
#define ID_AML_GRP_REACT        27267 // CATEGORY:STANDARD
#define ID_AML_COLOR_REACT      27268 // CATEGORY:STANDARD
#define ID_AML_IMAGE_REACT      27269 // CATEGORY:STANDARD
#define ID_AML_REACT_PREF_IMAGE 27270 // CATEGORY:STANDARD
#define ID_AML_REACT_PREF       27271 // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP_GRP10  27272 // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP38      27273 // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP39      27274 // CATEGORY:STANDARD
#define IDS_ZENMENU_PROP40      27275 // CATEGORY:STANDARD
#define IDP_ETM_VARIABLE_TIMESTAMP 27276 // CATEGORY:STANDARD
#define IDP_GRP_RT_MOUSEMANIPULATION 27277 // CATEGORY:STANDARD
#define IDP_GRP_MOUSEMANIPULATION_ETM 27278 // CATEGORY:STANDARD
#define IDP_MOUSE_DRAG_LEFT 27279 // CATEGORY:STANDARD
#define IDP_MOUSE_DRAG_RIGHT 27280 // CATEGORY:STANDARD
#define IDP_MOUSE_MOVEWHEEL 27281 // CATEGORY:STANDARD
#define IDP_MOUSE_ALTWHEEL 27282 // CATEGORY:STANDARD
#define IDP_MOUSE_CTRLWHEEL 27283 // CATEGORY:STANDARD
#define IDP_BATCH_TAG_RECIPEPARAM_MR_CHANGEABLE_LIMITS 27284 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_RECIPEPARAM_MR_CHANGEABLE_LIMITS_LOCAL 27285  // CATEGORY:MDI_BATCH_MR
#define IDP_REPORTVIEWER_SHOW_HEADER 27286 // CATEGORY:STANDARD
#define IDP_ALC_LINKNAME 27287 // CATEGORY:STANDARD 
#define IDP_EMS_PEAKPOWER_VAR 27288// CATEGORY:MDI_EMS
#define ID_EWTREND_GANTT_AUTO_POS   27289 // CATEGORY:STANDARD
#define ID_EWTREND_GANTT_GAP        27290 // CATEGORY:STANDARD
#define ID_EWTREND_GANTT_REF_POS    27291 // CATEGORY:STANDARD
#define ID_EWTREND_GANTT_ORDER      27292 // CATEGORY:STANDARD
#define IDP_BATCH_RECIPE_LAWS_GRP   27293 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_LAWS_NO_PARALLEL_BRANCHES 27294 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_FRAME_TOUCH_GRP           27295 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_FRAME_TOUCH_IP            27296 // CATEGORY:MDI_BATCH_MR
#define IDP_ETM_FILTER_SUBSTI_VAR   27297 // CATEGORY:MDI_EWT
#define IDP_ETM_FILTER_SUBSTI_CURVE_KANAL   27298 // CATEGORY:MDI_EWT
#define IDP_ARCHIVE_KANAL_SUBSTI_SOURCE   27299 // CATEGORY:STANDARD
#define IDP_ARCHIVE_KANAL_SUBSTI_DESTINATION 27300 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_CURRENT_IN_VAR 27301 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_CURRENT_OUT_VAR 27302 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_VOLTAGE_IN_VAR 27303 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_VOLTAGE_OUT_VAR 27304 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_ACTIVE_POWER_IN_VAR 27305 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_ACTIVE_POWER_OUT_VAR 27306 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_REACTIVE_POWER_IN_VAR 27307 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_REACTIVE_POWER_OUT_VAR 27308 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_CURRENT_IN_VAR_IMEX 27309 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_CURRENT_OUT_VAR_IMEX 27310 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_VOLTAGE_IN_VAR_IMEX 27311 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_VOLTAGE_OUT_VAR_IMEX 27312 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_ACTIVE_POWER_IN_VAR_IMEX 27313 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_ACTIVE_POWER_OUT_VAR_IMEX 27314 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_REACTIVE_POWER_IN_VAR_IMEX 27315 // CATEGORY:STANDARD
#define IDP_ALC_LF_TRANSFORMER_REACTIVE_POWER_OUT_VAR_IMEX 27316 // CATEGORY:STANDARD
#define IDP_FKT_VBA_XML_PROP_TREND_VISIBILITY_VARIABLE 27317 // CATEGORY:STANDARD
#define IDP_IMM_MASTER_NAME      27318  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_LABEL     27319  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_PLANTCODE 27320  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_EHC       27321  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_SSC       27322  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_TYPE      27323  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_SERIALNB  27324  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_MAKE      27325  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_LASTMAINT 27326  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_INITDATE  27327  // CATEGORY:STANDARD
#define IDP_IMM_MASTER_STATUS    27328  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_NAME       27329  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_LABEL      27330  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_PLANTCODE  27331  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_MAINT      27332  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_EHC        27333  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_SSC        27334  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_COMMENT    27335  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_INTERN     27336  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_LASTMAINT  27337  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_TODOMAINT  27338  // CATEGORY:STANDARD
#define IDP_IMM_MAINT_STATUS     27339  // CATEGORY:STANDARD
#define IDP_IMM_HIST_NAME        27340  // CATEGORY:STANDARD
#define IDP_IMM_HIST_LABEL       27341  // CATEGORY:STANDARD
#define IDP_IMM_HIST_PLANTCODE   27342  // CATEGORY:STANDARD
#define IDP_IMM_HIST_MAINT       27343  // CATEGORY:STANDARD
#define IDP_IMM_HIST_COUNT       27344  // CATEGORY:STANDARD
#define IDP_IMM_HIST_USER        27345  // CATEGORY:STANDARD
#define IDP_IMM_HIST_COMMENT     27346  // CATEGORY:STANDARD
#define IDP_IMM_HIST_DATE        27347  // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG94      27348  // CATEGORY:STANDARD
#define IDP_PH_STRATEGY_MDI_LIST_CONFIG 27349 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VAR_VALUE_MIN 27350 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VAR_VALUE_MAX 27351 // CATEGORY:MDI_BATCH_MR
#define IDP_ETM_FILTER_SUBSTI_INDEX_VAR               27352 // CATEGORY:MDI_EWT
#define IDP_ETM_FILTER_SUBSTI_INDEX_RULE              27353 // CATEGORY:MDI_EWT
#define IDP_ETM_FILTER_SUBSTI_INDEX_CASE_SENSITIVE    27354 // CATEGORY:MDI_EWT
#define IDP_ETM_FILTER_AUTO_ARCHIVE                   27355 // CATEGORY:MDI_EWT
#define IDP_AML_BLINKMODE        27356 // CATEGORY:STANDARD
#define IDP_RGM_SIGNATURE_GRP    27357 // CATEGORY:STANDARD
#define IDP_AML_ROWBBACKGROUNDCOLOR 27358 // CATEGORY:STANDARD
#define IDP_AML_STATETEXTCOLOR      27359 // CATEGORY:STANDARD
#define ID_VERRIEG_WRITE_STATUSBIT_AKTIV   27360 // CATEGORY:STANDARD
#define IDP_AML_ROWBACKGROUNDCOLOR 27361 // CATEGORY:STANDARD
#define IDP_AML_BACKGROUNDCOLOR_RECEIVED    27362 // CATEGORY:STANDARD
#define IDP_AML_BACKGROUNDCOLOR_CLEARED     27363 // CATEGORY:STANDARD
#define IDP_AML_BACKGROUNDCOLOR_REACTIVATED 27364 // CATEGORY:STANDARD
#define IDP_AML_COLOR_RECEIVED_ACK      27365 // CATEGORY:STANDARD
#define IDP_AML_BGCOLOR_RECEIVED_ACK    27366 // CATEGORY:STANDARD
#define IDP_AML_COLOR_CLEARED_ACK       27367 // CATEGORY:STANDARD
#define IDP_AML_BGCOLOR_CLEARED_ACK     27368 // CATEGORY:STANDARD
#define IDP_AML_COLOR_REACTIVATED_ACK   27369 // CATEGORY:STANDARD
#define IDP_AML_BGCOLOR_REACTIVATED_ACK 27370 // CATEGORY:STANDARD
#define IDP_MASTERDATA_LIST_CONFIG          27371 // CATEGORY:MDI_IMM
#define IDP_MAINTENANCEDATA_LIST_CONFIG     27372 // CATEGORY:MDI_IMM
#define IDP_MAINTENANCE_HISTORY_LIST_CONFIG 27373 // CATEGORY:MDI_IMM
#define IDS_ZENMENU_PROP41 27374 // CATEGORY:STANDARD
#define IDP_GRP_ALC_LF_TRANSFORMER_OUTPUT 27375 // CATEGORY:STANDARD
#define IDP_GRP_ALC_LOADFLOW_INPUT       27376 // CATEGORY:STANDARD
#define IDP_GRP_ALC_LOADFLOW_OUTPUT       27377 // CATEGORY:STANDARD
#define IDP_GRP_ALC_LOADFLOW_LINE_INPUT  27378 // CATEGORY:STANDARD
#define IDP_GRP_ALC_LOADFLOW_LINE_OUTPUT  27379 // CATEGORY:STANDARD
#define IDP_MSGCTRL_SENDMESSAGE_DESTINATION 27380 // CATEGORY:STANDARD
#define IDP_BATCH_PHASE_UNIT_CLASS_NAME         27381 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_UNIT_CLASS_DESCRIPTION  27382 // CATEGORY:MDI_BATCH_MR
#define ID_PROP_SYSTEMMODEL_IMM_MAINT_COUNT_RECURSIVE 27383 // CATEGORY:STANDARD
#define ID_BATCH_PLACEHOLDER_NAME                     27384 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_DESCRIPTION              27385 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_CLASS_NAME               27386 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_CLASS_DESCRIPTION        27387 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_OPERATION_ID             27388 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_OPERATION_NAME           27389 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_OPERATION_DESCRIPTION    27390 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_INSTANCE_NAME            27391 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_INSTANCE_DESCRIPTION     27392 // CATEGORY:MDI_BATCH_MR
#define ID_PROP_FKT_CHECK_MAINT_SYSTEMMODEL           27393 // CATEGORY:STANDARD
#define IDP_BATCH_PLACEHOLDER_LIST_CONFIG             27394 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_PARENT_NAME                    27395 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_PARENT_DESCRIPTION             27396 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_PARENT_GROUP                   27397 // CATEGORY:MDI_BATCH_MR
#define ID_IMM_FILTER_SYSMODEL  27398 // CATEGORY:STANDARD
#define IDP_IMM_VIEW_SETTING    27399 // CATEGORY:STANDARD
#define ID_IMM_FILTER_TIME 27400 //CATEGORY:STANDARD
#define IDP_PR_REFRESH_RATE                           27401 // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROP_HTMLELEMENT_CONTAINERFILE 27402 // CATEGORY:STANDARD
#define IDP_SIMUL_PRDATA_FROM_EXPORTPATH    27403 // CATEGORY:STANDARD
#define IDP_ETM_SCALE_LIMITS 27404 // CATEGORY:STANDARD
#define IDP_AXIS_VISIBILITY_VARIABLE 27405 // CATEGORY:STANDARD
#define ID_VBA_INTERN_EXTERN_TIME_DIFFERENCE_XML_PROP     27406 // CATEGORY:STANDARD
#define ID_VBA_INTERN_EXTERN_TIME_DIFFERENCE_ANZ_XML_PROP 27407 // CATEGORY:STANDARD
#define ID_VAR_TIMESTAMP_DEVIATION      27408 // CATEGORY:STANDARD
#define ID_VAR_DEVIATION                27409 // CATEGORY:STANDARD
#define ID_VARED_OWN_FLAG95             27410 // CATEGORY:STANDARD
#define IDP_FILES_DB_RESNAME            27411 // CATEGORY:STANDARD
#define IDP_SHOW_TOOLTIPS               27412 // CATERGORY:STANDARD
#define IDP_BATCH_RECIPE_PLACEHOLDER 27413 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_PLACEHOLDER_GROUP 27414 // CATEGORY:MDI_BATCH_MR
#define ID_BATCH_PLACEHOLDER_GROUP_NAME 27415 // CATEGORY:MDI_BATCH_MR
#define ID_ELEMENT_VISUAL_NAME          27416 // CATEGORY:STANDARD
#define IDP_BATCH_PHASE_LOCAL 27417 // CATEGORY:MDI_BATCH_MR
#define IDP_SCALE_AXIS_COLOR 27418 // CATEGORY:STANDARD
#define IDP_COLOR_FROM_CURVE 27419 //CATEGORY:STANDARD
#define IDP_SMARTOBJECT_GRP_FOLDERGENERAL 27420 //CATEGORY:NONE 
#define IDP_SMARTOBJECT_FOLDERNAME        27421 //CATEGORY:NONE
#define IDP_SMARTOBJECT_GRP_OBJECTGENERAL 27422 //CATEGORY:NONE
#define IDP_SMARTOBJECT_OBJECTNAME        27423 //CATEGORY:NONE
#define IDP_BATCH_TAG_LOCAL 27424 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_ACTION_LOCAL 27425 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_CS_LOCAL 27426 // CATEGORY:MDI_BATCH_MR
#define ID_SMARTOBJECT_PROP_GRP0  27427
#define ID_SMARTOBJECT_PROP1 27428
#define ID_SMARTOBJECT_PROP2 27429
#define ID_SMARTOBJECT_PROP3 27430
#define IDP_BATCH_CS_TAG_LOCAL 27431 // CATEGORY:MDI_BATCH_MR
#define IDP_SMARTOBJECT_GRP_INSTANCEGENERAL 27432 //CATEGORY:NONE 
#define IDP_SMARTOBJECT_INSTANCENAME        27433 //CATEGORY:NONE
#define ID_EXP_PROP_NODES                   27434 //CATEGORY:STANDARD
//#define IDP_INSTANTIATION_MODE              27435 //Unused
#define IDP_SMARTOBJECT_INSTANCE_RELEASEGROUP 27436 //CATEGORY:NONE
#define IDP_MODULES 27437 // CATEGORY:NONE
#define IDP_SMARTOBJECT_OBJECTVERSION       27438 //CATEGORY:NONE
#define IDP_SO_RELEASED_PROP_NAME           27439 //CATEGORY:NONE
#define IDP_ITEMUSAGE_PROP_COLUMN           27440 //CATEGORY:STANDARD
#define IDP_FUNCTIONS_LIST                  27441 //CATEGORY:NONE
#define IDP_VARVERW_VARIABLES               27442 //CATEGORY:STANDARD
#define IDP_VARVERW_REMAS                   27443 //CATEGORY:STANDARD
#define IDP_VARVERW_TYPES                   27444 //CATEGORY:STANDARD
#define IDP_DOCUMENT_MANAGER_SCREENS        27445 //CATEGORY:STANDARD
#define IDP_SCREENS_LINKEDSYMBOLS           27446 //CATEGORY:STANDARD
#define ID_BATCH_PLACEHOLDER_INSTANCE_ISLOCKED 27447 // CATEGORY:MDI_BATCH_MR
#define IDP_SYMBOLMANAGER_ELEMENTS          27448 //CATEGORY:STANDARD
#define IDP_SYMBOLMANAGER_GLOBAL_ELEMENTS          27449 //CATEGORY:STANDARD
#define IDP_BATCH_PHASE_REACTION_ORDER 27450 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_REACTION_STATE_COMMAND 27451 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_REACTION_MODE_COMMAND 27452 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_ELEMENT_PLACEHOLDER 27453 // CATEGORY:MDI_BATCH_MR
#define IDP_VAR_SERVICEGRIDSETTINGS_GROUP	27454 //CATEGORY:NONE
#define IDP_VAR_SERVICEGRIDSETTINGS_ACCESSPERMISSION 27455 //CATEGORY:NONE
#define IDP_SYMBOLGROUP_ELEMENTS 27456
#define IDP_SCRIPTLIST_SCRIPTS 27457 //CATEGORY:STANDARD
#define ID_VAR_61131_3_SETTINGS 27458 //CATEGORY:STANDARD
#define IDP_BATCH_TAG_OLD_RT_LOCAL_FLAGS 27459 // CATEGORY:MDI_BATCH_MR
#define ID_VAR_GW_FUNKTION_ALARM            27460  // CATEGORY:STANDARD
#define ID_VAR_GW_FUNKTION_TREND            27461  // CATEGORY:STANDARD
#define ID_REMA_FUNKTION_ALARM              27462  // CATEGORY:STANDARD
#define ID_REMA_FUNKTION_TREND              27463  // CATEGORY:STANDARD
#define ID_STATE_FUNKTIONID_ALARM           27464  // CATEGORY:STANDARD
#define ID_STATE_FUNKTIONID_TREND           27465  // CATEGORY:STANDARD
#define ID_VARED_OWN_ALARM                  27466  // CATEGORY:STANDARD
#define ID_VARED_OWN_TREND                  27467  // CATEGORY:STANDARD
#define IDP_ARCHIVES_LIST 27468  // CATEGORY:STANDARD
#define IDP_ARV_VARIABLES_LIST 27469  // CATEGORY:STANDARD

#define ID_PROJEKT_NETZ_SERVICENET          27470 // CATEGORY:STANDARD
#define ID_PROJECT_NETZ_SERVICEHUB          27471 // CATEGORY:STANDARD

#define ID_METADATA_SYNCHRONIZER_GRP        27472 // CATEGORY:STANDARD
#define ID_MS_SELECT_INSTANCE               27473 // CATEGORY:STANDARD
#define ID_MS_SELECT_DATABASE               27474 // CATEGORY:STANDARD
#define ID_MS_TEST_CONNECTION               27475 // CATEGORY:STANDARD

#define IDP_BATCH_PHASE_COMMANDS_CND_GRP    27476 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_COMMAND_PAUSE_CND       27477 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_COMMAND_RESUME_CND      27478 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_COMMAND_HOLD_CND        27479 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_COMMAND_RESTART_CND     27480 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_PAUSE_CND      27481 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_RESUME_CND     27482 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_HOLD_CND       27483 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_RESTART_CND    27484 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_STOP_CND       27485 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_ABORT_CND      27486 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_COMMAND_PAUSE_CND_XML       27487 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_COMMAND_RESUME_CND_XML      27488 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_COMMAND_HOLD_CND_XML        27489 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_COMMAND_RESTART_CND_XML     27490 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_PAUSE_CND_XML      27491 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_RESUME_CND_XML     27492 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_HOLD_CND_XML       27493 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_RESTART_CND_XML    27494 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_STOP_CND_XML       27495 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_RECIPE_COMMAND_ABORT_CND_XML      27496 // CATEGORY:MDI_BATCH_MR
#define IDP_MENUS_MENULIST                 27497  // CATEGORY:STANDARD
#define IDP_ZENMENUS_MENULIST                 27498  // CATEGORY:STANDARD
#define IDP_INTERLOCKING_ELEMENTS           27499  //CATEGORY:STANDARD
#define IDP_RGM_RECIPEGROUPS                        27500 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_RECIPES                             27501 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_VARIABLES                           27502 // CATEGORY:MDI_REZEPTUR
#define IDP_RGM_VALUES                              27503 // CATEGORY:MDI_REZEPTUR
#define IDP_SO_MODULES                              27504 //CATEGORY:NONE
#define IDP_BATCH_UNIT_TYPE                         27505 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_CHANGES_WHILE_ACTIVE_GRP    27506 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_WRITE_CHANGES_IMMEDTIATELY  27507 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_WRITE_CHANGES_TO            27508 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_PHASE_OLD_RT_LOCAL_FLAGS          27509 // CATEGORY:MDI_BATCH_MR
#define IDP_CACHED_VARIMPORT_SELECTED               27510 // CATEGORY:STANDARD
#define IDP_CACHED_VARIMPORT_DRV_CONN_SEL_ID        27511 // CATEGORY:STANDARD
#define IDP_CACHED_VARIMPORT_DRV_CONN_SEL_NAME      27512 // CATEGORY:STANDARD
#define IDP_CACHED_VARIMPORT_DRV_CONN_SEL_INTERFACE 27513 // CATEGORY:STANDARD
#define IDP_CACHED_VARIMPORT_DRV_CONN_SEL_ADDINFO   27514 // CATEGORY:STANDARD
#define IDP_SMARTOBJECT_OBJECT_ONLY_IN_SOLUTIONPACKAGE 27515 // CATEGORY:STANDARD
#define IDP_SMARTOBJECT_OBJECT_GUID                    27516 // CATEGORY:STANDARD
#define IDP_BATCH_UNITS                             27517 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_UNIT_CLASSES                      27518 // CATEGORY:MDI_BATCH_MR
#define ID_PROJECT_SOLUTION_PACKAGE                 27519 // CATEGORY:STANDARD
#define IDP_BATCH_TAG_VAR_VALUE                     27520 // CATEGORY:MDI_BATCH_MR
#define IDP_BATCH_TAG_VAR_VALUE_AS_NODE             27521 // CATEGORY:MDI_BATCH_MR
#define ID_FKT_EXPORTSTATUSVAR                      27522 // CATEGORY:STANDARD
#define IDP_STRATON_QUEUE_EVENT                     27523 // CATEGORY:STANDARD
#define IDP_STRATON_MAX_EVENT_QUANTITY              27524 // CATEGORY:STANDARD
#define IDP_COMBIELE_SYMB_SOURCE                    27525 // CATEGORY:STANDARD
#define IDP_COMBIELE_SYMB_TARGET                    27526 // CATEGORY:STANDARD
#define IDP_COMBIELE_SYMB_CASESENSITIVE             27527 // CATEGORY:STANDARD
#define IDP_COMBIELE_SYMB_NAMESUBSTI                27528 // CATEGORY:STANDARD
#define IDP_COMBIELE_SYMB_COMBINED                  27529 // CATEGORY:STANDARD
#define IDP_SMARTOBJECT_INSTANCEGUID                27530 // CATEGORY:STANDARD
#define ID_PROJEKT_PROCESS_REC_OUTSOURCING          27531 // CATEGORY:MDI_PROCESS_RECORDER
#define ID_PROP_SYSTEMMODEL_GROUP_IMM               27532 // CATEGORY:STANDARD
#define ID_PROP_SYSTEMMODEL_IMM_MAINT_COUNT         27533 // CATEGORY:STANDARD
#define IDP_BATCH_GLOB_PHASE_EXEC_TAG_CHANGEABLE 27534 // CATEGORY:MDI_BATCH_MR
#define IDP_SYMBOL_IS_GROUP 27535 // CATEGORY:STANDARD
#define IDP_ZENMENUITEMBASE_PROPS 27536 // CATEGORY:STANDARD
#define ID_PROJEKT_WEB            27537  // CATEGORY:STANDARD
#define IDP_AML_LAST_MODIFY_TITLE         27538  // CATEGORY:STANDARD
#define IDP_AML_LAST_MODIFY_TITLE_WIDTH   27539  // CATEGORY:STANDARD
#define IDP_SMARTOBJECT_REFERENCENAME     27540 //CATEGORY:NONE
#define IDP_SMARTOBJECT_REFERENCEGUID     27541 //CATEGORY:NONE
#define IDP_CEL_CATEGORY_TITLE            27542  // CATEGORY:STANDARD
#define IDP_CEL_CATEGORY_TITLE_WIDTH      27543  // CATEGORY:STANDARD
#define IDP_SO_EXP_PROP_TYPE              27544  // CATEGORY:STANDARD
#define ID_CATEGORYPROP_GRP               27545  // CATEGORY:STANDARD
#define IDP_CATEGORYPROP_ID               27546  // CATEGORY:STANDARD
#define IDP_CATEGORYPROP_NAME             27547  // CATEGORY:STANDARD
#define IDP_MODULECATEGORYPROP_CATLINK    27548  // CATEGORY:STANDARD
#define IDP_CATEGORIES_INCLUDES           27549 // CATEGORY:EZ_BTB:STANDARD
#define IDP_CATEGORIES_EXCLUDES           27550 // CATEGORY:EZ_BTB:STANDARD
#define IDP_CEL_CATEGORY_FILTER           27551 // CATEGORY:EZ_BTB:STANDARD
#define IDP_VAR_STATUS_COLOR_GRP          27552 // CATEGORY:STANDARD
#define IDP_VAR_STATUS_PLC_FAILURE_COLOR  27553 // CATEGORY:STANDARD
#define IDP_VAR_STATUS_SRV_FAILURE_COLOR  27554 // CATEGORY:STANDARD
#define IDP_VAR_STATUS_REC_FAILURE_COLOR  27555 // CATEGORY:STANDARD
#define IDP_MODULECATEGORYPROP_GRP        27556 // CATEGORY:STANDARD
#define IDP_MODULECATEGORYPROP_ID         27557 // CATEGORY:STANDARD
#define IDP_MODULECATEGORYPROP_DESC       27558 // CATEGORY:STANDARD
#define IDP_HIDEINACTIVEALARMGROUPS       27559 // CATEGORY:STANDARD
#define IDP_HIDEINACTIVEALARMCLASSES      27560 // CATEGORY:STANDARD
#define IDP_RGM_USERNAMING                27561 // CATEGORY:MDI_REZEPTUR
#define IDP_PWD_COMPLEXITY                27562 // CATEGORY:STANDARD
#define IDP_PWD_HISTORY                   27563 // CATEGORY:STANDARD
#define IDP_PWD_COMPLEXITY_MIN_SPECIALS   27564 // CATEGORY:STANDARD
#define IDP_PWD_COMPLEXITY_MIN_DIGITS     27565 // CATEGORY:STANDARD
#define IDP_PWD_COMPLEXITY_MIN_UPPERS     27566 // CATEGORY:STANDARD
#define IDP_PWD_COMPLEXITY_MIN_LOWERS     27567 // CATEGORY:STANDARD
#define IDP_PWD_HISTORY_SIZE              27568 // CATEGORY:STANDARD
#define IDP_USR_EXPIRY_TIME_GRP           27569 // CATEGORY:STANDARD
#define IDP_USR_EXPIRY_TIME_ACTIVE        27570 // CATEGORY:STANDARD
#define IDP_USR_EXPIRY_TIME_VALUE         27571 // CATEGORY:STANDARD
#define IDP_PWD_DURATION_GRP              27572 // CATEGORY:STANDARD
#define IDP_PWD_MIN_DAYS                  27573 // CATEGORY:STANDARD
#define IDP_PWD_LOGIN_RULES               27574 // CATEGORY:STANDARD
#define IDP_PWD_CHANGE_PW_AT_FIRST_LOGIN  27575 // CATEGORY:STANDARD
#define IDP_PWD_DAYS_MSG_EXPIRED_USERS    27576 // CATEGORY:STANDARD
#define IDP_PWD_AD_GRP_RIGHTS_RECURSIVE   27577 // CATEGORY:STANDARD
#define IDP_RT_LOCKED_ELEM_MSG_KIND       27578 // CATEGORY:STANDARD
#define IDP_USR_GRP_AUTOLOGOUT_GRP        27579 // CATEGORY:MDI_LOGIN
#define IDP_USR_GRP_AUTOLOGOUT_ACTIVE     27580 // CATEGORY:MDI_LOGIN
#define IDP_USR_GRP_AUTOLOGOUT_MINUTES    27581 // CATEGORY:MDI_LOGIN
#define IDP_MODULECATEGORYPROP_MODULE     27582 // CATEGORY:STANDARD
#define IDP_RTD_INSUFFICIENT_LEVEL_EX     27583 // CATEGORY:STANDARD
#define IDP_SIGNATURE_MODE_OLD            27584 // CATEGORY:STANDARD
#define ID_SMARTOBJECT_PROP_SONAME        27585 // CATEGORY:STANDARD
#define ID_SMARTOBJECT_PROP_SOTNAME       27586 // CATEGORY:STANDARD
#define IDP_SHOWSYMBOL_AT_SO              27587 // CATEGORY:STANDARD
#define IDP_SMARTOBJECT_VERSIONNEW        27588 // CATEGORY:STANDARD
#define IDP_SMARTOBJECT_NAMENEW           27589 // CATEGORY:STANDARD
#define ID_MSGCONTROL_DISPATCHER_SMPTPOP_MAILRECIPIENT_AS 27590 // CATEGORY:MDI_MSGCTRL
#define IDP_FKTAPPTEXTLISTE_SWITCHLANGUAGEMODE 27591 // CATEGORY:STANDARD
#define IDP_VARIABLE_AT_SO_MAPPABLE       27592 // CATEGORY:STANDARD
#define IDP_VARIABLE_SMARTOBJECT_ORIGINATOR 27593 // CATEGORY:STANDARD
#define IDP_VARIABLE_GROUP_SMARTOBJECTS   27594 // CATEGORY:STANDARD
#define ID_SMARTOBJECT_VAR_MAPPING        27595 // CATEGORY:STANDARD
#define IDP_TOKEN_QUESTION_TIMEOUT_ACTION 27596 // CATEGORY:STANDARD
#define IDP_SMARTOBJECT_VARMAPPING_ORIGNAME 27597 // CATEGORY:STANDARD
#define IDP_SMARTOBJECT_VARMAPPING_LINKEDNAME 27598 // CATEGORY:STANDARD
#define IDP_BATCH_PFC_TRANSITION_CONDITION_RT_MODIFIED 27599 // CATEGORY:MDI_BATCH_MR
#define IDP_USEEXPORTLANGUAGE             27600 // CATEGORY:STANDARD
#define IDP_SO_MODIFIED                   27601 // CATEGORY:STANDARD
#define IDP_ARV_COMPRESSED                27602 // CATEGORY:MDI_AE

// Ende, höchster ID ist 28999 (siehe #define PROPID_DRIVER_FIRST 29000)
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Hier sind alle in der Entwicklungversion neu hinzu gekommenen Property-IDs einzutragen.
// Format wie PropertyIDs.h
// Beim Branchen wird der Inhalt in die PropertyIDs.h übertragen
//////////////////////////////////////////////////////////////////////////////////////////////////////////

//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by AKEDIT32.rc
//

#define IDS_AK_POINTFALSCH              2000
#define IDS_AK_POINTFALSCH_ENG          2001
#define IDS_AK_DOPP_PA                  2010
#define IDS_AK_DOPP_PA_ENG              2011
#define IDS_AK_PA                       2030
#define IDS_AK_PA_ENG                   2031
#define IDS_AK_TI45                     2040
#define IDS_AK_TI45_ENG                 2041
#define IDS_AK_TI46                     2050
#define IDS_AK_TI46_ENG                 2051
#define IDS_AK_TI47                     2060
#define IDS_AK_TI47_ENG                 2061
#define IDS_AK_TI160                    2070
#define IDS_AK_TI160_ENG                2071
#define IDS_AK_TI31                     2080
#define IDS_AK_TI31_ENG                 2081
#define IDS_AK_TI138                    2090
#define IDS_AK_TI138_ENG                2091
#define IDS_AK_TI139                    2100
#define IDS_AK_TI139_ENG                2101
#define IDS_AK_TI136                    2110
#define IDS_AK_TI136_ENG                2111
#define IDS_AK_TI30                     2120
#define IDS_AK_TI30_ENG                 2121
#define IDS_AK_TI137                    2130
#define IDS_AK_TI137_ENG                2131
#define IDS_AK_TI36                     2140
#define IDS_AK_TI36_ENG                 2141
#define IDS_AK_TI34                     2150
#define IDS_AK_TI34_ENG                 2151
#define IDS_AK_TI35                     2160
#define IDS_AK_TI35_ENG                 2161
#define IDS_AK_TI140                    2170
#define IDS_AK_TI140_ENG                2171
#define IDS_AK_TI48                     2180
#define IDS_AK_TI48_ENG                 2181
#define IDS_AK_TI37                     2190
#define IDS_AK_TI37_ENG                 2191
#define IDS_AK_IMPORT1                  2200
#define IDS_AK_IMPORT1_ENG              2201
#define IDS_AK_UND                      2210
#define IDS_AK_UND_ENG                  2211
#define IDS_AK_LOADPARA                 2240
#define IDS_AK_LOADPARA_ENG             2241
#define IDS_AK_PARA1                    2250
#define IDS_AK_PARA1_ENG                2251
#define IDS_AK_PARA2                    2260
#define IDS_AK_PARA2_ENG                2261
#define IDS_AK_EMDEF                    2270
#define IDS_AK_EMDEF_ENG                2271
#define IDS_AK_MBMDEF                   2280
#define IDS_AK_MBMDEF_ENG               2281
#define IDS_AK_BEFDEF                   2290
#define IDS_AK_BEFDEF_ENG               2291
#define IDS_AK_WORDDEF                  2300
#define IDS_AK_WORDDEF_ENG              2301
#define IDS_AK_FLOATDEF                 2310
#define IDS_AK_FLOATDEF_ENG             2311
#define IDS_AK_ZWDEF                    2320
#define IDS_AK_ZWDEF_ENG                2321
#define IDS_AK_TOPMLDDEF                2330
#define IDS_AK_TOPMLDDEF_ENG            2331
#define IDS_AK_TOPSTRDEF                2340
#define IDS_AK_TOPSTRDEF_ENG            2341
#define IDS_AK_TI50                     2350
#define IDS_AK_TI50_ENG                 2351
#define IDS_AK_TI49                     2360
#define IDS_AK_TI49_ENG                 2361
#define IDS_AK_ZULETZT                  2370
#define IDS_AK_ZULETZT_ENG              2371
#define IDS_AK_IMPORT2                  2380
#define IDS_AK_IMPORT2_ENG              2381
#define IDS_AK_TI32                     2390
#define IDS_AK_TI32_ENG                 2391
#define IDS_AK_TI33                     2400
#define IDS_AK_TI33_ENG                 2401
#define IDS_AK_ZENDBERROR               2410
#define IDS_AK_ZENDBERROR_ENG           2411
#define IDS_AK_TI51                     2420
#define IDS_AK_TI51_ENG                 2421
#define IDS_AK_STATION                  2440
#define IDS_AK_STATION_ENG              2441
#define IDS_AK_GRUPPE                   2450
#define IDS_AK_GRUPPE_ENG               2451
#define IDS_AK_STA                      2460
#define IDS_AK_STA_ENG                  2461
#define IDS_AK_VTA                      2470
#define IDS_AK_VTA_ENG                  2471
#define IDS_AK_EMPFANG                  2480
#define IDS_AK_EMPFANG_ENG              2481
#define IDS_AK_SEND                     2490
#define IDS_AK_SEND_ENG                 2491
#define IDS_AK_IBIT_0                   2500
#define IDS_AK_IBIT_0_ENG               2501
#define IDS_AK_IBIT_1                   2510
#define IDS_AK_IBIT_1_ENG               2511
#define IDS_AK_IBIT_2                   2520
#define IDS_AK_IBIT_2_ENG               2521
#define IDS_AK_IBIT_3                   2530
#define IDS_AK_IBIT_3_ENG               2531
#define IDS_AK_DISTO                    2540
#define IDS_AK_DISTO_ENG                2541
#define IDS_AK_REYDISP                  2550
#define IDS_AK_REYDISP_ENG              2551
#define IDS_AK_TI58                     2560
#define IDS_AK_TI58_ENG                 2561
#define IDS_AK_TI59                     2570
#define IDS_AK_TI59_ENG                 2571
#define IDS_AK_TI60                     2580
#define IDS_AK_TI60_ENG                 2581
#define IDS_AK_TI150                    2590
#define IDS_AK_TI150_ENG                2591
#define IDS_AK_IBIT_4                   2600
#define IDS_AK_IBIT_4_ENG               2601
#define IDS_AK_TI1                      2610
#define IDS_AK_TI1_ENG                  2611
#define IDS_AK_TI3                      2620
#define IDS_AK_TI3_ENG                  2621
#define IDS_AK_TI5                      2630
#define IDS_AK_TI5_ENG                  2631
#define IDS_AK_TI7                      2640
#define IDS_AK_TI7_ENG                  2641
#define IDS_AK_TI9                      2650
#define IDS_AK_TI9_ENG                  2651
#define IDS_AK_TI11                     2660
#define IDS_AK_TI11_ENG                 2661
#define IDS_AK_TI13                     2670
#define IDS_AK_TI13_ENG                 2671
#define IDS_AK_TI101                    2680
#define IDS_AK_TI101_ENG                2681
#define IDS_AK_TI63                     2690
#define IDS_AK_TI63_ENG                 2691
#define IDS_AK_TI122                    2700
#define IDS_AK_TI122_ENG                2701
#define IDS_AK_TI126                    2710
#define IDS_AK_TI126_ENG                2711
#define IDS_AK_TI102                    2720
#define IDS_AK_TI102_ENG                2721
#define IDS_AK_TI105                    2730
#define IDS_AK_TI105_ENG                2731

#define IDS_OKT1                        29020
#define IDS_OKT1_ENG                    29021
#define IDS_OKT2                        29022
#define IDS_OKT2_ENG                    29023
#define IDS_OKT3                        29024
#define IDS_OKT3_ENG                    29025
#define IDS_OKT4                        29026
#define IDS_OKT4_ENG                    29027
#define IDS_OKT5                        29028
#define IDS_OKT5_ENG                    29029
#define IDS_OKT6                        29030
#define IDS_OKT6_ENG                    29031
#define IDS_DP_TYPE                     29032
#define IDS_DP_TYPE_ENG                 29033
#define IDS_RED                         29034
#define IDS_RED_ENG                     29035
#define IDS_Z_TYP                       29036
#define IDS_Z_TYP_ENG                   29037
#define IDS_Z_NR                        29038
#define IDS_Z_NR_ENG                    29039
#define IDS_EW                          29040
#define IDS_EW_ENG                      29041
#define IDS_ZEIT                        29042
#define IDS_ZEIT_ENG                    29043
#define IDS_I_BIT                       29044
#define IDS_I_BIT_ENG                   29045
#define IDS_EWB                         29046
#define IDS_EWB_ENG                     29047
#define IDS_EWB_INI                     29048
#define IDS_EWB_INI_ENG                 29049
#define IDS_MERKER                      29050
#define IDS_MERKER_ENG                  29051
#define IDS_BAZ_WERT                    29052
#define IDS_BAZ_WERT_ENG                29053
#define IDS_GT                          29054
#define IDS_GT_ENG                      29055
#define IDS_WDH                         29056
#define IDS_WDH_ENG                     29057
#define IDS_REG                         29058
#define IDS_REG_ENG                     29059
#define IDS_GA                          29060
#define IDS_GA_ENG                      29061
#define IDS_ST_SAVE                     29062
#define IDS_ST_SAVE_ENG                 29063
#define IDS_VAL_SAVE                    29064
#define IDS_VAL_SAVE_ENG                29065
#define IDS_VTA                         29066
#define IDS_VTA_ENG                     29067
#define IDS_TRANS                       29068
#define IDS_TRANS_ENG                   29069
#define IDS_RLINE                       29070
#define IDS_RLINE_ENG                   29071
#define IDS_INOUT                       29072
#define IDS_INOUT_ENG                   29073
#define IDS_ROKT1                       29074
#define IDS_ROKT1_ENG                   29075
#define IDS_ROKT2                       29076
#define IDS_ROKT2_ENG                   29077
#define IDS_ROKT3                       29078
#define IDS_ROKT3_ENG                   29079
#define IDS_ROKT4                       29080
#define IDS_ROKT4_ENG                   29081
#define IDS_ROKT5                       29082
#define IDS_ROKT5_ENG                   29083
#define IDS_EKANAL                      29084
#define IDS_EKANAL_ENG                  29085
#define ID_VAR_AKS_GRP1                 29086
#define ID_VAR_AKS_GRP1_ENG             29087
#define ID_VAR_AKS_GRP2                 29088
#define ID_VAR_AKS_GRP2_ENG             29089
#define ID_VAR_AKS_GRP3                 29090
#define ID_VAR_AKS_GRP3_ENG             29091
#define ID_VAR_AKS_GRP4                 29092
#define ID_VAR_AKS_GRP4_ENG             29093
#define IDS_SBOPT                       29094
#define IDS_SBOPT_ENG                   29095
#define IDS_REPGRP                      29096
#define IDS_REPGRP_ENG                  29097
#define IDS_COMMAND_GRP                 29098
#define IDS_COMMAND_GRP_ENG             29099
// StringIDs in U:\Zenon\resourcen\ResourceIDs.mdb Tabelle Treiberpropertys für AK-DRV 29020..29100
// wenn mehr String-IDs benötigt werden => von CopaData neuen Bereich reservieren

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1020
#define _APS_NEXT_COMMAND_VALUE         32772
#define _APS_NEXT_CONTROL_VALUE         1044
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by BiffiDCMConf32.rc
//

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Additional properties free IDs must be requested from COPA-DATA !
#define ID_BiffiDCM_NV          29420
#define ID_BiffiDCM_TRANSIENT   29421
#define ID_BiffiDCM_SENDDIRECT  29422

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1029
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by EIBV2_32V.rc
//
#define IDD_ETS_PROJEKT                 1028
#define IDS_DEFAULT_FILENAME           1029
#define IDS_HAUPTGRUPPE                 29445
#define IDS_MITTELGRUPPE                29446
#define IDS_UNTERGRUPPE                 29447
#define IDS_EIB_ADRESSE                 29448
#define IDS_ETS2_DATABASE               29449
#define IDS_ZYKLISCH_LESEN              29450

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        136
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1030
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by ELRESTKonf32.rc
//
#define IDD_NETZ                        138
#define IDC_STATIONTYP                  1028
#define IDD_ELREST_PAGE                 28656
#define IDC_EL_LIST1                    28657
#define IDC_EL_BUTTON1                  28658
#define IDC_EL_BUTTON2                  28659
#define IDC_EL_BUTTON3                  28660
#define IDC_EL_BUTTON4                  28661
#define IDC_EL_EDIT2                    28662
#define ID_ELREST_DEVPARAM              29224

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1029
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by IEC61850V.rc
//

#define IDS_IEC61850_ADDR               29408
#define IDS_IEC61850_LANNR              29409
#define IDS_IEC61850_WERT               29412
#define IDS_IEC61850_CDC                29413
#define IDS_IEC61850_IBIT               29414
#define IDS_IEC61850_EWB                29415
#define IDS_IEC61850_EWB_INI            29416
#define IDS_IEC61850_MERKER             29417
#define IDS_IEC61850_ST_SAVE            29418
#define IDS_IEC61850_VAL_SAVE           29419
#define IDS_IEC61850_GOOSE_IDX          29426
#define IDS_IEC61850_GOOSE_ATTR1        29427
#define IDS_IEC61850_GOOSE_ATTR2        29428
#define IDS_IEC61850_GOOSE_ATTR3        29429
#define IDS_IEC61850_GOOSE_ATTR4        29430
#define IDS_IEC61850_GOOSE_ATTR5        29431
#define IDS_IEC61850_GOOSE_ATTR1_POS    29432
#define IDS_IEC61850_GOOSE_ATTR2_POS    29433
#define IDS_IEC61850_GOOSE_ATTR3_POS    29434
#define IDS_IEC61850_GOOSE_ATTR4_POS    29435
#define IDS_IEC61850_GOOSE_ATTR5_POS    29436
#define ID_VAR_PROP_GRP_GOOSE           29437

#define IDS_IBIT_0                      1100
#define IDS_IBIT_1                      1101
#define IDS_IBIT_2                      1102
#define IDS_IBIT_3                      1103
#define IDS_IBIT_4                      1104


// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1003
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by Sample32V.rc
//

// Property-IDs lt. ResourceIDs.mdb/TreiberPropertys
#define	ID_IEC870_TYPE 29010
#define	ID_IEC870_COA1 29011
#define	ID_IEC870_COA2 29012
#define	ID_IEC870_IOA1 29013
#define	ID_IEC870_IOA2 29014
#define	ID_IEC870_IOA3 29015
#define ID_IEC870_PRIVATEINDEX 29016

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1001
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by Sample32V.rc
//

// Property-IDs lt. ResourceIDs.mdb/TreiberPropertys
#define	ID_IEC870_103_FktType 29016
#define	ID_IEC870_103_InfNo   29017
#define	ID_IEC870_103_Index   29018

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1001
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by NWMEDI32.rc
//
#define IDC_OBJID                       1004
#define IDC_NWM_LANGTEXT                1005
#define IDC_NWM_IX                      1006
#define IDC_OBJTYPE                     1007
#define IDC_OBJACCESS                   1008
#define IDC_KENNUNG                     1009
#define IDC_OFFSET                      1010
#define IDC_AGENT                       1011
#define IDC_CTRCYCLE                    1016
#define IDC_COMPARE1                    1017
#define IDC_COMPARE2                    1018
#define IDC_COMPARE3                    1019
#define IDC_COMPARE4                    1020
#define IDC_COMPARE5                    1021
#define IDC_COMPARE6                    1022
#define IDC_COMPARE7                    1023
#define IDC_COMPARE8                    1024
#define IDC_COMPARE9                    1025
#define IDC_COMPARE10                   1026
#define IDC_MASK                        1030
#define IDC_COMPVAL                     1031
#define IDC_LOGLISTBOX                  1102

#define IDD_REPAIRDLG                   3998
#define IDD_REPAIRDLG_GER               3998
#define IDD_PV_DLG_ALLGEMEIN            4000
#define IDD_PV_DLG_ALLGEMEIN_GER        4001
#define IDD_PV_DLG_COUNTER              4010
#define IDD_PV_DLG_COUNTER_GER          4011
#define IDD_PV_DLG_MELDUNG              4020
#define IDD_PV_DLG_MELDUNG_GER          4021
#define IDD_LOGDIALOG                   4030
#define IDD_LOGDIALOG_GER               4031
#define IDS_PV_DLG_INTEGER              4040
#define IDS_PV_DLG_INTEGER_GER          4041
#define IDS_PV_DLG_STRING               4050
#define IDS_PV_DLG_STRING_GER           4051
#define IDS_PV_DLG_ECHO                 4060
#define IDS_PV_DLG_ECHO_GER             4061
#define IDS_PV_DLG_TRAP                 4070
#define IDS_PV_DLG_TRAP_GER             4071
#define IDS_PV_DLG_TABLE                4080
#define IDS_PV_DLG_TABLE_GER            4081


#define IDS_NWMPARA                     29000

#define IDS_NO_AGENT                    29100
#define IDS_NO_AGENT_GER                29101
#define IDS_NO_OBJEKT                   29110
#define IDS_NO_OBJEKT_GER               29111
#define IDS_NO_TTA                      29120
#define IDS_NO_TTA_GER                  29121
#define IDS_DOUBLE_TTA                  29130
#define IDS_DOUBLE_TTA_GER              29131
#define IDS_PV_WEG_DLG_ZU               29140
#define IDS_PV_WEG_DLG_ZU_GER           29141
#define IDS_NOPARAMFILE                 29150
#define IDS_NOPARAMFILE_GER             29151
#define IDS_CANCEL1                     29160
#define IDS_CANCEL1_GER                 29161
#define IDS_VALIDATE_ERR01              29170
#define IDS_VALIDATE_ERR01_GER          29171
#define IDS_VALIDATE_ERR02              29180
#define IDS_VALIDATE_ERR02_GER          29181
#define IDS_VALIDATE_ERR03              29190
#define IDS_VALIDATE_ERR03_GER          29191
#define IDS_VALIDATE_ERR04              29200
#define IDS_VALIDATE_ERR04_GER          29201



// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1003
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1007
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by Sample32V.rc
//
#define IDP_SAMPLE                      29424
#define IDP_BUTTONSAMPLE                29423

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1001
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by SysVar32.rc
//
#define IDC_NET_NUM                     1000
#define IDC_NODE_NUM                    1001
#define IDC_MODULE_NUM                  1002
#define IDC_DATENPUNKT                  1003
#define IDC_DP_B_GERAET                 1004
#define IDC_DP_C_GERAET                 1005
#define IDC_SIGMIN                      1007
#define IDC_SIGMAX                      1008
#define IDC_MESSMIN                     1009
#define IDC_MESSMAX                     1010
#define IDC_ERSATZWERT                  1011
#define IDC_VNAME                       1012
#define IDC_KENNUNG                     1013
#define IDC_VORZEICHEN                  1014
#define IDC_LESSCHREIB                  1015
#define IDC_AUSWAHL                     1016
#define IDC_ButtonAuswahl               1017
#define IDC_UPDATE                      1018
#define IDC_RadioRema                   1019
#define IDC_RadioGW                     1020
#define IDC_EINHEIT                     1021
#define IDC_LOG_NUM                     1022
#define IDC_STRINGLEN                   1023
#define IDC_BIT_NUMMER                  1024
#define IDC_RADIOLESEN                  2109
#define IDD_ANALOGWORT_GERMAN           28656
#define IDD_ANALOGWORT_ENGLISH          28657
#define IDD_STRINGTYP_GERMAN            28670
#define IDD_STRINGTYP_ENGLISH           28671
#define IDD_ANALOGWORTRDA_GERMAN        28690
#define IDD_ANALOGWORTRDA_ENGLISH       28691
#define IDD_DIGITALBIT_GERMAN           28710
#define IDD_DIGITALBIT_ENGLISH          28711

#define IDS_NODE                        29462
#define IDS_LOGID                       29463

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        132
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1025
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by Syskron_LDSV.rc
//
#define IDC_PARNAME_0                   1000
#define IDC_PARNAME_1                   1001
#define IDC_PARNAME_2                   1002
#define IDC_PARNAME_3                   1003
#define IDC_PARNAME_4                   1004
#define IDC_PARNAME_5                   1005
#define IDC_PARNAME_6                   1006
#define IDC_PARNAME_7                   1007
#define IDC_PARNAME_8                   1008
#define IDC_PARNAME_9                   1009
#define IDC_PARVAL_0                    1010
#define IDC_PARVAL_1                    1011
#define IDC_PARVAL_2                    1012
#define IDC_PARVAL_3                    1013
#define IDC_PARVAL_4                    1014
#define IDC_PARVAL_5                    1015
#define IDC_PARVAL_6                    1016
#define IDC_PARVAL_7                    1017
#define IDC_PARVAL_8                    1018
#define IDC_PARVAL_9                    1019
#define IDC_FUNCTION                    1020
#define ID_Syskron_LDS_FKT_RD           29220
#define ID_Syskron_LDS_FKT_WR           29221
#define ID_Syskron_LDS_PARAM_RD         29222
#define ID_Syskron_LDS_PARAM_WR         29223

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1002
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1005
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by BeckhoffNGConf32.rc
//
#define IDC_LZS                         1029
#define IDS_NG_ADRESSE                  29400
#define IDS_IGROUP                      29401
#define IDS_BITSIZE                     29402

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1030
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by 3S_Arti_NGConf32.rc
//
#define IDC_LZS                         1029
#define IDS_SYMADRESSE                  29410
#define IDS_SYMNAME                     29411

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1030
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by iLon100V.rc
//
#define IDD_AUSWAHL_ILON                1000
#define IDC_TYPE                        1001
#define IDC_IPADDRESS                   1002
#define IDC_VARTREE                     1009
#define IDS_ILON_DATAPOINT              29000

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        137
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1002
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by OPCUA_Conf.rc
//

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Additional properties free IDs must be requested from COPA-DATA !
#define ID_OPCUA_BROWSENAME          29425
#define ID_OPCUA_STRUCTURETYPENODEID 29533
#define ID_OPCUA_PARENTNODEID        29534
#define ID_OPCUA_STRUCTURERELATIVEPATH 29535

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1029
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by BACnetNGConf32.rc
//

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Additional properties free IDs must be requsted from COPA-DATA !

#define IDS_BACNETNG_WRITEPRIORITY      29441
#define IDS_BACNETNG_PROPERTYID         29442
#define IDS_BACNETNG_DATATYPE           29443
#define IDS_BACNETNG_STRINGLENGTH       29444
#define IDS_BACNETNG_EVENTSTATE         29471

#define IDS_BACNETNG_TRENDVARTYPE       29529
#define IDS_BACNETNG_OBJECTNAME         29530
#define IDS_BACNETNG_OBJECTTYPE         29531
#define IDS_BACNETNG_INSTANCEID         29532


// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1029
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by BURPVIV.rc
//

// Property-IDs lt. ResourceIDs.mdb/TreiberPropertys
#define	ID_BURPVI_ADDRESS 29465
#define	ID_BURPVI_VT_TYPE 29466
#define	ID_BURPVI_VN_ELEMENTS 29467
#define	ID_BURPVI_VL_LENGTH 29468
#define	ID_BURPVI_OD 29469
#define	ID_BURPVI_GROUP 29470

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1001
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by CTIConf.rc
//

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Additional properties free IDs must be requsted from COPA-DATA !
#define IDS_CTI_SECONDARYOBJECT        29464


// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1029
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by SPRECON870V.rc
//
#define ID_IEC870_TYPE                  29010
#define ID_IEC870_COA1                  29011
#define ID_IEC870_IOA1                  29013
#define ID_SPRECON870_COUNTERACTIVE     29472
#define ID_SPRECON870_COUNTERGROUP      29473
#define ID_SPRECON870_MAXCOUNTDIFF      29474
#define ID_SPRECON870_ONMAXCOUNTDIFF    29475
#define ID_SPRECON870_ONNOUPDATE        29476
#define ID_SPRECON870_SUBSTVALUETYPE    29477
#define ID_SPRECON870_SUBSTVALUEVAL     29478
#define ID_SPRECON870_SUBSTVALUEVAR     29479
#define ID_SPRECON870_COUNTER_NODE      29480
#define ID_SPRECON870_SUBSTITUTE_NODE   29481
#define ID_SPRECON870_STRUCT_COA1       29482
#define ID_SPRECON870_STRUCT_COA2       29483
#define ID_SPRECON870_STRUCT_IOA1       29484
#define ID_SPRECON870_STRUCT_IOA2       29485
#define ID_SPRECON870_STRUCT_IOA3       29486
#define ID_SPRECON870_REVDIR_NODE       29487
#define ID_SPRECON870_REVDIRENABLED     29488
#define ID_SPRECON870_REVDIRONLY        29489
#define ID_SPRECON870_REMANENT          29490
#define ID_SPRECON870_INITVAL           29491
#define ID_SPRECON870_POSITION          29523
#define ID_SPRECON870_COMMANDEXECUTIONTIME 29524
#define ID_SPRECON870_TRIGGERCOMMAND    29525
#define ID_SPRECON870_TRIGGERCYCLE      29526
#define ID_SPRECON870_TRIGGERCOUNT      29527
#define ID_SPRECON870_COMMANDGROUP      29528
// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1001
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by AMISTSV.rc
//
#define IDP_AMISTS_REFERENCE						29482
#define IDP_AMISTS_DEVICE								29483
#define IDP_AMISTS_RELAYADDRESS					29484
#define IDP_AMISTS_RELAYPROGRAM					29485
#define IDP_AMISTS_GROUPNAME            29486
#define IDP_AMISTS_COMPOUNDCALL         29487
#define IDP_AMISTS_GROUP							  29488
#define IDP_AMISTS_NAME                 29489
#define IDP_AMISTS_GROUPTYPE				    29490
#define IDP_AMISTS_OBIS							    29491
#define IDP_AMISTS_GATEWAYCOMMAND       29492
#define IDP_AMISTS_STARTTIME            29493
#define IDP_AMISTS_STOPTIME             29494

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1001
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by DNP3V.rc
//

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Additional properties free IDs must be requsted from COPA-DATA !
#define ID_DNP3_VARIATION      29495
#define ID_DNP3_SCANGROUP      29496
#define ID_DNP3_OPERATION      29500

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1029
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by Sample32V.rc
//

// Property-IDs lt. ResourceIDs.mdb/TreiberPropertys
#define	ID_IEC62056_ADDRESS       29497
#define	ID_IEC62056_TIMEADJUST    29498
#define	ID_IEC62056_TIMEINTERVAL  29499

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        1001
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1000
#define _APS_NEXT_SYMED_VALUE           1000
#endif
#endif
//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by KDNP1V.rc
//

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Additional properties free IDs must be requsted from COPA-DATA !
#define ID_KDNP1_OPERATION      29521


// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        140
#define _APS_NEXT_COMMAND_VALUE         32771
#define _APS_NEXT_CONTROL_VALUE         1029
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
