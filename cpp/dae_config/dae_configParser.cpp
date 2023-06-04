
// Generated from dae_config.g4 by ANTLR 4.11.1


#include "dae_configListener.h"

#include "dae_configParser.h"


using namespace antlrcpp;
using namespace dae_config;

using namespace antlr4;

namespace {

struct Dae_configParserStaticData final {
  Dae_configParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Dae_configParserStaticData(const Dae_configParserStaticData&) = delete;
  Dae_configParserStaticData(Dae_configParserStaticData&&) = delete;
  Dae_configParserStaticData& operator=(const Dae_configParserStaticData&) = delete;
  Dae_configParserStaticData& operator=(Dae_configParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag dae_configParserOnceFlag;
Dae_configParserStaticData *dae_configParserStaticData = nullptr;

void dae_configParserInitialize() {
  assert(dae_configParserStaticData == nullptr);
  auto staticData = std::make_unique<Dae_configParserStaticData>(
    std::vector<std::string>{
      "start", "bare_literal", "quote_literal", "literal", "literalExpression", 
      "input", "programStructureBlcok", "expression", "declaration", "optAnnotation", 
      "functionPrototype", "optParameterList", "nonEmptyParameterList", 
      "parameter", "routingRule", "outboundExpr", "functionPrototypeExpression", 
      "routingRuleOrDeclarationOrLiteralOrExpressionList", "routingRuleList"
    },
    std::vector<std::string>{
      "", "','", "'{'", "'}'", "':'", "'['", "']'", "'!'", "'('", "')'", 
      "'->'", "'&&'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "WHITESPACE", "COMMENT_BLOCK", 
      "COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,17,160,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,1,1,1,1,1,2,1,
  	2,1,3,1,3,3,3,48,8,3,1,4,1,4,1,4,1,4,1,4,3,4,55,8,4,1,5,1,5,1,5,3,5,60,
  	8,5,1,5,1,5,5,5,64,8,5,10,5,12,5,67,9,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,86,8,8,1,9,1,9,1,9,1,9,1,9,
  	3,9,93,8,9,1,10,3,10,96,8,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,3,11,
  	105,8,11,1,12,1,12,1,12,1,12,1,12,1,12,5,12,113,8,12,10,12,12,12,116,
  	9,12,1,13,1,13,1,13,1,13,3,13,122,8,13,1,14,1,14,1,14,1,14,1,15,1,15,
  	3,15,130,8,15,1,16,1,16,1,16,1,16,1,16,3,16,137,8,16,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,152,8,17,1,18,1,
  	18,1,18,1,18,3,18,158,8,18,1,18,0,2,10,24,19,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,28,30,32,34,36,0,1,1,0,15,16,157,0,38,1,0,0,0,2,41,1,0,0,
  	0,4,43,1,0,0,0,6,47,1,0,0,0,8,54,1,0,0,0,10,59,1,0,0,0,12,68,1,0,0,0,
  	14,70,1,0,0,0,16,85,1,0,0,0,18,92,1,0,0,0,20,95,1,0,0,0,22,104,1,0,0,
  	0,24,106,1,0,0,0,26,121,1,0,0,0,28,123,1,0,0,0,30,129,1,0,0,0,32,136,
  	1,0,0,0,34,151,1,0,0,0,36,157,1,0,0,0,38,39,3,10,5,0,39,40,5,0,0,1,40,
  	1,1,0,0,0,41,42,7,0,0,0,42,3,1,0,0,0,43,44,5,17,0,0,44,5,1,0,0,0,45,48,
  	3,4,2,0,46,48,3,2,1,0,47,45,1,0,0,0,47,46,1,0,0,0,48,7,1,0,0,0,49,50,
  	3,6,3,0,50,51,5,1,0,0,51,52,3,8,4,0,52,55,1,0,0,0,53,55,3,6,3,0,54,49,
  	1,0,0,0,54,53,1,0,0,0,55,9,1,0,0,0,56,57,6,5,-1,0,57,60,3,12,6,0,58,60,
  	1,0,0,0,59,56,1,0,0,0,59,58,1,0,0,0,60,65,1,0,0,0,61,62,10,2,0,0,62,64,
  	3,12,6,0,63,61,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,11,
  	1,0,0,0,67,65,1,0,0,0,68,69,3,14,7,0,69,13,1,0,0,0,70,71,5,15,0,0,71,
  	72,5,2,0,0,72,73,3,34,17,0,73,74,5,3,0,0,74,15,1,0,0,0,75,76,5,15,0,0,
  	76,77,5,4,0,0,77,78,3,32,16,0,78,79,3,18,9,0,79,86,1,0,0,0,80,81,5,15,
  	0,0,81,82,5,4,0,0,82,83,3,8,4,0,83,84,3,18,9,0,84,86,1,0,0,0,85,75,1,
  	0,0,0,85,80,1,0,0,0,86,17,1,0,0,0,87,88,5,5,0,0,88,89,3,22,11,0,89,90,
  	5,6,0,0,90,93,1,0,0,0,91,93,1,0,0,0,92,87,1,0,0,0,92,91,1,0,0,0,93,19,
  	1,0,0,0,94,96,5,7,0,0,95,94,1,0,0,0,95,96,1,0,0,0,96,97,1,0,0,0,97,98,
  	5,15,0,0,98,99,5,8,0,0,99,100,3,22,11,0,100,101,5,9,0,0,101,21,1,0,0,
  	0,102,105,3,24,12,0,103,105,1,0,0,0,104,102,1,0,0,0,104,103,1,0,0,0,105,
  	23,1,0,0,0,106,107,6,12,-1,0,107,108,3,26,13,0,108,114,1,0,0,0,109,110,
  	10,1,0,0,110,111,5,1,0,0,111,113,3,26,13,0,112,109,1,0,0,0,113,116,1,
  	0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,25,1,0,0,0,116,114,1,0,0,0,
  	117,118,5,15,0,0,118,119,5,4,0,0,119,122,3,6,3,0,120,122,3,6,3,0,121,
  	117,1,0,0,0,121,120,1,0,0,0,122,27,1,0,0,0,123,124,3,32,16,0,124,125,
  	5,10,0,0,125,126,3,30,15,0,126,29,1,0,0,0,127,130,3,2,1,0,128,130,3,20,
  	10,0,129,127,1,0,0,0,129,128,1,0,0,0,130,31,1,0,0,0,131,137,3,20,10,0,
  	132,133,3,20,10,0,133,134,5,11,0,0,134,135,3,32,16,0,135,137,1,0,0,0,
  	136,131,1,0,0,0,136,132,1,0,0,0,137,33,1,0,0,0,138,139,3,28,14,0,139,
  	140,3,34,17,0,140,152,1,0,0,0,141,142,3,16,8,0,142,143,3,34,17,0,143,
  	152,1,0,0,0,144,145,3,6,3,0,145,146,3,34,17,0,146,152,1,0,0,0,147,148,
  	3,14,7,0,148,149,3,34,17,0,149,152,1,0,0,0,150,152,1,0,0,0,151,138,1,
  	0,0,0,151,141,1,0,0,0,151,144,1,0,0,0,151,147,1,0,0,0,151,150,1,0,0,0,
  	152,35,1,0,0,0,153,158,3,28,14,0,154,155,3,28,14,0,155,156,3,36,18,0,
  	156,158,1,0,0,0,157,153,1,0,0,0,157,154,1,0,0,0,158,37,1,0,0,0,14,47,
  	54,59,65,85,92,95,104,114,121,129,136,151,157
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  dae_configParserStaticData = staticData.release();
}

}

dae_configParser::dae_configParser(TokenStream *input) : dae_configParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

dae_configParser::dae_configParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  dae_configParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *dae_configParserStaticData->atn, dae_configParserStaticData->decisionToDFA, dae_configParserStaticData->sharedContextCache, options);
}

dae_configParser::~dae_configParser() {
  delete _interpreter;
}

const atn::ATN& dae_configParser::getATN() const {
  return *dae_configParserStaticData->atn;
}

std::string dae_configParser::getGrammarFileName() const {
  return "dae_config.g4";
}

const std::vector<std::string>& dae_configParser::getRuleNames() const {
  return dae_configParserStaticData->ruleNames;
}

const dfa::Vocabulary& dae_configParser::getVocabulary() const {
  return dae_configParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView dae_configParser::getSerializedATN() const {
  return dae_configParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

dae_configParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::InputContext* dae_configParser::StartContext::input() {
  return getRuleContext<dae_configParser::InputContext>(0);
}

tree::TerminalNode* dae_configParser::StartContext::EOF() {
  return getToken(dae_configParser::EOF, 0);
}


size_t dae_configParser::StartContext::getRuleIndex() const {
  return dae_configParser::RuleStart;
}

void dae_configParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void dae_configParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}

dae_configParser::StartContext* dae_configParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, dae_configParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    input(0);
    setState(39);
    match(dae_configParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bare_literalContext ------------------------------------------------------------------

dae_configParser::Bare_literalContext::Bare_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::Bare_literalContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

tree::TerminalNode* dae_configParser::Bare_literalContext::NON_ID() {
  return getToken(dae_configParser::NON_ID, 0);
}


size_t dae_configParser::Bare_literalContext::getRuleIndex() const {
  return dae_configParser::RuleBare_literal;
}

void dae_configParser::Bare_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBare_literal(this);
}

void dae_configParser::Bare_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBare_literal(this);
}

dae_configParser::Bare_literalContext* dae_configParser::bare_literal() {
  Bare_literalContext *_localctx = _tracker.createInstance<Bare_literalContext>(_ctx, getState());
  enterRule(_localctx, 2, dae_configParser::RuleBare_literal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    _la = _input->LA(1);
    if (!(_la == dae_configParser::ID

    || _la == dae_configParser::NON_ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Quote_literalContext ------------------------------------------------------------------

dae_configParser::Quote_literalContext::Quote_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::Quote_literalContext::QUOTE_STRING() {
  return getToken(dae_configParser::QUOTE_STRING, 0);
}


size_t dae_configParser::Quote_literalContext::getRuleIndex() const {
  return dae_configParser::RuleQuote_literal;
}

void dae_configParser::Quote_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuote_literal(this);
}

void dae_configParser::Quote_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuote_literal(this);
}

dae_configParser::Quote_literalContext* dae_configParser::quote_literal() {
  Quote_literalContext *_localctx = _tracker.createInstance<Quote_literalContext>(_ctx, getState());
  enterRule(_localctx, 4, dae_configParser::RuleQuote_literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(dae_configParser::QUOTE_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

dae_configParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::Quote_literalContext* dae_configParser::LiteralContext::quote_literal() {
  return getRuleContext<dae_configParser::Quote_literalContext>(0);
}

dae_configParser::Bare_literalContext* dae_configParser::LiteralContext::bare_literal() {
  return getRuleContext<dae_configParser::Bare_literalContext>(0);
}


size_t dae_configParser::LiteralContext::getRuleIndex() const {
  return dae_configParser::RuleLiteral;
}

void dae_configParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void dae_configParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

dae_configParser::LiteralContext* dae_configParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 6, dae_configParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(45);
        quote_literal();
        break;
      }

      case dae_configParser::ID:
      case dae_configParser::NON_ID: {
        enterOuterAlt(_localctx, 2);
        setState(46);
        bare_literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralExpressionContext ------------------------------------------------------------------

dae_configParser::LiteralExpressionContext::LiteralExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::LiteralContext* dae_configParser::LiteralExpressionContext::literal() {
  return getRuleContext<dae_configParser::LiteralContext>(0);
}

dae_configParser::LiteralExpressionContext* dae_configParser::LiteralExpressionContext::literalExpression() {
  return getRuleContext<dae_configParser::LiteralExpressionContext>(0);
}


size_t dae_configParser::LiteralExpressionContext::getRuleIndex() const {
  return dae_configParser::RuleLiteralExpression;
}

void dae_configParser::LiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpression(this);
}

void dae_configParser::LiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpression(this);
}

dae_configParser::LiteralExpressionContext* dae_configParser::literalExpression() {
  LiteralExpressionContext *_localctx = _tracker.createInstance<LiteralExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, dae_configParser::RuleLiteralExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(54);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(49);
      literal();
      setState(50);
      match(dae_configParser::T__0);
      setState(51);
      literalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(53);
      literal();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

dae_configParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::ProgramStructureBlcokContext* dae_configParser::InputContext::programStructureBlcok() {
  return getRuleContext<dae_configParser::ProgramStructureBlcokContext>(0);
}

dae_configParser::InputContext* dae_configParser::InputContext::input() {
  return getRuleContext<dae_configParser::InputContext>(0);
}


size_t dae_configParser::InputContext::getRuleIndex() const {
  return dae_configParser::RuleInput;
}

void dae_configParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void dae_configParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


dae_configParser::InputContext* dae_configParser::input() {
   return input(0);
}

dae_configParser::InputContext* dae_configParser::input(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  dae_configParser::InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, parentState);
  dae_configParser::InputContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, dae_configParser::RuleInput, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(57);
      programStructureBlcok();
      break;
    }

    case 2: {
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(65);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InputContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInput);
        setState(61);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(62);
        programStructureBlcok(); 
      }
      setState(67);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ProgramStructureBlcokContext ------------------------------------------------------------------

dae_configParser::ProgramStructureBlcokContext::ProgramStructureBlcokContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::ExpressionContext* dae_configParser::ProgramStructureBlcokContext::expression() {
  return getRuleContext<dae_configParser::ExpressionContext>(0);
}


size_t dae_configParser::ProgramStructureBlcokContext::getRuleIndex() const {
  return dae_configParser::RuleProgramStructureBlcok;
}

void dae_configParser::ProgramStructureBlcokContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramStructureBlcok(this);
}

void dae_configParser::ProgramStructureBlcokContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramStructureBlcok(this);
}

dae_configParser::ProgramStructureBlcokContext* dae_configParser::programStructureBlcok() {
  ProgramStructureBlcokContext *_localctx = _tracker.createInstance<ProgramStructureBlcokContext>(_ctx, getState());
  enterRule(_localctx, 12, dae_configParser::RuleProgramStructureBlcok);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

dae_configParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::ExpressionContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext* dae_configParser::ExpressionContext::routingRuleOrDeclarationOrLiteralOrExpressionList() {
  return getRuleContext<dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext>(0);
}


size_t dae_configParser::ExpressionContext::getRuleIndex() const {
  return dae_configParser::RuleExpression;
}

void dae_configParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void dae_configParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

dae_configParser::ExpressionContext* dae_configParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, dae_configParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(dae_configParser::ID);
    setState(71);
    match(dae_configParser::T__1);
    setState(72);
    routingRuleOrDeclarationOrLiteralOrExpressionList();
    setState(73);
    match(dae_configParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

dae_configParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::DeclarationContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

dae_configParser::FunctionPrototypeExpressionContext* dae_configParser::DeclarationContext::functionPrototypeExpression() {
  return getRuleContext<dae_configParser::FunctionPrototypeExpressionContext>(0);
}

dae_configParser::OptAnnotationContext* dae_configParser::DeclarationContext::optAnnotation() {
  return getRuleContext<dae_configParser::OptAnnotationContext>(0);
}

dae_configParser::LiteralExpressionContext* dae_configParser::DeclarationContext::literalExpression() {
  return getRuleContext<dae_configParser::LiteralExpressionContext>(0);
}


size_t dae_configParser::DeclarationContext::getRuleIndex() const {
  return dae_configParser::RuleDeclaration;
}

void dae_configParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void dae_configParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

dae_configParser::DeclarationContext* dae_configParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, dae_configParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(75);
      match(dae_configParser::ID);
      setState(76);
      match(dae_configParser::T__3);
      setState(77);
      functionPrototypeExpression();
      setState(78);
      optAnnotation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      match(dae_configParser::ID);
      setState(81);
      match(dae_configParser::T__3);
      setState(82);
      literalExpression();
      setState(83);
      optAnnotation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptAnnotationContext ------------------------------------------------------------------

dae_configParser::OptAnnotationContext::OptAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::OptParameterListContext* dae_configParser::OptAnnotationContext::optParameterList() {
  return getRuleContext<dae_configParser::OptParameterListContext>(0);
}


size_t dae_configParser::OptAnnotationContext::getRuleIndex() const {
  return dae_configParser::RuleOptAnnotation;
}

void dae_configParser::OptAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptAnnotation(this);
}

void dae_configParser::OptAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptAnnotation(this);
}

dae_configParser::OptAnnotationContext* dae_configParser::optAnnotation() {
  OptAnnotationContext *_localctx = _tracker.createInstance<OptAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 18, dae_configParser::RuleOptAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(87);
        match(dae_configParser::T__4);
        setState(88);
        optParameterList();
        setState(89);
        match(dae_configParser::T__5);
        break;
      }

