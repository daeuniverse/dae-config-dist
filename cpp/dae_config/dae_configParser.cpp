
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
      "functionPrototypeExpression", "routingRuleOrDeclarationOrLiteralOrExpressionList", 
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
  	4,1,15,141,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,3,3,44,8,3,
  	1,4,1,4,1,4,1,4,1,4,3,4,51,8,4,1,5,1,5,1,5,3,5,56,8,5,1,5,1,5,5,5,60,
  	8,5,10,5,12,5,63,9,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,
  	1,8,3,8,78,8,8,1,9,3,9,81,8,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,3,10,90,8,
  	10,1,11,1,11,1,11,1,11,1,11,1,11,5,11,98,8,11,10,11,12,11,101,9,11,1,
  	12,1,12,1,12,1,12,3,12,107,8,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,
  	14,1,14,3,14,118,8,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,3,15,133,8,15,1,16,1,16,1,16,1,16,3,16,139,8,16,1,16,
  	0,2,10,22,17,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,0,1,1,0,13,
  	14,138,0,34,1,0,0,0,2,37,1,0,0,0,4,39,1,0,0,0,6,43,1,0,0,0,8,50,1,0,0,
  	0,10,55,1,0,0,0,12,64,1,0,0,0,14,66,1,0,0,0,16,77,1,0,0,0,18,80,1,0,0,
  	0,20,89,1,0,0,0,22,91,1,0,0,0,24,106,1,0,0,0,26,108,1,0,0,0,28,117,1,
  	0,0,0,30,132,1,0,0,0,32,138,1,0,0,0,34,35,3,10,5,0,35,36,5,0,0,1,36,1,
  	1,0,0,0,37,38,7,0,0,0,38,3,1,0,0,0,39,40,5,15,0,0,40,5,1,0,0,0,41,44,
  	3,4,2,0,42,44,3,2,1,0,43,41,1,0,0,0,43,42,1,0,0,0,44,7,1,0,0,0,45,46,
  	3,6,3,0,46,47,5,1,0,0,47,48,3,8,4,0,48,51,1,0,0,0,49,51,3,6,3,0,50,45,
  	1,0,0,0,50,49,1,0,0,0,51,9,1,0,0,0,52,53,6,5,-1,0,53,56,3,12,6,0,54,56,
  	1,0,0,0,55,52,1,0,0,0,55,54,1,0,0,0,56,61,1,0,0,0,57,58,10,2,0,0,58,60,
  	3,12,6,0,59,57,1,0,0,0,60,63,1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,11,
  	1,0,0,0,63,61,1,0,0,0,64,65,3,14,7,0,65,13,1,0,0,0,66,67,5,13,0,0,67,
  	68,5,2,0,0,68,69,3,30,15,0,69,70,5,3,0,0,70,15,1,0,0,0,71,72,5,13,0,0,
  	72,73,5,4,0,0,73,78,3,28,14,0,74,75,5,13,0,0,75,76,5,4,0,0,76,78,3,8,
  	4,0,77,71,1,0,0,0,77,74,1,0,0,0,78,17,1,0,0,0,79,81,5,5,0,0,80,79,1,0,
  	0,0,80,81,1,0,0,0,81,82,1,0,0,0,82,83,5,13,0,0,83,84,5,6,0,0,84,85,3,
  	20,10,0,85,86,5,7,0,0,86,19,1,0,0,0,87,90,3,22,11,0,88,90,1,0,0,0,89,
  	87,1,0,0,0,89,88,1,0,0,0,90,21,1,0,0,0,91,92,6,11,-1,0,92,93,3,24,12,
  	0,93,99,1,0,0,0,94,95,10,1,0,0,95,96,5,1,0,0,96,98,3,24,12,0,97,94,1,
  	0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,23,1,0,0,0,101,
  	99,1,0,0,0,102,103,5,13,0,0,103,104,5,4,0,0,104,107,3,6,3,0,105,107,3,
  	6,3,0,106,102,1,0,0,0,106,105,1,0,0,0,107,25,1,0,0,0,108,109,3,28,14,
  	0,109,110,5,8,0,0,110,111,3,2,1,0,111,27,1,0,0,0,112,118,3,18,9,0,113,
  	114,3,18,9,0,114,115,5,9,0,0,115,116,3,28,14,0,116,118,1,0,0,0,117,112,
  	1,0,0,0,117,113,1,0,0,0,118,29,1,0,0,0,119,120,3,26,13,0,120,121,3,30,
  	15,0,121,133,1,0,0,0,122,123,3,16,8,0,123,124,3,30,15,0,124,133,1,0,0,
  	0,125,126,3,6,3,0,126,127,3,30,15,0,127,133,1,0,0,0,128,129,3,14,7,0,
  	129,130,3,30,15,0,130,133,1,0,0,0,131,133,1,0,0,0,132,119,1,0,0,0,132,
  	122,1,0,0,0,132,125,1,0,0,0,132,128,1,0,0,0,132,131,1,0,0,0,133,31,1,
  	0,0,0,134,139,3,26,13,0,135,136,3,26,13,0,136,137,3,32,16,0,137,139,1,
  	0,0,0,138,134,1,0,0,0,138,135,1,0,0,0,139,33,1,0,0,0,12,43,50,55,61,77,
  	80,89,99,106,117,132,138
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
    setState(34);
    input(0);
    setState(35);
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
    setState(37);
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
    setState(39);
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
    setState(43);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(41);
        quote_literal();
        break;
      }

      case dae_configParser::ID:
      case dae_configParser::NON_ID: {
        enterOuterAlt(_localctx, 2);
        setState(42);
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
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(45);
      literal();
      setState(46);
      match(dae_configParser::T__0);
      setState(47);
      literalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
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
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(53);
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
    setState(61);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InputContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInput);
        setState(57);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(58);
        programStructureBlcok(); 
      }
      setState(63);
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
    setState(64);
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
    setState(66);
    match(dae_configParser::ID);
    setState(67);
    match(dae_configParser::T__1);
    setState(68);
    routingRuleOrDeclarationOrLiteralOrExpressionList();
    setState(69);
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
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      match(dae_configParser::ID);
      setState(72);
      match(dae_configParser::T__3);
      setState(73);
      functionPrototypeExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(74);
      match(dae_configParser::ID);
      setState(75);
      match(dae_configParser::T__3);
      setState(76);
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
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == dae_configParser::T__4) {
      setState(79);
      match(dae_configParser::T__4);
    }
    setState(82);
    match(dae_configParser::ID);
    setState(83);
    match(dae_configParser::T__5);
    setState(84);
    optParameterList();
    setState(85);
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
    setState(89);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::ID:
      case dae_configParser::NON_ID:
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(87);
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
    setState(92);
    parameter();
    _ctx->stop = _input->LT(-1);
    setState(99);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NonEmptyParameterListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNonEmptyParameterList);
        setState(94);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(95);
        match(dae_configParser::T__0);
        setState(96);
        parameter(); 
      }
      setState(101);
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
    setState(106);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(102);
      match(dae_configParser::ID);
      setState(103);
      match(dae_configParser::T__3);
      setState(104);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
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

dae_configParser::Bare_literalContext* dae_configParser::RoutingRuleContext::bare_literal() {
  return getRuleContext<dae_configParser::Bare_literalContext>(0);
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
    setState(108);
    functionPrototypeExpression();
    setState(109);
    match(dae_configParser::T__7);
    setState(110);
    bare_literal();
   
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
  enterRule(_localctx, 28, dae_configParser::RuleFunctionPrototypeExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      functionPrototype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      functionPrototype();
      setState(114);
      match(dae_configParser::T__8);
      setState(115);
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
  enterRule(_localctx, 30, dae_configParser::RuleRoutingRuleOrDeclarationOrLiteralOrExpressionList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(132);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(119);
      routingRule();
      setState(120);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(122);
      declaration();
      setState(123);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(125);
      literal();
      setState(126);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(128);
      expression();
      setState(129);
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
  enterRule(_localctx, 32, dae_configParser::RuleRoutingRuleList);

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
      setState(134);
      routingRule();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      routingRule();
      setState(136);
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
