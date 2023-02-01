
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
      "start", "bare_literal", "quote_literal", "literal", "input", "programStructureBlcok", 
      "expression", "declaration", "functionPrototype", "optParameterList", 
      "nonEmptyParameterList", "parameter", "routingRule", "functionPrototypeExpression", 
      "routingRuleOrDeclarationOrLiteralOrExpressionList", "routingRuleList"
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
  	4,1,15,132,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,3,3,42,8,3,1,4,1,4,1,
  	4,3,4,47,8,4,1,4,1,4,5,4,51,8,4,10,4,12,4,54,9,4,1,5,1,5,1,6,1,6,1,6,
  	1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,3,7,69,8,7,1,8,3,8,72,8,8,1,8,1,8,1,8,
  	1,8,1,8,1,9,1,9,3,9,81,8,9,1,10,1,10,1,10,1,10,1,10,1,10,5,10,89,8,10,
  	10,10,12,10,92,9,10,1,11,1,11,1,11,1,11,3,11,98,8,11,1,12,1,12,1,12,1,
  	12,1,13,1,13,1,13,1,13,1,13,3,13,109,8,13,1,14,1,14,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,124,8,14,1,15,1,15,1,15,1,
  	15,3,15,130,8,15,1,15,0,2,8,20,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,0,1,1,0,13,14,129,0,32,1,0,0,0,2,35,1,0,0,0,4,37,1,0,0,0,6,41,1,
  	0,0,0,8,46,1,0,0,0,10,55,1,0,0,0,12,57,1,0,0,0,14,68,1,0,0,0,16,71,1,
  	0,0,0,18,80,1,0,0,0,20,82,1,0,0,0,22,97,1,0,0,0,24,99,1,0,0,0,26,108,
  	1,0,0,0,28,123,1,0,0,0,30,129,1,0,0,0,32,33,3,8,4,0,33,34,5,0,0,1,34,
  	1,1,0,0,0,35,36,7,0,0,0,36,3,1,0,0,0,37,38,5,15,0,0,38,5,1,0,0,0,39,42,
  	3,4,2,0,40,42,3,2,1,0,41,39,1,0,0,0,41,40,1,0,0,0,42,7,1,0,0,0,43,44,
  	6,4,-1,0,44,47,3,10,5,0,45,47,1,0,0,0,46,43,1,0,0,0,46,45,1,0,0,0,47,
  	52,1,0,0,0,48,49,10,2,0,0,49,51,3,10,5,0,50,48,1,0,0,0,51,54,1,0,0,0,
  	52,50,1,0,0,0,52,53,1,0,0,0,53,9,1,0,0,0,54,52,1,0,0,0,55,56,3,12,6,0,
  	56,11,1,0,0,0,57,58,5,13,0,0,58,59,5,1,0,0,59,60,3,28,14,0,60,61,5,2,
  	0,0,61,13,1,0,0,0,62,63,5,13,0,0,63,64,5,3,0,0,64,69,3,26,13,0,65,66,
  	5,13,0,0,66,67,5,3,0,0,67,69,3,6,3,0,68,62,1,0,0,0,68,65,1,0,0,0,69,15,
  	1,0,0,0,70,72,5,4,0,0,71,70,1,0,0,0,71,72,1,0,0,0,72,73,1,0,0,0,73,74,
  	5,13,0,0,74,75,5,5,0,0,75,76,3,18,9,0,76,77,5,6,0,0,77,17,1,0,0,0,78,
  	81,3,20,10,0,79,81,1,0,0,0,80,78,1,0,0,0,80,79,1,0,0,0,81,19,1,0,0,0,
  	82,83,6,10,-1,0,83,84,3,22,11,0,84,90,1,0,0,0,85,86,10,1,0,0,86,87,5,
  	7,0,0,87,89,3,22,11,0,88,85,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,
  	1,0,0,0,91,21,1,0,0,0,92,90,1,0,0,0,93,94,5,13,0,0,94,95,5,3,0,0,95,98,
  	3,6,3,0,96,98,3,6,3,0,97,93,1,0,0,0,97,96,1,0,0,0,98,23,1,0,0,0,99,100,
  	3,26,13,0,100,101,5,8,0,0,101,102,3,2,1,0,102,25,1,0,0,0,103,109,3,16,
  	8,0,104,105,3,16,8,0,105,106,5,9,0,0,106,107,3,26,13,0,107,109,1,0,0,
  	0,108,103,1,0,0,0,108,104,1,0,0,0,109,27,1,0,0,0,110,111,3,24,12,0,111,
  	112,3,28,14,0,112,124,1,0,0,0,113,114,3,14,7,0,114,115,3,28,14,0,115,
  	124,1,0,0,0,116,117,3,6,3,0,117,118,3,28,14,0,118,124,1,0,0,0,119,120,
  	3,12,6,0,120,121,3,28,14,0,121,124,1,0,0,0,122,124,1,0,0,0,123,110,1,
  	0,0,0,123,113,1,0,0,0,123,116,1,0,0,0,123,119,1,0,0,0,123,122,1,0,0,0,
  	124,29,1,0,0,0,125,130,3,24,12,0,126,127,3,24,12,0,127,128,3,30,15,0,
  	128,130,1,0,0,0,129,125,1,0,0,0,129,126,1,0,0,0,130,31,1,0,0,0,11,41,
  	46,52,68,71,80,90,97,108,123,129
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
    setState(32);
    input(0);
    setState(33);
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
    setState(35);
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
    setState(37);
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
    setState(41);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(39);
        quote_literal();
        break;
      }

      case dae_configParser::ID:
      case dae_configParser::NON_ID: {
        enterOuterAlt(_localctx, 2);
        setState(40);
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
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, dae_configParser::RuleInput, precedence);

    

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
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(44);
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
    setState(52);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InputContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInput);
        setState(48);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(49);
        programStructureBlcok(); 
      }
      setState(54);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
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
  enterRule(_localctx, 10, dae_configParser::RuleProgramStructureBlcok);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
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
  enterRule(_localctx, 12, dae_configParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(dae_configParser::ID);
    setState(58);
    match(dae_configParser::T__0);
    setState(59);
    routingRuleOrDeclarationOrLiteralOrExpressionList();
    setState(60);
    match(dae_configParser::T__1);
   
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

dae_configParser::LiteralContext* dae_configParser::DeclarationContext::literal() {
  return getRuleContext<dae_configParser::LiteralContext>(0);
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
  enterRule(_localctx, 14, dae_configParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(62);
      match(dae_configParser::ID);
      setState(63);
      match(dae_configParser::T__2);
      setState(64);
      functionPrototypeExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(65);
      match(dae_configParser::ID);
      setState(66);
      match(dae_configParser::T__2);
      setState(67);
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
  enterRule(_localctx, 16, dae_configParser::RuleFunctionPrototype);
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
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == dae_configParser::T__3) {
      setState(70);
      match(dae_configParser::T__3);
    }
    setState(73);
    match(dae_configParser::ID);
    setState(74);
    match(dae_configParser::T__4);
    setState(75);
    optParameterList();
    setState(76);
    match(dae_configParser::T__5);
   
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
  enterRule(_localctx, 18, dae_configParser::RuleOptParameterList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::ID:
      case dae_configParser::NON_ID:
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        nonEmptyParameterList(0);
        break;
      }

      case dae_configParser::T__5: {
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
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, dae_configParser::RuleNonEmptyParameterList, precedence);

    

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
    setState(83);
    parameter();
    _ctx->stop = _input->LT(-1);
    setState(90);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NonEmptyParameterListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNonEmptyParameterList);
        setState(85);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(86);
        match(dae_configParser::T__6);
        setState(87);
        parameter(); 
      }
      setState(92);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
  enterRule(_localctx, 22, dae_configParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(93);
      match(dae_configParser::ID);
      setState(94);
      match(dae_configParser::T__2);
      setState(95);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(96);
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
  enterRule(_localctx, 24, dae_configParser::RuleRoutingRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    functionPrototypeExpression();
    setState(100);
    match(dae_configParser::T__7);
    setState(101);
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
  enterRule(_localctx, 26, dae_configParser::RuleFunctionPrototypeExpression);

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
      setState(103);
      functionPrototype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      functionPrototype();
      setState(105);
      match(dae_configParser::T__8);
      setState(106);
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
  enterRule(_localctx, 28, dae_configParser::RuleRoutingRuleOrDeclarationOrLiteralOrExpressionList);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(110);
      routingRule();
      setState(111);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      declaration();
      setState(114);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(116);
      literal();
      setState(117);
      routingRuleOrDeclarationOrLiteralOrExpressionList();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(119);
      expression();
      setState(120);
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
  enterRule(_localctx, 30, dae_configParser::RuleRoutingRuleList);

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
      setState(125);
      routingRule();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(126);
      routingRule();
      setState(127);
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
    case 4: return inputSempred(antlrcpp::downCast<InputContext *>(context), predicateIndex);
    case 10: return nonEmptyParameterListSempred(antlrcpp::downCast<NonEmptyParameterListContext *>(context), predicateIndex);

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