      case dae_configParser::T__2:
      case dae_configParser::T__6:
      case dae_configParser::ID:
      case dae_configParser::NON_ID:
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionPrototypeContext ------------------------------------------------------------------

dae_configParser::FunctionPrototypeContext::FunctionPrototypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::FunctionPrototypeContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

dae_configParser::OptParameterListContext* dae_configParser::FunctionPrototypeContext::optParameterList() {
  return getRuleContext<dae_configParser::OptParameterListContext>(0);
}


size_t dae_configParser::FunctionPrototypeContext::getRuleIndex() const {
  return dae_configParser::RuleFunctionPrototype;
}

void dae_configParser::FunctionPrototypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionPrototype(this);
}

void dae_configParser::FunctionPrototypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionPrototype(this);
}

dae_configParser::FunctionPrototypeContext* dae_configParser::functionPrototype() {
  FunctionPrototypeContext *_localctx = _tracker.createInstance<FunctionPrototypeContext>(_ctx, getState());
  enterRule(_localctx, 20, dae_configParser::RuleFunctionPrototype);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == dae_configParser::T__6) {
      setState(94);
      match(dae_configParser::T__6);
    }
    setState(97);
    match(dae_configParser::ID);
    setState(98);
    match(dae_configParser::T__7);
    setState(99);
    optParameterList();
    setState(100);
    match(dae_configParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptParameterListContext ------------------------------------------------------------------

dae_configParser::OptParameterListContext::OptParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::NonEmptyParameterListContext* dae_configParser::OptParameterListContext::nonEmptyParameterList() {
  return getRuleContext<dae_configParser::NonEmptyParameterListContext>(0);
}


size_t dae_configParser::OptParameterListContext::getRuleIndex() const {
  return dae_configParser::RuleOptParameterList;
}

void dae_configParser::OptParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptParameterList(this);
}

