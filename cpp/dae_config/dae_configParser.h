
// Generated from dae_config.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace dae_config {


class  dae_configParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, WHITESPACE = 12, COMMENT_BLOCK = 13, 
    COMMENT_LINE_SHARP = 14, ID = 15, NON_ID = 16, QUOTE_STRING = 17
  };

  enum {
    RuleStart = 0, RuleBare_literal = 1, RuleQuote_literal = 2, RuleLiteral = 3, 
    RuleLiteralExpression = 4, RuleInput = 5, RuleProgramStructureBlcok = 6, 
    RuleExpression = 7, RuleDeclaration = 8, RuleOptAnnotation = 9, RuleFunctionPrototype = 10, 
    RuleOptParameterList = 11, RuleNonEmptyParameterList = 12, RuleParameter = 13, 
    RuleRoutingRule = 14, RuleOutboundExpr = 15, RuleFunctionPrototypeExpression = 16, 
    RuleRoutingRuleOrDeclarationOrLiteralOrExpressionList = 17, RuleRoutingRuleList = 18
  };

  explicit dae_configParser(antlr4::TokenStream *input);

  dae_configParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~dae_configParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class Bare_literalContext;
  class Quote_literalContext;
  class LiteralContext;
  class LiteralExpressionContext;
  class InputContext;
  class ProgramStructureBlcokContext;
  class ExpressionContext;
  class DeclarationContext;
  class OptAnnotationContext;
  class FunctionPrototypeContext;
  class OptParameterListContext;
  class NonEmptyParameterListContext;
  class ParameterContext;
  class RoutingRuleContext;
  class OutboundExprContext;
  class FunctionPrototypeExpressionContext;
  class RoutingRuleOrDeclarationOrLiteralOrExpressionListContext;
  class RoutingRuleListContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InputContext *input();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartContext* start();

  class  Bare_literalContext : public antlr4::ParserRuleContext {
  public:
    Bare_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NON_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bare_literalContext* bare_literal();

  class  Quote_literalContext : public antlr4::ParserRuleContext {
  public:
    Quote_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Quote_literalContext* quote_literal();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Quote_literalContext *quote_literal();
    Bare_literalContext *bare_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  LiteralExpressionContext : public antlr4::ParserRuleContext {
  public:
    LiteralExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    LiteralExpressionContext *literalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralExpressionContext* literalExpression();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramStructureBlcokContext *programStructureBlcok();
    InputContext *input();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputContext* input();
  InputContext* input(int precedence);
  class  ProgramStructureBlcokContext : public antlr4::ParserRuleContext {
  public:
    ProgramStructureBlcokContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramStructureBlcokContext* programStructureBlcok();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    RoutingRuleOrDeclarationOrLiteralOrExpressionListContext *routingRuleOrDeclarationOrLiteralOrExpressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    FunctionPrototypeExpressionContext *functionPrototypeExpression();
    OptAnnotationContext *optAnnotation();
    LiteralExpressionContext *literalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  OptAnnotationContext : public antlr4::ParserRuleContext {
  public:
    OptAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptParameterListContext *optParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptAnnotationContext* optAnnotation();

  class  FunctionPrototypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionPrototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    OptParameterListContext *optParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionPrototypeContext* functionPrototype();

  class  OptParameterListContext : public antlr4::ParserRuleContext {
  public:
    OptParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonEmptyParameterListContext *nonEmptyParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptParameterListContext* optParameterList();

  class  NonEmptyParameterListContext : public antlr4::ParserRuleContext {
  public:
    NonEmptyParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();
    NonEmptyParameterListContext *nonEmptyParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NonEmptyParameterListContext* nonEmptyParameterList();
  NonEmptyParameterListContext* nonEmptyParameterList(int precedence);
  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  RoutingRuleContext : public antlr4::ParserRuleContext {
  public:
    RoutingRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrototypeExpressionContext *functionPrototypeExpression();
    OutboundExprContext *outboundExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RoutingRuleContext* routingRule();

  class  OutboundExprContext : public antlr4::ParserRuleContext {
  public:
    OutboundExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bare_literalContext *bare_literal();
    FunctionPrototypeContext *functionPrototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutboundExprContext* outboundExpr();

  class  FunctionPrototypeExpressionContext : public antlr4::ParserRuleContext {
  public:
    FunctionPrototypeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrototypeContext *functionPrototype();
    FunctionPrototypeExpressionContext *functionPrototypeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionPrototypeExpressionContext* functionPrototypeExpression();

  class  RoutingRuleOrDeclarationOrLiteralOrExpressionListContext : public antlr4::ParserRuleContext {
  public:
    RoutingRuleOrDeclarationOrLiteralOrExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoutingRuleContext *routingRule();
    RoutingRuleOrDeclarationOrLiteralOrExpressionListContext *routingRuleOrDeclarationOrLiteralOrExpressionList();
    DeclarationContext *declaration();
    LiteralContext *literal();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RoutingRuleOrDeclarationOrLiteralOrExpressionListContext* routingRuleOrDeclarationOrLiteralOrExpressionList();

  class  RoutingRuleListContext : public antlr4::ParserRuleContext {
  public:
    RoutingRuleListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoutingRuleContext *routingRule();
    RoutingRuleListContext *routingRuleList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RoutingRuleListContext* routingRuleList();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool inputSempred(InputContext *_localctx, size_t predicateIndex);
  bool nonEmptyParameterListSempred(NonEmptyParameterListContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace dae_config
