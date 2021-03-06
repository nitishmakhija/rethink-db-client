// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

@class Backtrace;
@class Backtrace_Builder;
@class Datum;
@class Datum_AssocPair;
@class Datum_AssocPair_Builder;
@class Datum_Builder;
@class Frame;
@class Frame_Builder;
@class Query;
@class Query_AssocPair;
@class Query_AssocPair_Builder;
@class Query_Builder;
@class Response;
@class Response_Builder;
@class Term;
@class Term_AssocPair;
@class Term_AssocPair_Builder;
@class Term_Builder;
@class VersionDummy;
@class VersionDummy_Builder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif

typedef enum {
  VersionDummy_VersionV01 = 1063369270,
  VersionDummy_VersionV02 = 1915781601,
  VersionDummy_VersionV03 = 1601562686,
  VersionDummy_VersionV04 = 1074539808,
} VersionDummy_Version;

BOOL VersionDummy_VersionIsValidValue(VersionDummy_Version value);

typedef enum {
  VersionDummy_ProtocolProtobuf = 656407617,
  VersionDummy_ProtocolJson = 2120839367,
} VersionDummy_Protocol;

BOOL VersionDummy_ProtocolIsValidValue(VersionDummy_Protocol value);

typedef enum {
  Query_QueryTypeStart = 1,
  Query_QueryTypeContinue = 2,
  Query_QueryTypeStop = 3,
  Query_QueryTypeNoreplyWait = 4,
} Query_QueryType;

BOOL Query_QueryTypeIsValidValue(Query_QueryType value);

typedef enum {
  Frame_FrameTypePos = 1,
  Frame_FrameTypeOpt = 2,
} Frame_FrameType;

BOOL Frame_FrameTypeIsValidValue(Frame_FrameType value);

typedef enum {
  Response_ResponseTypeSuccessAtom = 1,
  Response_ResponseTypeSuccessSequence = 2,
  Response_ResponseTypeSuccessPartial = 3,
  Response_ResponseTypeWaitComplete = 4,
  Response_ResponseTypeClientError = 16,
  Response_ResponseTypeCompileError = 17,
  Response_ResponseTypeRuntimeError = 18,
} Response_ResponseType;

BOOL Response_ResponseTypeIsValidValue(Response_ResponseType value);

typedef enum {
  Response_ResponseNoteSequenceFeed = 1,
  Response_ResponseNoteAtomFeed = 2,
  Response_ResponseNoteOrderByLimitFeed = 3,
  Response_ResponseNoteUnionedFeed = 4,
  Response_ResponseNoteIncludesStates = 5,
} Response_ResponseNote;

BOOL Response_ResponseNoteIsValidValue(Response_ResponseNote value);

typedef enum {
  Datum_DatumTypeRNull = 1,
  Datum_DatumTypeRBool = 2,
  Datum_DatumTypeRNum = 3,
  Datum_DatumTypeRStr = 4,
  Datum_DatumTypeRArray = 5,
  Datum_DatumTypeRObject = 6,
  Datum_DatumTypeRJson = 7,
} Datum_DatumType;

BOOL Datum_DatumTypeIsValidValue(Datum_DatumType value);