void dae_configParser::OptParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptParameterList(this);
}

dae_configParser::OptParameterListContext* dae_configParser::optParameterList() {
  OptParameterListContext *_localctx = _tracker.createInstance<OptParameterListContext>(_ctx, getState());
  enterRule(_localctx, 22, dae_configParser::RuleOptParameterList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(104);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::ID:
      case dae_configParser::NON_ID:
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(102);
        nonEmptyParameterList(0);
        break;
      }

      case dae_configParser::T__5:
      case dae_configParser::T__8: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NonEmptyParameterListContext ------------------------------------------------------------------

dae_configParser::NonEmptyParameterListContext::NonEmptyParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::ParameterContext* dae_configParser::NonEmptyParameterListContext::parameter() {
  return getRuleContext<dae_configParser::ParameterContext>(0);
}

dae_configParser::NonEmptyParameterListContext* dae_configParser::NonEmptyParameterListContext::nonEmptyParameterList() {
  return getRuleContext<dae_configParser::NonEmptyParameterListContext>(0);
}


size_t dae_configParser::NonEmptyParameterListContext::getRuleIndex() const {
  return dae_configParser::RuleNonEmptyParameterList;
}

void dae_configParser::NonEmptyParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonEmptyParameterList(this);
}

void dae_configParser::NonEmptyParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonEmptyParameterList(this);
}


