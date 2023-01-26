
// Generated from dae_config.g4 by ANTLR 4.11.1


#include "dae_configLexer.h"


using namespace antlr4;

using namespace dae_config;


using namespace antlr4;

namespace {

struct Dae_configLexerStaticData final {
  Dae_configLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Dae_configLexerStaticData(const Dae_configLexerStaticData&) = delete;
  Dae_configLexerStaticData(Dae_configLexerStaticData&&) = delete;
  Dae_configLexerStaticData& operator=(const Dae_configLexerStaticData&) = delete;
  Dae_configLexerStaticData& operator=(Dae_configLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag dae_configlexerLexerOnceFlag;
Dae_configLexerStaticData *dae_configlexerLexerStaticData = nullptr;

void dae_configlexerLexerInitialize() {
  assert(dae_configlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<Dae_configLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "SAFE_ID_HEAD_CHAR", "SAFE_NONID_HEAD_CHAR", "SAFE_INTERMEDIATE_CHAR", 
      "SAFE_CHAR", "DOUBLE_QUOTE_STRING", "SINGLE_QUOTE_STRING", "WHITESPACE", 
      "COMMENT_BLOCK", "COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "':'", "'!'", "'('", "')'", "','", "'->'", "'&&'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "WHITESPACE", "COMMENT_BLOCK", 
      "COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,15,159,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,
  	8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,3,12,73,8,12,1,13,1,
  	13,1,13,1,13,5,13,79,8,13,10,13,12,13,82,9,13,1,13,1,13,1,14,1,14,1,14,
  	1,14,5,14,90,8,14,10,14,12,14,93,9,14,1,14,1,14,1,15,4,15,98,8,15,11,
  	15,12,15,99,1,15,1,15,1,16,1,16,1,16,1,16,5,16,108,8,16,10,16,12,16,111,
  	9,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,5,17,120,8,17,10,17,12,17,123,
  	9,17,1,17,1,17,5,17,127,8,17,10,17,12,17,130,9,17,1,17,4,17,133,8,17,
  	11,17,12,17,134,1,17,3,17,138,8,17,1,17,1,17,1,18,1,18,5,18,144,8,18,
  	10,18,12,18,147,9,18,1,19,1,19,5,19,151,8,19,10,19,12,19,154,9,19,1,20,
  	1,20,3,20,158,8,20,4,80,91,109,128,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,7,
  	15,8,17,9,19,0,21,0,23,0,25,0,27,0,29,0,31,10,33,11,35,12,37,13,39,14,
  	41,15,1,0,6,3,0,65,90,95,95,97,122,4,0,42,43,45,57,92,92,94,94,4,0,33,
  	33,35,37,61,61,64,64,3,0,9,10,13,13,32,32,2,0,9,9,32,32,2,0,10,10,13,
  	13,167,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,1,43,1,0,0,
  	0,3,45,1,0,0,0,5,47,1,0,0,0,7,49,1,0,0,0,9,51,1,0,0,0,11,53,1,0,0,0,13,
  	55,1,0,0,0,15,57,1,0,0,0,17,60,1,0,0,0,19,63,1,0,0,0,21,65,1,0,0,0,23,
  	67,1,0,0,0,25,72,1,0,0,0,27,74,1,0,0,0,29,85,1,0,0,0,31,97,1,0,0,0,33,
  	103,1,0,0,0,35,117,1,0,0,0,37,141,1,0,0,0,39,148,1,0,0,0,41,157,1,0,0,
  	0,43,44,5,123,0,0,44,2,1,0,0,0,45,46,5,125,0,0,46,4,1,0,0,0,47,48,5,58,
  	0,0,48,6,1,0,0,0,49,50,5,33,0,0,50,8,1,0,0,0,51,52,5,40,0,0,52,10,1,0,
  	0,0,53,54,5,41,0,0,54,12,1,0,0,0,55,56,5,44,0,0,56,14,1,0,0,0,57,58,5,
  	45,0,0,58,59,5,62,0,0,59,16,1,0,0,0,60,61,5,38,0,0,61,62,5,38,0,0,62,
  	18,1,0,0,0,63,64,7,0,0,0,64,20,1,0,0,0,65,66,7,1,0,0,66,22,1,0,0,0,67,
  	68,7,2,0,0,68,24,1,0,0,0,69,73,3,19,9,0,70,73,3,21,10,0,71,73,3,23,11,
  	0,72,69,1,0,0,0,72,70,1,0,0,0,72,71,1,0,0,0,73,26,1,0,0,0,74,80,5,34,
  	0,0,75,76,5,92,0,0,76,79,5,34,0,0,77,79,9,0,0,0,78,75,1,0,0,0,78,77,1,
  	0,0,0,79,82,1,0,0,0,80,81,1,0,0,0,80,78,1,0,0,0,81,83,1,0,0,0,82,80,1,
  	0,0,0,83,84,5,34,0,0,84,28,1,0,0,0,85,91,5,39,0,0,86,87,5,92,0,0,87,90,
  	5,39,0,0,88,90,9,0,0,0,89,86,1,0,0,0,89,88,1,0,0,0,90,93,1,0,0,0,91,92,
  	1,0,0,0,91,89,1,0,0,0,92,94,1,0,0,0,93,91,1,0,0,0,94,95,5,39,0,0,95,30,
  	1,0,0,0,96,98,7,3,0,0,97,96,1,0,0,0,98,99,1,0,0,0,99,97,1,0,0,0,99,100,
  	1,0,0,0,100,101,1,0,0,0,101,102,6,15,0,0,102,32,1,0,0,0,103,104,5,47,
  	0,0,104,105,5,42,0,0,105,109,1,0,0,0,106,108,9,0,0,0,107,106,1,0,0,0,
  	108,111,1,0,0,0,109,110,1,0,0,0,109,107,1,0,0,0,110,112,1,0,0,0,111,109,
  	1,0,0,0,112,113,5,42,0,0,113,114,5,47,0,0,114,115,1,0,0,0,115,116,6,16,
  	0,0,116,34,1,0,0,0,117,121,4,17,0,0,118,120,7,4,0,0,119,118,1,0,0,0,120,
  	123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,124,1,0,0,0,123,121,1,
  	0,0,0,124,128,5,35,0,0,125,127,9,0,0,0,126,125,1,0,0,0,127,130,1,0,0,
  	0,128,129,1,0,0,0,128,126,1,0,0,0,129,137,1,0,0,0,130,128,1,0,0,0,131,
  	133,7,5,0,0,132,131,1,0,0,0,133,134,1,0,0,0,134,132,1,0,0,0,134,135,1,
  	0,0,0,135,138,1,0,0,0,136,138,5,0,0,1,137,132,1,0,0,0,137,136,1,0,0,0,
  	138,139,1,0,0,0,139,140,6,17,0,0,140,36,1,0,0,0,141,145,3,19,9,0,142,
  	144,3,25,12,0,143,142,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,0,145,146,
  	1,0,0,0,146,38,1,0,0,0,147,145,1,0,0,0,148,152,3,21,10,0,149,151,3,25,
  	12,0,150,149,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,
  	153,40,1,0,0,0,154,152,1,0,0,0,155,158,3,27,13,0,156,158,3,29,14,0,157,
  	155,1,0,0,0,157,156,1,0,0,0,158,42,1,0,0,0,15,0,72,78,80,89,91,99,109,
  	121,128,134,137,145,152,157,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  dae_configlexerLexerStaticData = staticData.release();
}

}

dae_configLexer::dae_configLexer(CharStream *input) : Lexer(input) {
  dae_configLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *dae_configlexerLexerStaticData->atn, dae_configlexerLexerStaticData->decisionToDFA, dae_configlexerLexerStaticData->sharedContextCache);
}

dae_configLexer::~dae_configLexer() {
  delete _interpreter;
}

std::string dae_configLexer::getGrammarFileName() const {
  return "dae_config.g4";
}

const std::vector<std::string>& dae_configLexer::getRuleNames() const {
  return dae_configlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& dae_configLexer::getChannelNames() const {
  return dae_configlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& dae_configLexer::getModeNames() const {
  return dae_configlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& dae_configLexer::getVocabulary() const {
  return dae_configlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView dae_configLexer::getSerializedATN() const {
  return dae_configlexerLexerStaticData->serializedATN;
}

const atn::ATN& dae_configLexer::getATN() const {
  return *dae_configlexerLexerStaticData->atn;
}


bool dae_configLexer::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return COMMENT_LINE_SHARPSempred(antlrcpp::downCast<antlr4::RuleContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}


bool dae_configLexer::COMMENT_LINE_SHARPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return getCharPositionInLine() == 0;

  default:
    break;
  }
  return true;
}


void dae_configLexer::initialize() {
  ::antlr4::internal::call_once(dae_configlexerLexerOnceFlag, dae_configlexerLexerInitialize);
}