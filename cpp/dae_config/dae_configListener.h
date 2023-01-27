
// Generated from dae_config.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "dae_configParser.h"


namespace dae_config {

/**
 * This interface defines an abstract listener for a parse tree produced by dae_configParser.
 */
class  dae_configListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart(dae_configParser::StartContext *ctx) = 0;
  virtual void exitStart(dae_configParser::StartContext *ctx) = 0;

  virtual void enterBare_literal(dae_configParser::Bare_literalContext *ctx) = 0;
  virtual void exitBare_literal(dae_configParser::Bare_literalContext *ctx) = 0;

  virtual void enterQuote_literal(dae_configParser::Quote_literalContext *ctx) = 0;
  virtual void exitQuote_literal(dae_configParser::Quote_literalContext *ctx) = 0;

  virtual void enterLiteral(dae_configParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(dae_configParser::LiteralContext *ctx) = 0;

  virtual void enterInput(dae_configParser::InputContext *ctx) = 0;
  virtual void exitInput(dae_configParser::InputContext *ctx) = 0;

  virtual void enterProgramStructureBlcok(dae_configParser::ProgramStructureBlcokContext *ctx) = 0;
  virtual void exitProgramStructureBlcok(dae_configParser::ProgramStructureBlcokContext *ctx) = 0;

  virtual void enterExpression(dae_configParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(dae_configParser::ExpressionContext *ctx) = 0;

  virtual void enterDeclaration(dae_configParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(dae_configParser::DeclarationContext *ctx) = 0;

  virtual void enterFunctionPrototype(dae_configParser::FunctionPrototypeContext *ctx) = 0;
  virtual void exitFunctionPrototype(dae_configParser::FunctionPrototypeContext *ctx) = 0;

  virtual void enterOptParameterList(dae_configParser::OptParameterListContext *ctx) = 0;
  virtual void exitOptParameterList(dae_configParser::OptParameterListContext *ctx) = 0;

  virtual void enterNonEmptyParameterList(dae_configParser::NonEmptyParameterListContext *ctx) = 0;
  virtual void exitNonEmptyParameterList(dae_configParser::NonEmptyParameterListContext *ctx) = 0;

  virtual void enterParameter(dae_configParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(dae_configParser::ParameterContext *ctx) = 0;

  virtual void enterRoutingRule(dae_configParser::RoutingRuleContext *ctx) = 0;
  virtual void exitRoutingRule(dae_configParser::RoutingRuleContext *ctx) = 0;

  virtual void enterRoutingRuleLeft(dae_configParser::RoutingRuleLeftContext *ctx) = 0;
  virtual void exitRoutingRuleLeft(dae_configParser::RoutingRuleLeftContext *ctx) = 0;

  virtual void enterOptFunctionPrototypeExpressionAnd(dae_configParser::OptFunctionPrototypeExpressionAndContext *ctx) = 0;
  virtual void exitOptFunctionPrototypeExpressionAnd(dae_configParser::OptFunctionPrototypeExpressionAndContext *ctx) = 0;

  virtual void enterFunctionPrototypeExpression(dae_configParser::FunctionPrototypeExpressionContext *ctx) = 0;
  virtual void exitFunctionPrototypeExpression(dae_configParser::FunctionPrototypeExpressionContext *ctx) = 0;

  virtual void enterRoutingRuleOrDeclarationOrLiteralOrExpressionList(dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext *ctx) = 0;
  virtual void exitRoutingRuleOrDeclarationOrLiteralOrExpressionList(dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext *ctx) = 0;

  virtual void enterRoutingRuleList(dae_configParser::RoutingRuleListContext *ctx) = 0;
  virtual void exitRoutingRuleList(dae_configParser::RoutingRuleListContext *ctx) = 0;


};

}  // namespace dae_config
