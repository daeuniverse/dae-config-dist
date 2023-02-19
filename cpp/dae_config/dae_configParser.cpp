
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
      "input", "programStructureBlcok", "expression", "declaration", "functionPrototype", 
      "optParameterList", "nonEmptyParameterList", "parameter", "routingRule", 
      "outboundExpr", "functionPrototypeExpression", "routingRuleOrDeclarationOrLiteralOrExpressionList", 
      "routingRuleList"
    },
    std::vector<std::string>{
      "", "','", "'{'", "'}'", "':'", "'!'", "'('", "')'", "'->'", "'&&'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "WHITESPACE", "COMMENT_BLOCK", 
      "COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,15,147,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,
  	3,3,46,8,3,1,4,1,4,1,4,1,4,1,4,3,4,53,8,4,1,5,1,5,1,5,3,5,58,8,5,1,5,
  	1,5,5,5,62,8,5,10,5,12,5,65,9,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,8,1,8,1,8,3,8,80,8,8,1,9,3,9,83,8,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,
  	3,10,92,8,10,1,11,1,11,1,11,1,11,1,11,1,11,5,11,100,8,11,10,11,12,11,
  	103,9,11,1,12,1,12,1,12,1,12,3,12,109,8,12,1,13,1,13,1,13,1,13,1,14,1,
  	14,3,14,117,8,14,1,15,1,15,1,15,1,15,1,15,3,15,124,8,15,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,139,8,16,1,17,
  	1,17,1,17,1,17,3,17,145,8,17,1,17,0,2,10,22,18,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,0,1,1,0,13,14,144,0,36,1,0,0,0,2,39,1,0,0,
  	0,4,41,1,0,0,0,6,45,1,0,0,0,8,52,1,0,0,0,10,57,1,0,0,0,12,66,1,0,0,0,
  	14,68,1,0,0,0,16,79,1,0,0,0,18,82,1,0,0,0,20,91,1,0,0,0,22,93,1,0,0,0,
  	24,108,1,0,0,0,26,110,1,0,0,0,28,116,1,0,0,0,30,123,1,0,0,0,32,138,1,
  	0,0,0,34,144,1,0,0,0,36,37,3,10,5,0,37,38,5,0,0,1,38,1,1,0,0,0,39,40,
  	7,0,0,0,40,3,1,0,0,0,41,42,5,15,0,0,42,5,1,0,0,0,43,46,3,4,2,0,44,46,
  	3,2,1,0,45,43,1,0,0,0,45,44,1,0,0,0,46,7,1,0,0,0,47,48,3,6,3,0,48,49,
  	5,1,0,0,49,50,3,8,4,0,50,53,1,0,0,0,51,53,3,6,3,0,52,47,1,0,0,0,52,51,
  	1,0,0,0,53,9,1,0,0,0,54,55,6,5,-1,0,55,58,3,12,6,0,56,58,1,0,0,0,57,54,
  	1,0,0,0,57,56,1,0,0,0,58,63,1,0,0,0,59,60,10,2,0,0,60,62,3,12,6,0,61,
  	59,1,0,0,0,62,65,1,0,0,0,63,61,1,0,0,0,63,64,1,0,0,0,64,11,1,0,0,0,65,
  	63,1,0,0,0,66,67,3,14,7,0,67,13,1,0,0,0,68,69,5,13,0,0,69,70,5,2,0,0,
  	70,71,3,32,16,0,71,72,5,3,0,0,72,15,1,0,0,0,73,74,5,13,0,0,74,75,5,4,
  	0,0,75,80,3,30,15,0,76,77,5,13,0,0,77,78,5,4,0,0,78,80,3,8,4,0,79,73,
  	1,0,0,0,79,76,1,0,0,0,80,17,1,0,0,0,81,83,5,5,0,0,82,81,1,0,0,0,82,83,
  	1,0,0,0,83,84,1,0,0,0,84,85,5,13,0,0,85,86,5,6,0,0,86,87,3,20,10,0,87,
  	88,5,7,0,0,88,19,1,0,0,0,89,92,3,22,11,0,90,92,1,0,0,0,91,89,1,0,0,0,
  	91,90,1,0,0,0,92,21,1,0,0,0,93,94,6,11,-1,0,94,95,3,24,12,0,95,101,1,
  	0,0,0,96,97,10,1,0,0,97,98,5,1,0,0,98,100,3,24,12,0,99,96,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,23,1,0,0,0,103,101,1,0,
  	0,0,104,105,5,13,0,0,105,106,5,4,0,0,106,109,3,6,3,0,107,109,3,6,3,0,
  	108,104,1,0,0,0,108,107,1,0,0,0,109,25,1,0,0,0,110,111,3,30,15,0,111,
  	112,5,8,0,0,112,113,3,28,14,0,113,27,1,0,0,0,114,117,3,2,1,0,115,117,
  	3,18,9,0,116,114,1,0,0,0,116,115,1,0,0,0,117,29,1,0,0,0,118,124,3,18,
  	9,0,119,120,3,18,9,0,120,121,5,9,0,0,121,122,3,30,15,0,122,124,1,0,0,
  	0,123,118,1,0,0,0,123,119,1,0,0,0,124,31,1,0,0,0,125,126,3,26,13,0,126,
  	127,3,32,16,0,127,139,1,0,0,0,128,129,3,16,8,0,129,130,3,32,16,0,130,
  	139,1,0,0,0,131,132,3,6,3,0,132,133,3,32,16,0,133,139,1,0,0,0,134,135,
  	3,14,7,0,135,136,3,32,16,0,136,139,1,0,0,0,137,139,1,0,0,0,138,125,1,
  	0,0,0,138,128,1,0,0,0,138,131,1,0,0,0,138,134,1,0,0,0,138,137,1,0,0,0,
  	139,33,1,0,0,0,140,145,3,26,13,0,141,142,3,26,13,0,142,143,3,34,17,0,
  	143,145,1,0,0,0,144,140,1,0,0,0,144,141,1,0,0,0,145,35,1,0,0,0,13,45,
  	52,57,63,79,82,91,101,108,116,123,138,144
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
    setState(36);
    input(0);
    setState(37);
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
    setState(39);
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
    setState(41);
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
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        quote_literal();
        break;
      }

      case dae_configParser::ID:
      case dae_configParser::NON_ID: {
        enterOuterAlt(_localctx, 2);
        setState(44);
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
    setState(52);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      literal();
      setState(48);
      match(dae_configParser::T__0);
      setState(49);
      literalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(51);
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
    setState(57);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(55);
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
    setState(63);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InputContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInput);
        setState(59);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(60);
        programStructureBlcok(); 
      }
      setState(65);
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
    setState(66);
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
    setState(68);
    match(dae_configParser::ID);
    setState(69);
    match(dae_configParser::T__1);
    setState(70);
    routingRuleOrDeclarationOrLiteralOrExpressionList();
    setState(71);
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
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(73);
      match(dae_configParser::ID);
      setState(74);
      match(dae_configParser::T__3);
      setState(75);
      functionPrototypeExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(76);
      match(dae_configParser::ID);
      setState(77);
      match(dae_configParser::T__3);
      setState(78);
      literalExpression();
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
  enterRule(_localctx, 18, dae_configParser::RuleFunctionPrototype);
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
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == dae_configParser::T__4) {
      setState(81);
      match(dae_configParser::T__4);
    }
    setState(84);
    match(dae_configParser::ID);
    setState(85);
    match(dae_configParser::T__5);
    setState(86);
    optParameterList();
    setState(87);
    match(dae_configParser::T__6);
   
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
  enterRule(_localctx, 20, dae_configParser::RuleOptParameterList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::ID:
      case dae_configParser::NON_ID:
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(89);
        nonEmptyParameterList(0);
        break;
      }

      case dae_configParser::T__6: {
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
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, dae_configParser::RuleNonEmptyParameterList, precedence);

    

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
    setState(94);
    parameter();
    _ctx->stop = _input->LT(-1);
    setState(101);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NonEmptyParameterListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNonEmptyParameterList);
        setState(96);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(97);
        match(dae_configParser::T__0);
        setState(98);
        parameter(); 
      }
      setState(103);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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
  enterRule(_localctx, 24, dae_configParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      match(dae_configParser::ID);
      setState(105);
      match(dae_configParser::T__3);
      setState(106);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(107);
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
  enterRule(_localctx, 26, dae_configParser::RuleRoutingRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    functionPrototypeExpression();
    setState(111);
    match(dae_configParser::T__7);
    setState(112);
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
  enterRule(_localctx, 28, dae_configParser::RuleOutboundExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      bare_literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
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
  enterRule(_localctx, 30, dae_configParser::RuleFunctionPrototypeExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(118);
      functionPrototype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(119);
      functionPrototype();
      setState(120);
      match(dae_configParser::T__8);
      setState(121);
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
  enterRule(_localctx, 32, dae_configParser::RuleRoutingRuleOrDeclarationOrLiteralOrExpressionList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(125);
      routingRule();
      setState(126);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(128);
      declaration();
      setState(129);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(131);
      literal();
      setState(132);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(134);
      expression();
      setState(135);
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
  enterRule(_localctx, 34, dae_configParser::RuleRoutingRuleList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(140);
      routingRule();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      routingRule();
      setState(142);
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
    case 11: return nonEmptyParameterListSempred(antlrcpp::downCast<NonEmptyParameterListContext *>(context), predicateIndex);

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
