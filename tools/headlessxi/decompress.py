from .util import util

SIZEOF_INT = 4 # 4-bytes
DECOMPRESS_DAT_DATA = [
    364096164, 364096184, 364103244, 0, 0, 0, 364096664, 364096204, 364096164,
    0, 0, 364096444, 364096224, 364096184, 0, 0, 364096244, 364096284,
    364096204, 0, 0, 364097904, 364096264, 364096224, 0, 0, 0, 0, 364096244,
    128, 0, 364098824, 364096304, 364096224, 0, 0, 364096544, 364096324,
    364096284, 0, 0, 364097004, 364096344, 364096304, 0, 0, 364096364,
    364099804, 364096324, 0, 0, 364103084, 364096384, 364096344, 0, 0,
    364096404, 364098204, 364096364, 0, 0, 364102964, 364096424, 364096384, 0,
    0, 0, 0, 364096404, 129, 0, 364096464, 364099164, 364096204, 0, 0,
    364096484, 364097544, 364096444, 0, 0, 364101204, 364096504, 364096464, 0,
    0, 364097104, 364096524, 364096484, 0, 0, 0, 0, 364096504, 130, 0,
    364096564, 364103404, 364096304, 0, 0, 364099684, 364096584, 364096544, 0,
    0, 364096604, 364096864, 364096564, 0, 0, 364096624, 364105344, 364096584,
    0, 0, 364096644, 364105664, 364096604, 0, 0, 0, 0, 364096624, 131, 0,
    364096684, 364103744, 364096184, 0, 0, 364097324, 364096704, 364096664, 0,
    0, 364097204, 364096724, 364096684, 0, 0, 364096744, 364105744, 364096704,
    0, 0, 364098044, 364096764, 364096724, 0, 0, 364096924, 364096784,
    364096744, 0, 0, 364101304, 364096804, 364096764, 0, 0, 364096824,
    364101764, 364096784, 0, 0, 364099984, 364096844, 364096804, 0, 0, 0, 0,
    364096824, 132, 0, 364101084, 364096884, 364096584, 0, 0, 364106324,
    364096904, 364096864, 0, 0, 0, 0, 364096884, 133, 0, 364096944, 364100984,
    364096764, 0, 0, 364096964, 364097664, 364096924, 0, 0, 364096984,
    364106064, 364096944, 0, 0, 0, 0, 364096964, 134, 0, 364098564, 364097024,
    364096324, 0, 0, 364104384, 364097044, 364097004, 0, 0, 364103724,
    364097064, 364097024, 0, 0, 364097084, 364104044, 364097044, 0, 0, 0, 0,
    364097064, 135, 0, 364097124, 364098684, 364096504, 0, 0, 364105824,
    364097144, 364097104, 0, 0, 364097164, 364103844, 364097124, 0, 0,
    364097184, 364099884, 364097144, 0, 0, 0, 0, 364097164, 136, 0, 364097224,
    364099444, 364096704, 0, 0, 364097244, 364100364, 364097204, 0, 0,
    364097264, 364101564, 364097224, 0, 0, 364102244, 364097284, 364097244, 0,
    0, 364103964, 364097304, 364097264, 0, 0, 0, 0, 364097284, 137, 0,
    364097344, 364097784, 364096684, 0, 0, 364097364, 364104264, 364097324, 0,
    0, 364097464, 364097384, 364097344, 0, 0, 364097404, 364103364, 364097364,
    0, 0, 364097424, 364104064, 364097384, 0, 0, 364097444, 364104584,
    364097404, 0, 0, 0, 0, 364097424, 138, 0, 364098244, 364097484, 364097364,
    0, 0, 364097504, 364102984, 364097464, 0, 0, 364101944, 364097524,
    364097484, 0, 0, 0, 0, 364097504, 139, 0, 364098964, 364097564, 364096464,
    0, 0, 364097584, 364097684, 364097544, 0, 0, 364097604, 364104664,
    364097564, 0, 0, 364099104, 364097624, 364097584, 0, 0, 364097644,
    364105304, 364097604, 0, 0, 0, 0, 364097624, 140, 0, 0, 0, 364096944, 141,
    0, 364098304, 364097704, 364097564, 0, 0, 364104844, 364097724, 364097684,
    0, 0, 364097744, 364103544, 364097704, 0, 0, 364102764, 364097764,
    364097724, 0, 0, 0, 0, 364097744, 142, 0, 364097804, 364103764, 364097324,
    0, 0, 364105644, 364097824, 364097784, 0, 0, 364098124, 364097844,
    364097804, 0, 0, 364103864, 364097864, 364097824, 0, 0, 364097884,
    364102304, 364097844, 0, 0, 0, 0, 364097864, 143, 0, 364097924, 364103324,
    364096244, 0, 0, 364103564, 364097944, 364097904, 0, 0, 364098384,
    364097964, 364097924, 0, 0, 364100024, 364097984, 364097944, 0, 0,
    364098004, 364105244, 364097964, 0, 0, 364098024, 364105564, 364097984, 0,
    0, 0, 0, 364098004, 144, 0, 364098064, 364100784, 364096744, 0, 0,
    364098084, 364100884, 364098044, 0, 0, 364105284, 364098104, 364098064, 0,
    0, 0, 0, 364098084, 145, 0, 364098144, 364098504, 364097824, 0, 0,
    364098164, 364098484, 364098124, 0, 0, 364098184, 364102744, 364098144, 0,
    0, 0, 0, 364098164, 146, 0, 364098224, 364104464, 364096384, 0, 0, 0, 0,
    364098204, 147, 0, 364098264, 364103624, 364097464, 0, 0, 364098284,
    364106004, 364098244, 0, 0, 0, 0, 364098264, 148, 0, 364098324, 364101664,
    364097684, 0, 0, 364098344, 364101044, 364098304, 0, 0, 364098644,
    364098364, 364098324, 0, 0, 0, 0, 364098344, 149, 0, 364099344, 364098404,
    364097944, 0, 0, 364103504, 364098424, 364098384, 0, 0, 364098464,
    364098444, 364098404, 0, 0, 0, 0, 364098424, 150, 0, 0, 0, 364098424, 151,
    0, 0, 0, 364098144, 152, 0, 364098524, 364104164, 364098124, 0, 0,
    364102004, 364098544, 364098504, 0, 0, 0, 0, 364098524, 153, 0, 364098584,
    364105224, 364097004, 0, 0, 364098604, 364098764, 364098564, 0, 0,
    364103204, 364098624, 364098584, 0, 0, 0, 0, 364098604, 154, 0, 364098664,
    364102904, 364098344, 0, 0, 0, 0, 364098644, 155, 0, 364098704, 364100684,
    364097104, 0, 0, 364100144, 364098724, 364098684, 0, 0, 364098744,
    364104324, 364098704, 0, 0, 0, 0, 364098724, 156, 0, 364105704, 364098784,
    364098584, 0, 0, 364098804, 364101284, 364098764, 0, 0, 0, 0, 364098784,
    157, 0, 364098844, 364103284, 364096284, 0, 0, 364098864, 364103304,
    364098824, 0, 0, 364098884, 364103424, 364098844, 0, 0, 364098904,
    364103904, 364098864, 0, 0, 364101644, 364098924, 364098884, 0, 0,
    364101364, 364098944, 364098904, 0, 0, 0, 0, 364098924, 158, 0, 364098984,
    364099564, 364097544, 0, 0, 364099004, 364100464, 364098964, 0, 0,
    364099924, 364099024, 364098984, 0, 0, 364105164, 364099044, 364099004, 0,
    0, 364104564, 364099064, 364099024, 0, 0, 364102684, 364099084, 364099044,
    0, 0, 0, 0, 364099064, 159, 0, 364104124, 364099124, 364097604, 0, 0,
    364099144, 364099404, 364099104, 0, 0, 0, 0, 364099124, 160, 0, 364103264,
    364099184, 364096444, 0, 0, 364101244, 364099204, 364099164, 0, 0,
    364103804, 364099224, 364099184, 0, 0, 364099244, 364101164, 364099204, 0,
    0, 364099264, 364104344, 364099224, 0, 0, 364099284, 364104884, 364099244,
    0, 0, 364103164, 364099304, 364099264, 0, 0, 364100044, 364099324,
    364099284, 0, 0, 0, 0, 364099304, 161, 0, 364099364, 364103044, 364098384,
    0, 0, 364099384, 364099764, 364099344, 0, 0, 0, 0, 364099364, 162, 0,
    364099424, 364100624, 364099124, 0, 0, 0, 0, 364099404, 163, 0, 364104944,
    364099464, 364097204, 0, 0, 364099484, 364100264, 364099444, 0, 0,
    364099504, 364103464, 364099464, 0, 0, 364102124, 364099524, 364099484, 0,
    0, 364105864, 364099544, 364099504, 0, 0, 0, 0, 364099524, 164, 0,
    364099584, 364100064, 364098964, 0, 0, 364101444, 364099604, 364099564, 0,
    0, 364100644, 364099624, 364099584, 0, 0, 364104444, 364099644, 364099604,
    0, 0, 364099664, 364100944, 364099624, 0, 0, 0, 0, 364099644, 165, 0,
    364099704, 364103584, 364096564, 0, 0, 364099724, 364105004, 364099684, 0,
    0, 364099744, 364104484, 364099704, 0, 0, 0, 0, 364099724, 166, 0,
    364106304, 364099784, 364099364, 0, 0, 0, 0, 364099764, 167, 0, 364099824,
    364103664, 364096344, 0, 0, 364104004, 364099844, 364099804, 0, 0,
    364104304, 364099864, 364099824, 0, 0, 0, 0, 364099844, 168, 0, 364102104,
    364099904, 364097164, 0, 0, 0, 0, 364099884, 169, 0, 364099944, 364104104,
    364099004, 0, 0, 364106024, 364099964, 364099924, 0, 0, 0, 0, 364099944,
    170, 0, 364101864, 364100004, 364096824, 0, 0, 0, 0, 364099984, 171, 0, 0,
    0, 364097964, 172, 0, 0, 0, 364099304, 173, 0, 364100204, 364100084,
    364099564, 0, 0, 364104964, 364100104, 364100064, 0, 0, 364100764,
    364100124, 364100084, 0, 0, 0, 0, 364100104, 174, 0, 364102944, 364100164,
    364098704, 0, 0, 364101924, 364100184, 364100144, 0, 0, 0, 0, 364100164,
    175, 0, 364100224, 364104764, 364100064, 0, 0, 364104624, 364100244,
    364100204, 0, 0, 0, 0, 364100224, 176, 0, 364100284, 364103984, 364099464,
    0, 0, 364105444, 364100304, 364100264, 0, 0, 364104824, 364100324,
    364100284, 0, 0, 364101984, 364100344, 364100304, 0, 0, 0, 0, 364100324,
    177, 0, 364103444, 364100384, 364097224, 0, 0, 364100404, 364102164,
    364100364, 0, 0, 364101884, 364100424, 364100384, 0, 0, 364101844,
    364100444, 364100404, 0, 0, 0, 0, 364100424, 178, 0, 364100484, 364100564,
    364098984, 0, 0, 364100504, 364105144, 364100464, 0, 0, 364102804,
    364100524, 364100484, 0, 0, 364102824, 364100544, 364100504, 0, 0, 0, 0,
    364100524, 179, 0, 364103784, 364100584, 364100464, 0, 0, 364100964,
    364100604, 364100564, 0, 0, 0, 0, 364100584, 180, 0, 0, 0, 364099404, 181,
    0, 364102504, 364100664, 364099604, 0, 0, 0, 0, 364100644, 182, 0,
    364100704, 364101724, 364098684, 0, 0, 364100724, 364105044, 364100684, 0,
    0, 364103224, 364100744, 364100704, 0, 0, 0, 0, 364100724, 183, 0, 0, 0,
    364100104, 184, 0, 364102044, 364100804, 364098044, 0, 0, 364100824,
    364101144, 364100784, 0, 0, 364102844, 364100844, 364100804, 0, 0,
    364100864, 364102024, 364100824, 0, 0, 0, 0, 364100844, 185, 0, 364100904,
    364105204, 364098064, 0, 0, 364100924, 364101524, 364100884, 0, 0, 0, 0,
    364100904, 186, 0, 0, 0, 364099644, 187, 0, 0, 0, 364100584, 188, 0,
    364102584, 364101004, 364096924, 0, 0, 364101804, 364101024, 364100984, 0,
    0, 0, 0, 364101004, 189, 0, 364101064, 364102924, 364098324, 0, 0, 0, 0,
    364101044, 190, 0, 364101104, 364102444, 364096864, 0, 0, 364101124,
    364103184, 364101084, 0, 0, 0, 0, 364101104, 191, 0, 0, 0, 364100804, 192,
    0, 364101184, 364104704, 364099224, 0, 0, 0, 0, 364101164, 193, 0,
    364105184, 364101224, 364096484, 0, 0, 0, 0, 364101204, 194, 0, 364101264,
    364104864, 364099184, 0, 0, 0, 0, 364101244, 195, 0, 0, 0, 364098784, 196,
    0, 364101324, 364101404, 364096784, 0, 0, 364105544, 364101344, 364101304,
    0, 0, 0, 0, 364101324, 197, 0, 364101544, 364101384, 364098924, 0, 0, 0, 0,
    364101364, 198, 0, 364101424, 364102464, 364101304, 0, 0, 0, 0, 364101404,
    199, 0, 364101464, 364105904, 364099584, 0, 0, 364101484, 364105384,
    364101444, 0, 0, 364102624, 364101504, 364101464, 0, 0, 0, 0, 364101484,
    200, 0, 0, 0, 364100904, 201, 0, 0, 0, 364101364, 202, 0, 364103644,
    364101584, 364097244, 0, 0, 364101604, 364104204, 364101564, 0, 0,
    364101624, 364106124, 364101584, 0, 0, 0, 0, 364101604, 203, 0, 0, 0,
    364098904, 204, 0, 364103824, 364101684, 364098304, 0, 0, 364101704,
    364104364, 364101664, 0, 0, 0, 0, 364101684, 205, 0, 364101744, 364102644,
    364100684, 0, 0, 0, 0, 364101724, 206, 0, 364101784, 364102544, 364096804,
    0, 0, 0, 0, 364101764, 207, 0, 364102724, 364101824, 364101004, 0, 0, 0, 0,
    364101804, 208, 0, 0, 0, 364100424, 209, 0, 0, 0, 364099984, 210, 0,
    364105764, 364101904, 364100404, 0, 0, 0, 0, 364101884, 211, 0, 0, 0,
    364100164, 212, 0, 364106264, 364101964, 364097504, 0, 0, 0, 0, 364101944,
    213, 0, 0, 0, 364100324, 214, 0, 0, 0, 364098524, 215, 0, 0, 0, 364100844,
    216, 0, 364102064, 364104804, 364100784, 0, 0, 364102084, 364102404,
    364102044, 0, 0, 0, 0, 364102064, 217, 0, 0, 0, 364099884, 218, 0,
    364105424, 364102144, 364099504, 0, 0, 0, 0, 364102124, 219, 0, 364102184,
    364102364, 364100384, 0, 0, 364102204, 364104284, 364102164, 0, 0,
    364102224, 364102664, 364102184, 0, 0, 0, 0, 364102204, 220, 0, 364105584,
    364102264, 364097264, 0, 0, 364102284, 364104984, 364102244, 0, 0, 0, 0,
    364102264, 221, 0, 364102324, 364102704, 364097864, 0, 0, 364102344,
    364102524, 364102304, 0, 0, 0, 0, 364102324, 222, 0, 364102384, 364102884,
    364102164, 0, 0, 0, 0, 364102364, 223, 0, 364102564, 364102424, 364102064,
    0, 0, 0, 0, 364102404, 224, 0, 0, 0, 364101084, 225, 0, 364102484,
    364104684, 364101404, 0, 0, 0, 0, 364102464, 226, 0, 0, 0, 364100644, 227,
    0, 0, 0, 364102324, 228, 0, 0, 0, 364101764, 229, 0, 0, 0, 364102404, 230,
    0, 364105724, 364102604, 364100984, 0, 0, 0, 0, 364102584, 231, 0, 0, 0,
    364101484, 232, 0, 0, 0, 364101724, 233, 0, 0, 0, 364102204, 234, 0, 0, 0,
    364099064, 235, 0, 0, 0, 364102304, 236, 0, 0, 0, 364101804, 237, 0, 0, 0,
    364098164, 238, 0, 364102784, 364102864, 364097744, 0, 0, 0, 0, 364102764,
    239, 0, 0, 0, 364100504, 240, 0, 0, 0, 364100524, 241, 0, 0, 0, 364100824,
    242, 0, 0, 0, 364102764, 243, 0, 0, 0, 364102364, 244, 0, 0, 0, 364098644,
    245, 0, 0, 0, 364101044, 246, 0, 0, 0, 364100144, 247, 0, 0, 0, 364096404,
    248, 0, 364103004, 364104504, 364097484, 0, 0, 364106164, 364103024,
    364102984, 0, 0, 0, 0, 364103004, 249, 0, 364103064, 364104184, 364099344,
    0, 0, 0, 0, 364103044, 250, 0, 364103104, 364104224, 364096364, 0, 0,
    364103704, 364103124, 364103084, 0, 0, 364103144, 364104644, 364103104, 0,
    0, 0, 0, 364103124, 251, 0, 0, 0, 364099284, 252, 0, 0, 0, 364101104, 253,
    0, 0, 0, 364098604, 254, 0, 0, 0, 364100724, 255, 0, 0, 0, 364096164, 0, 0,
    0, 0, 364099164, 1, 0, 0, 0, 364098824, 2, 0, 0, 0, 364098844, 3, 0,
    364103344, 364103484, 364097904, 0, 0, 0, 0, 364103324, 4, 0, 364103524,
    364103384, 364097384, 0, 0, 0, 0, 364103364, 5, 0, 0, 0, 364096544, 6, 0,
    0, 0, 364098864, 7, 0, 0, 0, 364100364, 8, 0, 0, 0, 364099484, 9, 0, 0, 0,
    364103324, 10, 0, 0, 0, 364098404, 11, 0, 0, 0, 364103364, 12, 0, 0, 0,
    364097724, 13, 0, 0, 0, 364097924, 14, 0, 364103604, 364104904, 364099684,
    0, 0, 0, 0, 364103584, 15, 0, 0, 0, 364098244, 16, 0, 0, 0, 364101564, 17,
    0, 364105064, 364103684, 364099804, 0, 0, 0, 0, 364103664, 18, 0, 0, 0,
    364103104, 19, 0, 0, 0, 364097044, 20, 0, 0, 0, 364096664, 21, 0, 0, 0,
    364097784, 22, 0, 0, 0, 364100564, 23, 0, 0, 0, 364099204, 24, 0, 0, 0,
    364101664, 25, 0, 0, 0, 364097144, 26, 0, 364103884, 364104524, 364097844,
    0, 0, 0, 0, 364103864, 27, 0, 364103924, 364105104, 364098884, 0, 0,
    364104144, 364103944, 364103904, 0, 0, 0, 0, 364103924, 28, 0, 0, 0,
    364097284, 29, 0, 0, 0, 364100264, 30, 0, 364106364, 364104024, 364099824,
    0, 0, 0, 0, 364104004, 31, 0, 0, 0, 364097064, 32, 0, 364104084, 364106204,
    364097404, 0, 0, 0, 0, 364104064, 33, 0, 0, 0, 364099924, 34, 0, 0, 0,
    364099104, 35, 0, 0, 0, 364103924, 36, 0, 0, 0, 364098504, 37, 0, 0, 0,
    364103044, 38, 0, 0, 0, 364101584, 39, 0, 364105524, 364104244, 364103084,
    0, 0, 0, 0, 364104224, 40, 0, 0, 0, 364097344, 41, 0, 0, 0, 364102184, 42,
    0, 0, 0, 364099844, 43, 0, 0, 0, 364098724, 44, 0, 0, 0, 364099244, 45, 0,
    0, 0, 364101684, 46, 0, 364104404, 364105784, 364097024, 0, 0, 364104424,
    364105624, 364104384, 0, 0, 0, 0, 364104404, 47, 0, 0, 0, 364099624, 48, 0,
    0, 0, 364098204, 49, 0, 0, 0, 364099724, 50, 0, 0, 0, 364102984, 51, 0,
    364105504, 364104544, 364103864, 0, 0, 0, 0, 364104524, 52, 0, 0, 0,
    364099044, 53, 0, 364105464, 364104604, 364097424, 0, 0, 0, 0, 364104584,
    54, 0, 0, 0, 364100224, 55, 0, 0, 0, 364103124, 56, 0, 0, 0, 364097584, 57,
    0, 0, 0, 364102464, 58, 0, 364106084, 364104724, 364101164, 0, 0,
    364105484, 364104744, 364104704, 0, 0, 0, 0, 364104724, 59, 0, 364104784,
    364105944, 364100204, 0, 0, 0, 0, 364104764, 60, 0, 0, 0, 364102044, 61, 0,
    0, 0, 364100304, 62, 0, 0, 0, 364097704, 63, 0, 0, 0, 364101244, 64, 0, 0,
    0, 364099264, 65, 0, 364105984, 364104924, 364103584, 0, 0, 0, 0,
    364104904, 66, 0, 0, 0, 364099444, 67, 0, 0, 0, 364100084, 68, 0, 0, 0,
    364102264, 69, 0, 364105844, 364105024, 364099704, 0, 0, 0, 0, 364105004,
    70, 0, 0, 0, 364100704, 71, 0, 364105404, 364105084, 364103664, 0, 0, 0, 0,
    364105064, 72, 0, 364105964, 364105124, 364103904, 0, 0, 0, 0, 364105104,
    73, 0, 0, 0, 364100484, 74, 0, 0, 0, 364099024, 75, 0, 0, 0, 364101204, 76,
    0, 0, 0, 364100884, 77, 0, 0, 0, 364098564, 78, 0, 364105264, 364106244,
    364097984, 0, 0, 0, 0, 364105244, 79, 0, 0, 0, 364098084, 80, 0, 364106144,
    364105324, 364097624, 0, 0, 0, 0, 364105304, 81, 0, 364105884, 364105364,
    364096604, 0, 0, 0, 0, 364105344, 82, 0, 0, 0, 364101464, 83, 0, 0, 0,
    364105064, 84, 0, 0, 0, 364102124, 85, 0, 0, 0, 364100284, 86, 0, 0, 0,
    364104584, 87, 0, 0, 0, 364104724, 88, 0, 0, 0, 364104524, 89, 0, 0, 0,
    364104224, 90, 0, 0, 0, 364101324, 91, 0, 0, 0, 364098004, 92, 0,
    364105684, 364105604, 364102244, 0, 0, 0, 0, 364105584, 93, 0, 0, 0,
    364104404, 94, 0, 0, 0, 364097804, 95, 0, 0, 0, 364096624, 96, 0, 0, 0,
    364105584, 97, 0, 0, 0, 364098764, 98, 0, 0, 0, 364102584, 99, 0, 0, 0,
    364096724, 100, 0, 0, 0, 364101884, 101, 0, 364106044, 364105804,
    364104384, 0, 0, 0, 0, 364105784, 102, 0, 0, 0, 364097124, 103, 0, 0, 0,
    364105004, 104, 0, 0, 0, 364099524, 105, 0, 0, 0, 364105344, 106, 0,
    364105924, 364106284, 364101444, 0, 0, 0, 0, 364105904, 107, 0, 0, 0,
    364104764, 108, 0, 0, 0, 364105104, 109, 0, 0, 0, 364104904, 110, 0, 0, 0,
    364098264, 111, 0, 0, 0, 364099944, 112, 0, 0, 0, 364105784, 113, 0, 0, 0,
    364096964, 114, 0, 364106104, 364106184, 364104704, 0, 0, 0, 0, 364106084,
    115, 0, 0, 0, 364101604, 116, 0, 0, 0, 364105304, 117, 0, 0, 0, 364103004,
    118, 0, 0, 0, 364106084, 119, 0, 364106224, 364106344, 364104064, 0, 0, 0,
    0, 364106204, 120, 0, 0, 0, 364105244, 121, 0, 0, 0, 364101944, 122, 0, 0,
    0, 364105904, 123, 0, 0, 0, 364099764, 124, 0, 0, 0, 364096884, 125, 0, 0,
    0, 364106204, 126, 0, 0, 0, 364104004, 127, 0
]