dae_configParser::NonEmptyParameterListContext* dae_configParser::nonEmptyParameterList() {
   return nonEmptyParameterList(0);
}

dae_configParser::NonEmptyParameterListContext* dae_configParser::nonEmptyParameterList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  dae_configParser::NonEmptyParameterListContext *_localctx = _tracker.createInstance<NonEmptyParameterListContext>(_ctx, parentState);
  dae_configParser::NonEmptyParameterListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, dae_configParser::RuleNonEmptyParameterList, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(107);
    parameter();
    _ctx->stop = _input->LT(-1);
    setState(114);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NonEmptyParameterListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNonEmptyParameterList);
        setState(109);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(110);
        match(dae_configParser::T__0);
        setState(111);
        parameter(); 
      }
      setState(116);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

dae_configParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::ParameterContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

dae_configParser::LiteralContext* dae_configParser::ParameterContext::literal() {
  return getRuleContext<dae_configParser::LiteralContext>(0);
}


size_t dae_configParser::ParameterContext::getRuleIndex() const {
  return dae_configParser::RuleParameter;
}

void dae_configParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void dae_configParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

dae_configParser::ParameterContext* dae_configParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 26, dae_configParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(121);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      match(dae_configParser::ID);
      setState(118);
      match(dae_configParser::T__3);
      setState(119);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
      literal();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutingRuleContext ------------------------------------------------------------------