typedef enum {
  Term_TermTypeDatum = 1,
  Term_TermTypeMakeArray = 2,
  Term_TermTypeMakeObj = 3,
  Term_TermTypeVar = 10,
  Term_TermTypeJavascript = 11,
  Term_TermTypeUuid = 169,
  Term_TermTypeHttp = 153,
  Term_TermTypeError = 12,
  Term_TermTypeImplicitVar = 13,
  Term_TermTypeDb = 14,
  Term_TermTypeTable = 15,
  Term_TermTypeGet = 16,
  Term_TermTypeGetAll = 78,
  Term_TermTypeEq = 17,
  Term_TermTypeNe = 18,
  Term_TermTypeLt = 19,
  Term_TermTypeLe = 20,
  Term_TermTypeGt = 21,
  Term_TermTypeGe = 22,
  Term_TermTypeNot = 23,
  Term_TermTypeAdd = 24,
  Term_TermTypeSub = 25,
  Term_TermTypeMul = 26,
  Term_TermTypeDiv = 27,
  Term_TermTypeMod = 28,
  Term_TermTypeFloor = 183,
  Term_TermTypeCeil = 184,
  Term_TermTypeRound = 185,
  Term_TermTypeAppend = 29,
  Term_TermTypePrepend = 80,
  Term_TermTypeDifference = 95,
  Term_TermTypeSetInsert = 88,
  Term_TermTypeSetIntersection = 89,
  Term_TermTypeSetUnion = 90,
  Term_TermTypeSetDifference = 91,
  Term_TermTypeSlice = 30,
  Term_TermTypeSkip = 70,
  Term_TermTypeLimit = 71,
  Term_TermTypeOffsetsOf = 87,
  Term_TermTypeContains = 93,
  Term_TermTypeGetField = 31,
  Term_TermTypeKeys = 94,
  Term_TermTypeObject = 143,
  Term_TermTypeHasFields = 32,
  Term_TermTypeWithFields = 96,
  Term_TermTypePluck = 33,
  Term_TermTypeWithout = 34,
  Term_TermTypeMerge = 35,
  Term_TermTypeBetweenDeprecated = 36,
  Term_TermTypeBetween = 182,
  Term_TermTypeReduce = 37,
  Term_TermTypeMap = 38,
  Term_TermTypeFilter = 39,
  Term_TermTypeConcatMap = 40,
  Term_TermTypeOrderBy = 41,
  Term_TermTypeDistinct = 42,
  Term_TermTypeCount = 43,
  Term_TermTypeIsEmpty = 86,
  Term_TermTypeUnion = 44,
  Term_TermTypeNth = 45,
  Term_TermTypeBracket = 170,
  Term_TermTypeInnerJoin = 48,
  Term_TermTypeOuterJoin = 49,
  Term_TermTypeEqJoin = 50,
  Term_TermTypeZip = 72,
  Term_TermTypeRange = 173,
  Term_TermTypeInsertAt = 82,
  Term_TermTypeDeleteAt = 83,
  Term_TermTypeChangeAt = 84,
  Term_TermTypeSpliceAt = 85,
  Term_TermTypeCoerceTo = 51,
  Term_TermTypeTypeOf = 52,
  Term_TermTypeUpdate = 53,
  Term_TermTypeDelete = 54,
  Term_TermTypeReplace = 55,
  Term_TermTypeInsert = 56,
  Term_TermTypeDbCreate = 57,
  Term_TermTypeDbDrop = 58,
  Term_TermTypeDbList = 59,
  Term_TermTypeTableCreate = 60,
  Term_TermTypeTableDrop = 61,
  Term_TermTypeTableList = 62,
  Term_TermTypeConfig = 174,
  Term_TermTypeStatus = 175,
  Term_TermTypeWait = 177,
  Term_TermTypeReconfigure = 176,
  Term_TermTypeRebalance = 179,
  Term_TermTypeSync = 138,
  Term_TermTypeIndexCreate = 75,
  Term_TermTypeIndexDrop = 76,
  Term_TermTypeIndexList = 77,
  Term_TermTypeIndexStatus = 139,
  Term_TermTypeIndexWait = 140,
  Term_TermTypeIndexRename = 156,
  Term_TermTypeFuncall = 64,
  Term_TermTypeBranch = 65,
  Term_TermTypeOr = 66,
  Term_TermTypeAnd = 67,
  Term_TermTypeForEach = 68,
  Term_TermTypeFunc = 69,
  Term_TermTypeAsc = 73,
  Term_TermTypeDesc = 74,
  Term_TermTypeInfo = 79,
  Term_TermTypeMatch = 97,
  Term_TermTypeUpcase = 141,
  Term_TermTypeDowncase = 142,
  Term_TermTypeSample = 81,
  Term_TermTypeDefault = 92,
  Term_TermTypeJson = 98,
  Term_TermTypeToJsonString = 172,
  Term_TermTypeIso8601 = 99,
  Term_TermTypeToIso8601 = 100,
  Term_TermTypeEpochTime = 101,
  Term_TermTypeToEpochTime = 102,
  Term_TermTypeNow = 103,
  Term_TermTypeInTimezone = 104,
  Term_TermTypeDuring = 105,
  Term_TermTypeDate = 106,
  Term_TermTypeTimeOfDay = 126,
  Term_TermTypeTimezone = 127,
  Term_TermTypeYear = 128,
  Term_TermTypeMonth = 129,
  Term_TermTypeDay = 130,
  Term_TermTypeDayOfWeek = 131,
  Term_TermTypeDayOfYear = 132,
  Term_TermTypeHours = 133,
  Term_TermTypeMinutes = 134,
  Term_TermTypeSeconds = 135,
  Term_TermTypeTime = 136,
  Term_TermTypeMonday = 107,
  Term_TermTypeTuesday = 108,
  Term_TermTypeWednesday = 109,
  Term_TermTypeThursday = 110,
  Term_TermTypeFriday = 111,
  Term_TermTypeSaturday = 112,
  Term_TermTypeSunday = 113,
  Term_TermTypeJanuary = 114,
  Term_TermTypeFebruary = 115,
  Term_TermTypeMarch = 116,
  Term_TermTypeApril = 117,
  Term_TermTypeMay = 118,
  Term_TermTypeJune = 119,
  Term_TermTypeJuly = 120,
  Term_TermTypeAugust = 121,
  Term_TermTypeSeptember = 122,
  Term_TermTypeOctober = 123,
  Term_TermTypeNovember = 124,
  Term_TermTypeDecember = 125,
  Term_TermTypeLiteral = 137,
  Term_TermTypeGroup = 144,
  Term_TermTypeSum = 145,
  Term_TermTypeAvg = 146,
  Term_TermTypeMin = 147,
  Term_TermTypeMax = 148,
  Term_TermTypeSplit = 149,
  Term_TermTypeUngroup = 150,
  Term_TermTypeRandom = 151,
  Term_TermTypeChanges = 152,
  Term_TermTypeArgs = 154,
  Term_TermTypeBinary = 155,
  Term_TermTypeGeojson = 157,
  Term_TermTypeToGeojson = 158,
  Term_TermTypePoint = 159,
  Term_TermTypeLine = 160,
  Term_TermTypePolygon = 161,
  Term_TermTypeDistance = 162,
  Term_TermTypeIntersects = 163,
  Term_TermTypeIncludes = 164,
  Term_TermTypeCircle = 165,
  Term_TermTypeGetIntersecting = 166,
  Term_TermTypeFill = 167,
  Term_TermTypeGetNearest = 168,
  Term_TermTypePolygonSub = 171,
  Term_TermTypeMinval = 180,
  Term_TermTypeMaxval = 181,
  Term_TermTypeMaterialize = 5000,
  Term_TermTypeSort = 5001,
} Term_TermType;