class Decompress:
    def __init__(self, read_decompress_dat_file = False):
        data = []
        if read_decompress_dat_file:
            with open('decompress.dat', 'rb') as dat_file:
                # Loop and read 4-bytes -> int at a time
                read_data = dat_file.read(SIZEOF_INT)
                while read_data:
                    value = int.from_bytes(read_data, 'little')
                    data.append(value)
                    # Read next int, maybe
                    read_data = dat_file.read(4)
        else:
            data = DECOMPRESS_DAT_DATA

        base_slot = data[0] - SIZEOF_INT;
        jumps = [int] * len(data)

        for idx, entry in enumerate(data):
            if entry > 0xFF:
                # Everything over 0xff are pointers.
                # These pointers will be traversed until we hit data.
                jumps[idx] = (data[idx] - base_slot) / SIZEOF_INT
            else:
                # Everything equal or less to 0xff is 8bit data.
                # The pointers at offsets -3 and -2 in table must be zero for each non-zero data entry
                # This approach assumes pointers are at least 8bit on the system.
                jumps[idx] = data[idx]

        self.jump_table = [int] * len(jumps)
        for idx, jump in enumerate(jumps):
            self.jump_table[idx] = jump

    @staticmethod
    def zlib_compressed_size(sz):
        return (sz + 7) / 8

    def decompress(self, data, size):
        # int w = 0;
        # uint pos = myzlib.jump[0];
        # byte[] outbuf = new byte[1750];
        # for (int i = 0; i < packetsize && w < 1750; i++)
        # {
        #     int s = ((buffer[i / 8] >> (i & 7)) & 1);
        #     pos = myzlib.jump[pos + s];
        #     //Console.WriteLine('{0:G} : {1:G}  0,1 {2:G},{3:G}', s, pos, myzlib.jump[pos], myzlib.jump[pos+1]);
        #     if (myzlib.jump[pos] != 0 || myzlib.jump[pos + 1] != 0)
        #     {
        #         //Console.WriteLine('Pos:{0:G} not both zero', pos);
        #         continue;
        #     }
        #     //Console.WriteLine('DATA:{0:G}', myzlib.jump[pos + 3]);
        #     outbuf[w++] = BitConverter.GetBytes(myzlib.jump[pos + 3])[0];
        #     //Console.WriteLine(BitConverter.GetBytes(myzlib.jump[pos + 3])[0]);
        #     pos = myzlib.jump[0];
        # }
        # byte[] final = new byte[w];

        w = 0
        #pos = self.jump_table[0]
        out_buf = bytearray(1750)

        # Loop
        i = 0
        while i < size and w < 1750:


            # Loop itr
            i = i + 1

        final_buf = bytearray(w)
        util.memcpy(out_buf, 0, final_buf, 0, w)
        return final_buf