dae_configParser::RoutingRuleContext::RoutingRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::FunctionPrototypeExpressionContext* dae_configParser::RoutingRuleContext::functionPrototypeExpression() {
  return getRuleContext<dae_configParser::FunctionPrototypeExpressionContext>(0);
}

dae_configParser::OutboundExprContext* dae_configParser::RoutingRuleContext::outboundExpr() {
  return getRuleContext<dae_configParser::OutboundExprContext>(0);
}


size_t dae_configParser::RoutingRuleContext::getRuleIndex() const {
  return dae_configParser::RuleRoutingRule;
}

void dae_configParser::RoutingRuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoutingRule(this);
}

void dae_configParser::RoutingRuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoutingRule(this);
}

dae_configParser::RoutingRuleContext* dae_configParser::routingRule() {
  RoutingRuleContext *_localctx = _tracker.createInstance<RoutingRuleContext>(_ctx, getState());
  enterRule(_localctx, 28, dae_configParser::RuleRoutingRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    functionPrototypeExpression();
    setState(124);
    match(dae_configParser::T__9);
    setState(125);
    outboundExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutboundExprContext ------------------------------------------------------------------

dae_configParser::OutboundExprContext::OutboundExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::Bare_literalContext* dae_configParser::OutboundExprContext::bare_literal() {
  return getRuleContext<dae_configParser::Bare_literalContext>(0);
}

dae_configParser::FunctionPrototypeContext* dae_configParser::OutboundExprContext::functionPrototype() {
  return getRuleContext<dae_configParser::FunctionPrototypeContext>(0);
}


size_t dae_configParser::OutboundExprContext::getRuleIndex() const {
  return dae_configParser::RuleOutboundExpr;
}

void dae_configParser::OutboundExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutboundExpr(this);
}

void dae_configParser::OutboundExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutboundExpr(this);
}