BOOL Term_TermTypeIsValidValue(Term_TermType value);


@interface Ql2Root : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface VersionDummy : PBGeneratedMessage {
@private
}

+ (VersionDummy*) defaultInstance;
- (VersionDummy*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (VersionDummy_Builder*) builder;
+ (VersionDummy_Builder*) builder;
+ (VersionDummy_Builder*) builderWithPrototype:(VersionDummy*) prototype;
- (VersionDummy_Builder*) toBuilder;

+ (VersionDummy*) parseFromData:(NSData*) data;
+ (VersionDummy*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (VersionDummy*) parseFromInputStream:(NSInputStream*) input;
+ (VersionDummy*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (VersionDummy*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (VersionDummy*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface VersionDummy_Builder : PBGeneratedMessage_Builder {
@private
  VersionDummy* result;
}

- (VersionDummy*) defaultInstance;

- (VersionDummy_Builder*) clear;
- (VersionDummy_Builder*) clone;

- (VersionDummy*) build;
- (VersionDummy*) buildPartial;

- (VersionDummy_Builder*) mergeFrom:(VersionDummy*) other;
- (VersionDummy_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (VersionDummy_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Query : PBGeneratedMessage {
@private
  BOOL hasObsoleteNoreply_:1;
  BOOL hasAcceptsRJson_:1;
  BOOL hasToken_:1;
  BOOL hasQuery_:1;
  BOOL hasType_:1;
  BOOL obsoleteNoreply_:1;
  BOOL acceptsRJson_:1;
  int64_t token;
  Term* query;
  Query_QueryType type;
  NSMutableArray * globalOptargsArray;
}
- (BOOL) hasType;
- (BOOL) hasQuery;
- (BOOL) hasToken;
- (BOOL) hasObsoleteNoreply;
- (BOOL) hasAcceptsRJson;
@property (readonly) Query_QueryType type;
@property (readonly, strong) Term* query;
@property (readonly) int64_t token;
- (BOOL) obsoleteNoreply;
- (BOOL) acceptsRJson;
@property (readonly, strong) NSArray * globalOptargs;
- (Query_AssocPair*)globalOptargsAtIndex:(NSUInteger)index;

+ (Query*) defaultInstance;
- (Query*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Query_Builder*) builder;
+ (Query_Builder*) builder;
+ (Query_Builder*) builderWithPrototype:(Query*) prototype;
- (Query_Builder*) toBuilder;

+ (Query*) parseFromData:(NSData*) data;
+ (Query*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Query*) parseFromInputStream:(NSInputStream*) input;
+ (Query*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Query*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Query*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Query_AssocPair : PBGeneratedMessage {
@private
  BOOL hasKey_:1;
  BOOL hasVal_:1;
  NSString* key;
  Term* val;
}
- (BOOL) hasKey;
- (BOOL) hasVal;
@property (readonly, strong) NSString* key;
@property (readonly, strong) Term* val;

+ (Query_AssocPair*) defaultInstance;
- (Query_AssocPair*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Query_AssocPair_Builder*) builder;
+ (Query_AssocPair_Builder*) builder;
+ (Query_AssocPair_Builder*) builderWithPrototype:(Query_AssocPair*) prototype;
- (Query_AssocPair_Builder*) toBuilder;

+ (Query_AssocPair*) parseFromData:(NSData*) data;
+ (Query_AssocPair*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Query_AssocPair*) parseFromInputStream:(NSInputStream*) input;
+ (Query_AssocPair*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Query_AssocPair*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Query_AssocPair*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Query_AssocPair_Builder : PBGeneratedMessage_Builder {
@private
  Query_AssocPair* result;
}

- (Query_AssocPair*) defaultInstance;

- (Query_AssocPair_Builder*) clear;
- (Query_AssocPair_Builder*) clone;

- (Query_AssocPair*) build;
- (Query_AssocPair*) buildPartial;

- (Query_AssocPair_Builder*) mergeFrom:(Query_AssocPair*) other;
- (Query_AssocPair_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Query_AssocPair_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasKey;
- (NSString*) key;
- (Query_AssocPair_Builder*) setKey:(NSString*) value;
- (Query_AssocPair_Builder*) clearKey;

- (BOOL) hasVal;
- (Term*) val;
- (Query_AssocPair_Builder*) setVal:(Term*) value;
- (Query_AssocPair_Builder*) setValBuilder:(Term_Builder*) builderForValue;
- (Query_AssocPair_Builder*) mergeVal:(Term*) value;
- (Query_AssocPair_Builder*) clearVal;
@end

@interface Query_Builder : PBGeneratedMessage_Builder {
@private
  Query* result;
}

- (Query*) defaultInstance;

- (Query_Builder*) clear;
- (Query_Builder*) clone;

- (Query*) build;
- (Query*) buildPartial;

- (Query_Builder*) mergeFrom:(Query*) other;
- (Query_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Query_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (Query_QueryType) type;
- (Query_Builder*) setType:(Query_QueryType) value;
- (Query_Builder*) clearType;

- (BOOL) hasQuery;
- (Term*) query;
- (Query_Builder*) setQuery:(Term*) value;
- (Query_Builder*) setQueryBuilder:(Term_Builder*) builderForValue;
- (Query_Builder*) mergeQuery:(Term*) value;
- (Query_Builder*) clearQuery;

- (BOOL) hasToken;
- (int64_t) token;
- (Query_Builder*) setToken:(int64_t) value;
- (Query_Builder*) clearToken;

- (BOOL) hasObsoleteNoreply;
- (BOOL) obsoleteNoreply;
- (Query_Builder*) setObsoleteNoreply:(BOOL) value;
- (Query_Builder*) clearObsoleteNoreply;

- (BOOL) hasAcceptsRJson;
- (BOOL) acceptsRJson;
- (Query_Builder*) setAcceptsRJson:(BOOL) value;
- (Query_Builder*) clearAcceptsRJson;

- (NSMutableArray *)globalOptargs;
- (Query_AssocPair*)globalOptargsAtIndex:(NSUInteger)index;
- (Query_Builder *)addGlobalOptargs:(Query_AssocPair*)value;
- (Query_Builder *)setGlobalOptargsArray:(NSArray *)array;
- (Query_Builder *)clearGlobalOptargs;
@end

@interface Frame : PBGeneratedMessage {
@private
  BOOL hasPos_:1;
  BOOL hasOpt_:1;
  BOOL hasType_:1;
  int64_t pos;
  NSString* opt;
  Frame_FrameType type;
}
- (BOOL) hasType;
- (BOOL) hasPos;
- (BOOL) hasOpt;
@property (readonly) Frame_FrameType type;
@property (readonly) int64_t pos;
@property (readonly, strong) NSString* opt;

+ (Frame*) defaultInstance;
- (Frame*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Frame_Builder*) builder;
+ (Frame_Builder*) builder;
+ (Frame_Builder*) builderWithPrototype:(Frame*) prototype;
- (Frame_Builder*) toBuilder;

+ (Frame*) parseFromData:(NSData*) data;
+ (Frame*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Frame*) parseFromInputStream:(NSInputStream*) input;
+ (Frame*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Frame*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Frame*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Frame_Builder : PBGeneratedMessage_Builder {
@private
  Frame* result;
}

- (Frame*) defaultInstance;

- (Frame_Builder*) clear;
- (Frame_Builder*) clone;

- (Frame*) build;
- (Frame*) buildPartial;

- (Frame_Builder*) mergeFrom:(Frame*) other;
- (Frame_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Frame_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (Frame_FrameType) type;
- (Frame_Builder*) setType:(Frame_FrameType) value;
- (Frame_Builder*) clearType;

- (BOOL) hasPos;
- (int64_t) pos;
- (Frame_Builder*) setPos:(int64_t) value;
- (Frame_Builder*) clearPos;

- (BOOL) hasOpt;
- (NSString*) opt;
- (Frame_Builder*) setOpt:(NSString*) value;
- (Frame_Builder*) clearOpt;
@end

@interface Backtrace : PBGeneratedMessage {
@private
  NSMutableArray * framesArray;
}
@property (readonly, strong) NSArray * frames;
- (Frame*)framesAtIndex:(NSUInteger)index;

+ (Backtrace*) defaultInstance;
- (Backtrace*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Backtrace_Builder*) builder;
+ (Backtrace_Builder*) builder;
+ (Backtrace_Builder*) builderWithPrototype:(Backtrace*) prototype;
- (Backtrace_Builder*) toBuilder;

+ (Backtrace*) parseFromData:(NSData*) data;
+ (Backtrace*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Backtrace*) parseFromInputStream:(NSInputStream*) input;
+ (Backtrace*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Backtrace*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Backtrace*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Backtrace_Builder : PBGeneratedMessage_Builder {
@private
  Backtrace* result;
}

- (Backtrace*) defaultInstance;

- (Backtrace_Builder*) clear;
- (Backtrace_Builder*) clone;

- (Backtrace*) build;
- (Backtrace*) buildPartial;

- (Backtrace_Builder*) mergeFrom:(Backtrace*) other;
- (Backtrace_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Backtrace_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSMutableArray *)frames;
- (Frame*)framesAtIndex:(NSUInteger)index;
- (Backtrace_Builder *)addFrames:(Frame*)value;
- (Backtrace_Builder *)setFramesArray:(NSArray *)array;
- (Backtrace_Builder *)clearFrames;
@end

@interface Response : PBGeneratedMessage {
@private
  BOOL hasToken_:1;
  BOOL hasBacktrace_:1;
  BOOL hasProfile_:1;
  BOOL hasType_:1;
  int64_t token;
  Backtrace* backtrace;
  Datum* profile;
  Response_ResponseType type;
  NSMutableArray * responseArray;
  PBAppendableArray * notesArray;
}
- (BOOL) hasType;
- (BOOL) hasToken;
- (BOOL) hasBacktrace;
- (BOOL) hasProfile;
@property (readonly) Response_ResponseType type;
@property (readonly, strong) PBArray * notes;
@property (readonly) int64_t token;
@property (readonly, strong) NSArray * response;
@property (readonly, strong) Backtrace* backtrace;
@property (readonly, strong) Datum* profile;
- (Response_ResponseNote)notesAtIndex:(NSUInteger)index;
- (Datum*)responseAtIndex:(NSUInteger)index;

+ (Response*) defaultInstance;
- (Response*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Response_Builder*) builder;
+ (Response_Builder*) builder;
+ (Response_Builder*) builderWithPrototype:(Response*) prototype;
- (Response_Builder*) toBuilder;

+ (Response*) parseFromData:(NSData*) data;
+ (Response*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Response*) parseFromInputStream:(NSInputStream*) input;
+ (Response*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Response*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Response*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Response_Builder : PBGeneratedMessage_Builder {
@private
  Response* result;
}

- (Response*) defaultInstance;

- (Response_Builder*) clear;
- (Response_Builder*) clone;

- (Response*) build;
- (Response*) buildPartial;

- (Response_Builder*) mergeFrom:(Response*) other;
- (Response_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Response_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (Response_ResponseType) type;
- (Response_Builder*) setType:(Response_ResponseType) value;
- (Response_Builder*) clearType;

- (PBAppendableArray *)notes;
- (Response_ResponseNote)notesAtIndex:(NSUInteger)index;
- (Response_Builder *)addNotes:(Response_ResponseNote)value;
- (Response_Builder *)setNotesArray:(NSArray *)array;
- (Response_Builder *)setNotesValues:(const Response_ResponseNote *)values count:(NSUInteger)count;
- (Response_Builder *)clearNotes;

- (BOOL) hasToken;
- (int64_t) token;
- (Response_Builder*) setToken:(int64_t) value;
- (Response_Builder*) clearToken;

- (NSMutableArray *)response;
- (Datum*)responseAtIndex:(NSUInteger)index;
- (Response_Builder *)addResponse:(Datum*)value;
- (Response_Builder *)setResponseArray:(NSArray *)array;
- (Response_Builder *)clearResponse;

- (BOOL) hasBacktrace;
- (Backtrace*) backtrace;
- (Response_Builder*) setBacktrace:(Backtrace*) value;
- (Response_Builder*) setBacktraceBuilder:(Backtrace_Builder*) builderForValue;
- (Response_Builder*) mergeBacktrace:(Backtrace*) value;
- (Response_Builder*) clearBacktrace;

- (BOOL) hasProfile;
- (Datum*) profile;
- (Response_Builder*) setProfile:(Datum*) value;
- (Response_Builder*) setProfileBuilder:(Datum_Builder*) builderForValue;
- (Response_Builder*) mergeProfile:(Datum*) value;
- (Response_Builder*) clearProfile;
@end

@interface Datum : PBExtendableMessage {
@private
  BOOL hasRBool_:1;
  BOOL hasRNum_:1;
  BOOL hasRStr_:1;
  BOOL hasType_:1;
  BOOL rBool_:1;
  Float64 rNum;
  NSString* rStr;
  Datum_DatumType type;
  NSMutableArray * rArrayArray;
  NSMutableArray * rObjectArray;
}
- (BOOL) hasType;
- (BOOL) hasRBool;
- (BOOL) hasRNum;
- (BOOL) hasRStr;
@property (readonly) Datum_DatumType type;
- (BOOL) rBool;
@property (readonly) Float64 rNum;
@property (readonly, strong) NSString* rStr;
@property (readonly, strong) NSArray * rArray;
@property (readonly, strong) NSArray * rObject;
- (Datum*)rArrayAtIndex:(NSUInteger)index;
- (Datum_AssocPair*)rObjectAtIndex:(NSUInteger)index;

+ (Datum*) defaultInstance;
- (Datum*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Datum_Builder*) builder;
+ (Datum_Builder*) builder;
+ (Datum_Builder*) builderWithPrototype:(Datum*) prototype;
- (Datum_Builder*) toBuilder;

+ (Datum*) parseFromData:(NSData*) data;
+ (Datum*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Datum*) parseFromInputStream:(NSInputStream*) input;
+ (Datum*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Datum*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Datum*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Datum_AssocPair : PBGeneratedMessage {
@private
  BOOL hasKey_:1;
  BOOL hasVal_:1;
  NSString* key;
  Datum* val;
}
- (BOOL) hasKey;
- (BOOL) hasVal;
@property (readonly, strong) NSString* key;
@property (readonly, strong) Datum* val;

+ (Datum_AssocPair*) defaultInstance;
- (Datum_AssocPair*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Datum_AssocPair_Builder*) builder;
+ (Datum_AssocPair_Builder*) builder;
+ (Datum_AssocPair_Builder*) builderWithPrototype:(Datum_AssocPair*) prototype;
- (Datum_AssocPair_Builder*) toBuilder;

+ (Datum_AssocPair*) parseFromData:(NSData*) data;
+ (Datum_AssocPair*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Datum_AssocPair*) parseFromInputStream:(NSInputStream*) input;
+ (Datum_AssocPair*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Datum_AssocPair*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Datum_AssocPair*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Datum_AssocPair_Builder : PBGeneratedMessage_Builder {
@private
  Datum_AssocPair* result;
}

- (Datum_AssocPair*) defaultInstance;

- (Datum_AssocPair_Builder*) clear;
- (Datum_AssocPair_Builder*) clone;

- (Datum_AssocPair*) build;
- (Datum_AssocPair*) buildPartial;

- (Datum_AssocPair_Builder*) mergeFrom:(Datum_AssocPair*) other;
- (Datum_AssocPair_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Datum_AssocPair_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasKey;
- (NSString*) key;
- (Datum_AssocPair_Builder*) setKey:(NSString*) value;
- (Datum_AssocPair_Builder*) clearKey;

- (BOOL) hasVal;
- (Datum*) val;
- (Datum_AssocPair_Builder*) setVal:(Datum*) value;
- (Datum_AssocPair_Builder*) setValBuilder:(Datum_Builder*) builderForValue;
- (Datum_AssocPair_Builder*) mergeVal:(Datum*) value;
- (Datum_AssocPair_Builder*) clearVal;
@end

@interface Datum_Builder : PBExtendableMessage_Builder {
@private
  Datum* result;
}

- (Datum*) defaultInstance;

- (Datum_Builder*) clear;
- (Datum_Builder*) clone;

- (Datum*) build;
- (Datum*) buildPartial;

- (Datum_Builder*) mergeFrom:(Datum*) other;
- (Datum_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Datum_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (Datum_DatumType) type;
- (Datum_Builder*) setType:(Datum_DatumType) value;
- (Datum_Builder*) clearType;

- (BOOL) hasRBool;
- (BOOL) rBool;
- (Datum_Builder*) setRBool:(BOOL) value;
- (Datum_Builder*) clearRBool;

- (BOOL) hasRNum;
- (Float64) rNum;
- (Datum_Builder*) setRNum:(Float64) value;
- (Datum_Builder*) clearRNum;

- (BOOL) hasRStr;
- (NSString*) rStr;
- (Datum_Builder*) setRStr:(NSString*) value;
- (Datum_Builder*) clearRStr;

- (NSMutableArray *)rArray;
- (Datum*)rArrayAtIndex:(NSUInteger)index;
- (Datum_Builder *)addRArray:(Datum*)value;
- (Datum_Builder *)setRArrayArray:(NSArray *)array;
- (Datum_Builder *)clearRArray;

- (NSMutableArray *)rObject;
- (Datum_AssocPair*)rObjectAtIndex:(NSUInteger)index;
- (Datum_Builder *)addRObject:(Datum_AssocPair*)value;
- (Datum_Builder *)setRObjectArray:(NSArray *)array;
- (Datum_Builder *)clearRObject;
@end

@interface Term : PBExtendableMessage {
@private
  BOOL hasDatum_:1;
  BOOL hasType_:1;
  Datum* datum;
  Term_TermType type;
  NSMutableArray * argsArray;
  NSMutableArray * optargsArray;
}
- (BOOL) hasType;
- (BOOL) hasDatum;
@property (readonly) Term_TermType type;
@property (readonly, strong) Datum* datum;
@property (readonly, strong) NSArray * args;
@property (readonly, strong) NSArray * optargs;
- (Term*)argsAtIndex:(NSUInteger)index;
- (Term_AssocPair*)optargsAtIndex:(NSUInteger)index;

+ (Term*) defaultInstance;
- (Term*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Term_Builder*) builder;
+ (Term_Builder*) builder;
+ (Term_Builder*) builderWithPrototype:(Term*) prototype;
- (Term_Builder*) toBuilder;

+ (Term*) parseFromData:(NSData*) data;
+ (Term*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Term*) parseFromInputStream:(NSInputStream*) input;
+ (Term*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Term*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Term*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Term_AssocPair : PBGeneratedMessage {
@private
  BOOL hasKey_:1;
  BOOL hasVal_:1;
  NSString* key;
  Term* val;
}
- (BOOL) hasKey;
- (BOOL) hasVal;
@property (readonly, strong) NSString* key;
@property (readonly, strong) Term* val;

+ (Term_AssocPair*) defaultInstance;
- (Term_AssocPair*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Term_AssocPair_Builder*) builder;
+ (Term_AssocPair_Builder*) builder;
+ (Term_AssocPair_Builder*) builderWithPrototype:(Term_AssocPair*) prototype;
- (Term_AssocPair_Builder*) toBuilder;

+ (Term_AssocPair*) parseFromData:(NSData*) data;
+ (Term_AssocPair*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Term_AssocPair*) parseFromInputStream:(NSInputStream*) input;
+ (Term_AssocPair*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Term_AssocPair*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Term_AssocPair*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Term_AssocPair_Builder : PBGeneratedMessage_Builder {
@private
  Term_AssocPair* result;
}

- (Term_AssocPair*) defaultInstance;

- (Term_AssocPair_Builder*) clear;
- (Term_AssocPair_Builder*) clone;

- (Term_AssocPair*) build;
- (Term_AssocPair*) buildPartial;

- (Term_AssocPair_Builder*) mergeFrom:(Term_AssocPair*) other;
- (Term_AssocPair_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Term_AssocPair_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasKey;
- (NSString*) key;
- (Term_AssocPair_Builder*) setKey:(NSString*) value;
- (Term_AssocPair_Builder*) clearKey;

- (BOOL) hasVal;
- (Term*) val;
- (Term_AssocPair_Builder*) setVal:(Term*) value;
- (Term_AssocPair_Builder*) setValBuilder:(Term_Builder*) builderForValue;
- (Term_AssocPair_Builder*) mergeVal:(Term*) value;
- (Term_AssocPair_Builder*) clearVal;
@end

@interface Term_Builder : PBExtendableMessage_Builder {
@private
  Term* result;
}

- (Term*) defaultInstance;

- (Term_Builder*) clear;
- (Term_Builder*) clone;

- (Term*) build;
- (Term*) buildPartial;

- (Term_Builder*) mergeFrom:(Term*) other;
- (Term_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Term_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (Term_TermType) type;
- (Term_Builder*) setType:(Term_TermType) value;
- (Term_Builder*) clearType;

- (BOOL) hasDatum;
- (Datum*) datum;
- (Term_Builder*) setDatum:(Datum*) value;
- (Term_Builder*) setDatumBuilder:(Datum_Builder*) builderForValue;
- (Term_Builder*) mergeDatum:(Datum*) value;
- (Term_Builder*) clearDatum;

- (NSMutableArray *)args;
- (Term*)argsAtIndex:(NSUInteger)index;
- (Term_Builder *)addArgs:(Term*)value;
- (Term_Builder *)setArgsArray:(NSArray *)array;
- (Term_Builder *)clearArgs;

- (NSMutableArray *)optargs;
- (Term_AssocPair*)optargsAtIndex:(NSUInteger)index;
- (Term_Builder *)addOptargs:(Term_AssocPair*)value;
- (Term_Builder *)setOptargsArray:(NSArray *)array;
- (Term_Builder *)clearOptargs;
@end

