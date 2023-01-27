
// Generated from dae_config.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "dae_configListener.h"


namespace dae_config {

/**
 * This class provides an empty implementation of dae_configListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  dae_configBaseListener : public dae_configListener {
public:

  virtual void enterStart(dae_configParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(dae_configParser::StartContext * /*ctx*/) override { }

  virtual void enterBare_literal(dae_configParser::Bare_literalContext * /*ctx*/) override { }
  virtual void exitBare_literal(dae_configParser::Bare_literalContext * /*ctx*/) override { }

  virtual void enterQuote_literal(dae_configParser::Quote_literalContext * /*ctx*/) override { }
  virtual void exitQuote_literal(dae_configParser::Quote_literalContext * /*ctx*/) override { }

  virtual void enterLiteral(dae_configParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(dae_configParser::LiteralContext * /*ctx*/) override { }

  virtual void enterInput(dae_configParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(dae_configParser::InputContext * /*ctx*/) override { }

  virtual void enterProgramStructureBlcok(dae_configParser::ProgramStructureBlcokContext * /*ctx*/) override { }
  virtual void exitProgramStructureBlcok(dae_configParser::ProgramStructureBlcokContext * /*ctx*/) override { }

  virtual void enterExpression(dae_configParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(dae_configParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterDeclaration(dae_configParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(dae_configParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionPrototype(dae_configParser::FunctionPrototypeContext * /*ctx*/) override { }
  virtual void exitFunctionPrototype(dae_configParser::FunctionPrototypeContext * /*ctx*/) override { }

  virtual void enterOptParameterList(dae_configParser::OptParameterListContext * /*ctx*/) override { }
  virtual void exitOptParameterList(dae_configParser::OptParameterListContext * /*ctx*/) override { }

  virtual void enterNonEmptyParameterList(dae_configParser::NonEmptyParameterListContext * /*ctx*/) override { }
  virtual void exitNonEmptyParameterList(dae_configParser::NonEmptyParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(dae_configParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(dae_configParser::ParameterContext * /*ctx*/) override { }

  virtual void enterRoutingRule(dae_configParser::RoutingRuleContext * /*ctx*/) override { }
  virtual void exitRoutingRule(dae_configParser::RoutingRuleContext * /*ctx*/) override { }

  virtual void enterRoutingRuleLeft(dae_configParser::RoutingRuleLeftContext * /*ctx*/) override { }
  virtual void exitRoutingRuleLeft(dae_configParser::RoutingRuleLeftContext * /*ctx*/) override { }

  virtual void enterOptFunctionPrototypeExpressionAnd(dae_configParser::OptFunctionPrototypeExpressionAndContext * /*ctx*/) override { }
  virtual void exitOptFunctionPrototypeExpressionAnd(dae_configParser::OptFunctionPrototypeExpressionAndContext * /*ctx*/) override { }

  virtual void enterFunctionPrototypeExpression(dae_configParser::FunctionPrototypeExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionPrototypeExpression(dae_configParser::FunctionPrototypeExpressionContext * /*ctx*/) override { }

  virtual void enterRoutingRuleOrDeclarationOrLiteralOrExpressionList(dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext * /*ctx*/) override { }
  virtual void exitRoutingRuleOrDeclarationOrLiteralOrExpressionList(dae_configParser::RoutingRuleOrDeclarationOrLiteralOrExpressionListContext * /*ctx*/) override { }

  virtual void enterRoutingRuleList(dae_configParser::RoutingRuleListContext * /*ctx*/) override { }
  virtual void exitRoutingRuleList(dae_configParser::RoutingRuleListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace dae_config