dae_configParser::OutboundExprContext* dae_configParser::outboundExpr() {
  OutboundExprContext *_localctx = _tracker.createInstance<OutboundExprContext>(_ctx, getState());
  enterRule(_localctx, 30, dae_configParser::RuleOutboundExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(127);
      bare_literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(128);
      functionPrototype();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionPrototypeExpressionContext ------------------------------------------------------------------

dae_configParser::FunctionPrototypeExpressionContext::FunctionPrototypeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::FunctionPrototypeContext* dae_configParser::FunctionPrototypeExpressionContext::functionPrototype() {
  return getRuleContext<dae_configParser::FunctionPrototypeContext>(0);
}

dae_configParser::FunctionPrototypeExpressionContext* dae_configParser::FunctionPrototypeExpressionContext::functionPrototypeExpression() {
  return getRuleContext<dae_configParser::FunctionPrototypeExpressionContext>(0);
}


size_t dae_configParser::FunctionPrototypeExpressionContext::getRuleIndex() const {
  return dae_configParser::RuleFunctionPrototypeExpression;
}

void dae_configParser::FunctionPrototypeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionPrototypeExpression(this);
}

void dae_configParser::FunctionPrototypeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionPrototypeExpression(this);
}

dae_configParser::FunctionPrototypeExpressionContext* dae_configParser::functionPrototypeExpression() {
  FunctionPrototypeExpressionContext *_localctx = _tracker.createInstance<FunctionPrototypeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, dae_configParser::RuleFunctionPrototypeExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(131);
      functionPrototype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(132);
      functionPrototype();
      setState(133);
      match(dae_configParser::T__10);
      setState(134);
      functionPrototypeExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutingRuleOrDeclarationOrLiteralOrExpressionListContext ------------------------------------------------------------------

dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::RoutingRuleContext* dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::routingRule() {
  return getRuleContext<dae_configParser::RoutingRuleContext>(0);
}

dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext* dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::routingRuleOrDeclarationOrLiteralOrExpressionList() {
  return getRuleContext<dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext>(0);
}

dae_configParser::DeclarationContext* dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::declaration() {
  return getRuleContext<dae_configParser::DeclarationContext>(0);
}

dae_configParser::LiteralContext* dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::literal() {
  return getRuleContext<dae_configParser::LiteralContext>(0);
}

dae_configParser::ExpressionContext* dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::expression() {
  return getRuleContext<dae_configParser::ExpressionContext>(0);
}


size_t dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::getRuleIndex() const {
  return dae_configParser::RuleRoutingRuleOrDeclarationOrLiteralOrExpressionList;
}

void dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoutingRuleOrDeclarationOrLiteralOrExpressionList(this);
}

void dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoutingRuleOrDeclarationOrLiteralOrExpressionList(this);
}

dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext* dae_configParser::routingRuleOrDeclarationOrLiteralOrExpressionList() {
  RoutingRuleOrDeclarationOrLiteralOrExpressionListContext *_localctx = _tracker.createInstance<RoutingRuleOrDeclarationOrLiteralOrExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 34, dae_configParser::RuleRoutingRuleOrDeclarationOrLiteralOrExpressionList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      routingRule();
      setState(139);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      declaration();
      setState(142);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(144);
      literal();
      setState(145);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(147);
      expression();
      setState(148);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);

      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutingRuleListContext ------------------------------------------------------------------

dae_configParser::RoutingRuleListContext::RoutingRuleListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::RoutingRuleContext* dae_configParser::RoutingRuleListContext::routingRule() {
  return getRuleContext<dae_configParser::RoutingRuleContext>(0);
}

dae_configParser::RoutingRuleListContext* dae_configParser::RoutingRuleListContext::routingRuleList() {
  return getRuleContext<dae_configParser::RoutingRuleListContext>(0);
}


size_t dae_configParser::RoutingRuleListContext::getRuleIndex() const {
  return dae_configParser::RuleRoutingRuleList;
}

void dae_configParser::RoutingRuleListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoutingRuleList(this);
}

void dae_configParser::RoutingRuleListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoutingRuleList(this);
}

dae_configParser::RoutingRuleListContext* dae_configParser::routingRuleList() {
  RoutingRuleListContext *_localctx = _tracker.createInstance<RoutingRuleListContext>(_ctx, getState());
  enterRule(_localctx, 36, dae_configParser::RuleRoutingRuleList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(153);
      routingRule();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(154);
      routingRule();
      setState(155);
      routingRuleList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool dae_configParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return inputSempred(antlrcpp::downCast<InputContext *>(context), predicateIndex);
    case 12: return nonEmptyParameterListSempred(antlrcpp::downCast<NonEmptyParameterListContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool dae_configParser::inputSempred(InputContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool dae_configParser::nonEmptyParameterListSempred(NonEmptyParameterListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void dae_configParser::initialize() {
  ::antlr4::internal::call_once(dae_configParserOnceFlag, dae_configParserInitialize);
}
