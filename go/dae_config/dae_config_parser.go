// Code generated from java-escape by ANTLR 4.11.1. DO NOT EDIT.

package dae_config // dae_config
import (
	"fmt"
	"strconv"
	"sync"

	"github.com/antlr/antlr4/runtime/Go/antlr/v4"
)

// Suppress unused import errors
var _ = fmt.Printf
var _ = strconv.Itoa
var _ = sync.Once{}

type dae_configParser struct {
	*antlr.BaseParser
}

var dae_configParserStaticData struct {
	once                   sync.Once
	serializedATN          []int32
	literalNames           []string
	symbolicNames          []string
	ruleNames              []string
	predictionContextCache *antlr.PredictionContextCache
	atn                    *antlr.ATN
	decisionToDFA          []*antlr.DFA
}

func dae_configParserInit() {
	staticData := &dae_configParserStaticData
	staticData.literalNames = []string{
		"", "','", "'{'", "'}'", "':'", "'!'", "'('", "')'", "'->'", "'&&'",
	}
	staticData.symbolicNames = []string{
		"", "", "", "", "", "", "", "", "", "", "WHITESPACE", "COMMENT_BLOCK",
		"COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING",
	}
	staticData.ruleNames = []string{
		"start", "bare_literal", "quote_literal", "literal", "literalExpression",
		"input", "programStructureBlcok", "expression", "declaration", "functionPrototype",
		"optParameterList", "nonEmptyParameterList", "parameter", "routingRule",
		"outboundExpr", "functionPrototypeExpression", "routingRuleOrDeclarationOrLiteralOrExpressionList",
		"routingRuleList",
	}
	staticData.predictionContextCache = antlr.NewPredictionContextCache()
	staticData.serializedATN = []int32{
		4, 1, 15, 147, 2, 0, 7, 0, 2, 1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 7,
		4, 2, 5, 7, 5, 2, 6, 7, 6, 2, 7, 7, 7, 2, 8, 7, 8, 2, 9, 7, 9, 2, 10, 7,
		10, 2, 11, 7, 11, 2, 12, 7, 12, 2, 13, 7, 13, 2, 14, 7, 14, 2, 15, 7, 15,
		2, 16, 7, 16, 2, 17, 7, 17, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 2, 1, 2, 1,
		3, 1, 3, 3, 3, 46, 8, 3, 1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 3, 4, 53, 8, 4,
		1, 5, 1, 5, 1, 5, 3, 5, 58, 8, 5, 1, 5, 1, 5, 5, 5, 62, 8, 5, 10, 5, 12,
		5, 65, 9, 5, 1, 6, 1, 6, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 8, 1, 8, 1, 8,
		1, 8, 1, 8, 1, 8, 3, 8, 80, 8, 8, 1, 9, 3, 9, 83, 8, 9, 1, 9, 1, 9, 1,
		9, 1, 9, 1, 9, 1, 10, 1, 10, 3, 10, 92, 8, 10, 1, 11, 1, 11, 1, 11, 1,
		11, 1, 11, 1, 11, 5, 11, 100, 8, 11, 10, 11, 12, 11, 103, 9, 11, 1, 12,
		1, 12, 1, 12, 1, 12, 3, 12, 109, 8, 12, 1, 13, 1, 13, 1, 13, 1, 13, 1,
		14, 1, 14, 3, 14, 117, 8, 14, 1, 15, 1, 15, 1, 15, 1, 15, 1, 15, 3, 15,
		124, 8, 15, 1, 16, 1, 16, 1, 16, 1, 16, 1, 16, 1, 16, 1, 16, 1, 16, 1,
		16, 1, 16, 1, 16, 1, 16, 1, 16, 3, 16, 139, 8, 16, 1, 17, 1, 17, 1, 17,
		1, 17, 3, 17, 145, 8, 17, 1, 17, 0, 2, 10, 22, 18, 0, 2, 4, 6, 8, 10, 12,
		14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 0, 1, 1, 0, 13, 14, 144, 0,
		36, 1, 0, 0, 0, 2, 39, 1, 0, 0, 0, 4, 41, 1, 0, 0, 0, 6, 45, 1, 0, 0, 0,
		8, 52, 1, 0, 0, 0, 10, 57, 1, 0, 0, 0, 12, 66, 1, 0, 0, 0, 14, 68, 1, 0,
		0, 0, 16, 79, 1, 0, 0, 0, 18, 82, 1, 0, 0, 0, 20, 91, 1, 0, 0, 0, 22, 93,
		1, 0, 0, 0, 24, 108, 1, 0, 0, 0, 26, 110, 1, 0, 0, 0, 28, 116, 1, 0, 0,
		0, 30, 123, 1, 0, 0, 0, 32, 138, 1, 0, 0, 0, 34, 144, 1, 0, 0, 0, 36, 37,
		3, 10, 5, 0, 37, 38, 5, 0, 0, 1, 38, 1, 1, 0, 0, 0, 39, 40, 7, 0, 0, 0,
		40, 3, 1, 0, 0, 0, 41, 42, 5, 15, 0, 0, 42, 5, 1, 0, 0, 0, 43, 46, 3, 4,
		2, 0, 44, 46, 3, 2, 1, 0, 45, 43, 1, 0, 0, 0, 45, 44, 1, 0, 0, 0, 46, 7,
		1, 0, 0, 0, 47, 48, 3, 6, 3, 0, 48, 49, 5, 1, 0, 0, 49, 50, 3, 8, 4, 0,
		50, 53, 1, 0, 0, 0, 51, 53, 3, 6, 3, 0, 52, 47, 1, 0, 0, 0, 52, 51, 1,
		0, 0, 0, 53, 9, 1, 0, 0, 0, 54, 55, 6, 5, -1, 0, 55, 58, 3, 12, 6, 0, 56,
		58, 1, 0, 0, 0, 57, 54, 1, 0, 0, 0, 57, 56, 1, 0, 0, 0, 58, 63, 1, 0, 0,
		0, 59, 60, 10, 2, 0, 0, 60, 62, 3, 12, 6, 0, 61, 59, 1, 0, 0, 0, 62, 65,
		1, 0, 0, 0, 63, 61, 1, 0, 0, 0, 63, 64, 1, 0, 0, 0, 64, 11, 1, 0, 0, 0,
		65, 63, 1, 0, 0, 0, 66, 67, 3, 14, 7, 0, 67, 13, 1, 0, 0, 0, 68, 69, 5,
		13, 0, 0, 69, 70, 5, 2, 0, 0, 70, 71, 3, 32, 16, 0, 71, 72, 5, 3, 0, 0,
		72, 15, 1, 0, 0, 0, 73, 74, 5, 13, 0, 0, 74, 75, 5, 4, 0, 0, 75, 80, 3,
		30, 15, 0, 76, 77, 5, 13, 0, 0, 77, 78, 5, 4, 0, 0, 78, 80, 3, 8, 4, 0,
		79, 73, 1, 0, 0, 0, 79, 76, 1, 0, 0, 0, 80, 17, 1, 0, 0, 0, 81, 83, 5,
		5, 0, 0, 82, 81, 1, 0, 0, 0, 82, 83, 1, 0, 0, 0, 83, 84, 1, 0, 0, 0, 84,
		85, 5, 13, 0, 0, 85, 86, 5, 6, 0, 0, 86, 87, 3, 20, 10, 0, 87, 88, 5, 7,
		0, 0, 88, 19, 1, 0, 0, 0, 89, 92, 3, 22, 11, 0, 90, 92, 1, 0, 0, 0, 91,
		89, 1, 0, 0, 0, 91, 90, 1, 0, 0, 0, 92, 21, 1, 0, 0, 0, 93, 94, 6, 11,
		-1, 0, 94, 95, 3, 24, 12, 0, 95, 101, 1, 0, 0, 0, 96, 97, 10, 1, 0, 0,
		97, 98, 5, 1, 0, 0, 98, 100, 3, 24, 12, 0, 99, 96, 1, 0, 0, 0, 100, 103,
		1, 0, 0, 0, 101, 99, 1, 0, 0, 0, 101, 102, 1, 0, 0, 0, 102, 23, 1, 0, 0,
		0, 103, 101, 1, 0, 0, 0, 104, 105, 5, 13, 0, 0, 105, 106, 5, 4, 0, 0, 106,
		109, 3, 6, 3, 0, 107, 109, 3, 6, 3, 0, 108, 104, 1, 0, 0, 0, 108, 107,
		1, 0, 0, 0, 109, 25, 1, 0, 0, 0, 110, 111, 3, 30, 15, 0, 111, 112, 5, 8,
		0, 0, 112, 113, 3, 28, 14, 0, 113, 27, 1, 0, 0, 0, 114, 117, 3, 2, 1, 0,
		115, 117, 3, 18, 9, 0, 116, 114, 1, 0, 0, 0, 116, 115, 1, 0, 0, 0, 117,
		29, 1, 0, 0, 0, 118, 124, 3, 18, 9, 0, 119, 120, 3, 18, 9, 0, 120, 121,
		5, 9, 0, 0, 121, 122, 3, 30, 15, 0, 122, 124, 1, 0, 0, 0, 123, 118, 1,
		0, 0, 0, 123, 119, 1, 0, 0, 0, 124, 31, 1, 0, 0, 0, 125, 126, 3, 26, 13,
		0, 126, 127, 3, 32, 16, 0, 127, 139, 1, 0, 0, 0, 128, 129, 3, 16, 8, 0,
		129, 130, 3, 32, 16, 0, 130, 139, 1, 0, 0, 0, 131, 132, 3, 6, 3, 0, 132,
		133, 3, 32, 16, 0, 133, 139, 1, 0, 0, 0, 134, 135, 3, 14, 7, 0, 135, 136,
		3, 32, 16, 0, 136, 139, 1, 0, 0, 0, 137, 139, 1, 0, 0, 0, 138, 125, 1,
		0, 0, 0, 138, 128, 1, 0, 0, 0, 138, 131, 1, 0, 0, 0, 138, 134, 1, 0, 0,
		0, 138, 137, 1, 0, 0, 0, 139, 33, 1, 0, 0, 0, 140, 145, 3, 26, 13, 0, 141,
		142, 3, 26, 13, 0, 142, 143, 3, 34, 17, 0, 143, 145, 1, 0, 0, 0, 144, 140,
		1, 0, 0, 0, 144, 141, 1, 0, 0, 0, 145, 35, 1, 0, 0, 0, 13, 45, 52, 57,
		63, 79, 82, 91, 101, 108, 116, 123, 138, 144,
	}
	deserializer := antlr.NewATNDeserializer(nil)
	staticData.atn = deserializer.Deserialize(staticData.serializedATN)
	atn := staticData.atn
	staticData.decisionToDFA = make([]*antlr.DFA, len(atn.DecisionToState))
	decisionToDFA := staticData.decisionToDFA
	for index, state := range atn.DecisionToState {
		decisionToDFA[index] = antlr.NewDFA(state, index)
	}
}

// dae_configParserInit initializes any static state used to implement dae_configParser. By default the
// static state used to implement the parser is lazily initialized during the first call to
// Newdae_configParser(). You can call this function if you wish to initialize the static state ahead
// of time.
func Dae_configParserInit() {
	staticData := &dae_configParserStaticData
	staticData.once.Do(dae_configParserInit)
}

// Newdae_configParser produces a new parser instance for the optional input antlr.TokenStream.
func Newdae_configParser(input antlr.TokenStream) *dae_configParser {
	Dae_configParserInit()
	this := new(dae_configParser)
	this.BaseParser = antlr.NewBaseParser(input)
	staticData := &dae_configParserStaticData
	this.Interpreter = antlr.NewParserATNSimulator(this, staticData.atn, staticData.decisionToDFA, staticData.predictionContextCache)
	this.RuleNames = staticData.ruleNames
	this.LiteralNames = staticData.literalNames
	this.SymbolicNames = staticData.symbolicNames
	this.GrammarFileName = "java-escape"

	return this
}

// dae_configParser tokens.
const (
	dae_configParserEOF                = antlr.TokenEOF
	dae_configParserT__0               = 1
	dae_configParserT__1               = 2
	dae_configParserT__2               = 3
	dae_configParserT__3               = 4
	dae_configParserT__4               = 5
	dae_configParserT__5               = 6
	dae_configParserT__6               = 7
	dae_configParserT__7               = 8
	dae_configParserT__8               = 9
	dae_configParserWHITESPACE         = 10
	dae_configParserCOMMENT_BLOCK      = 11
	dae_configParserCOMMENT_LINE_SHARP = 12
	dae_configParserID                 = 13
	dae_configParserNON_ID             = 14
	dae_configParserQUOTE_STRING       = 15
)

// dae_configParser rules.
const (
	dae_configParserRULE_start                                             = 0
	dae_configParserRULE_bare_literal                                      = 1
	dae_configParserRULE_quote_literal                                     = 2
	dae_configParserRULE_literal                                           = 3
	dae_configParserRULE_literalExpression                                 = 4
	dae_configParserRULE_input                                             = 5
	dae_configParserRULE_programStructureBlcok                             = 6
	dae_configParserRULE_expression                                        = 7
	dae_configParserRULE_declaration                                       = 8
	dae_configParserRULE_functionPrototype                                 = 9
	dae_configParserRULE_optParameterList                                  = 10
	dae_configParserRULE_nonEmptyParameterList                             = 11
	dae_configParserRULE_parameter                                         = 12
	dae_configParserRULE_routingRule                                       = 13
	dae_configParserRULE_outboundExpr                                      = 14
	dae_configParserRULE_functionPrototypeExpression                       = 15
	dae_configParserRULE_routingRuleOrDeclarationOrLiteralOrExpressionList = 16
	dae_configParserRULE_routingRuleList                                   = 17
)

// IStartContext is an interface to support dynamic dispatch.
type IStartContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsStartContext differentiates from other interfaces.
	IsStartContext()
}

type StartContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyStartContext() *StartContext {
	var p = new(StartContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_start
	return p
}

func (*StartContext) IsStartContext() {}

func NewStartContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *StartContext {
	var p = new(StartContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_start

	return p
}

func (s *StartContext) GetParser() antlr.Parser { return s.parser }

func (s *StartContext) Input() IInputContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IInputContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IInputContext)
}

func (s *StartContext) EOF() antlr.TerminalNode {
	return s.GetToken(dae_configParserEOF, 0)
}

func (s *StartContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *StartContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *StartContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterStart(s)
	}
}

func (s *StartContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitStart(s)
	}
}

func (p *dae_configParser) Start() (localctx IStartContext) {
	this := p
	_ = this

	localctx = NewStartContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 0, dae_configParserRULE_start)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(36)
		p.input(0)
	}
	{
		p.SetState(37)
		p.Match(dae_configParserEOF)
	}

	return localctx
}

// IBare_literalContext is an interface to support dynamic dispatch.
type IBare_literalContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsBare_literalContext differentiates from other interfaces.
	IsBare_literalContext()
}

type Bare_literalContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyBare_literalContext() *Bare_literalContext {
	var p = new(Bare_literalContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_bare_literal
	return p
}

func (*Bare_literalContext) IsBare_literalContext() {}

func NewBare_literalContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *Bare_literalContext {
	var p = new(Bare_literalContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_bare_literal

	return p
}

func (s *Bare_literalContext) GetParser() antlr.Parser { return s.parser }

func (s *Bare_literalContext) ID() antlr.TerminalNode {
	return s.GetToken(dae_configParserID, 0)
}

func (s *Bare_literalContext) NON_ID() antlr.TerminalNode {
	return s.GetToken(dae_configParserNON_ID, 0)
}

func (s *Bare_literalContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *Bare_literalContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *Bare_literalContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterBare_literal(s)
	}
}

func (s *Bare_literalContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitBare_literal(s)
	}
}

func (p *dae_configParser) Bare_literal() (localctx IBare_literalContext) {
	this := p
	_ = this

	localctx = NewBare_literalContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 2, dae_configParserRULE_bare_literal)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(39)
		_la = p.GetTokenStream().LA(1)

		if !(_la == dae_configParserID || _la == dae_configParserNON_ID) {
			p.GetErrorHandler().RecoverInline(p)
		} else {
			p.GetErrorHandler().ReportMatch(p)
			p.Consume()
		}
	}

	return localctx
}

// IQuote_literalContext is an interface to support dynamic dispatch.
type IQuote_literalContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsQuote_literalContext differentiates from other interfaces.
	IsQuote_literalContext()
}

type Quote_literalContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyQuote_literalContext() *Quote_literalContext {
	var p = new(Quote_literalContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_quote_literal
	return p
}

func (*Quote_literalContext) IsQuote_literalContext() {}

func NewQuote_literalContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *Quote_literalContext {
	var p = new(Quote_literalContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_quote_literal

	return p
}

func (s *Quote_literalContext) GetParser() antlr.Parser { return s.parser }

func (s *Quote_literalContext) QUOTE_STRING() antlr.TerminalNode {
	return s.GetToken(dae_configParserQUOTE_STRING, 0)
}

func (s *Quote_literalContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *Quote_literalContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *Quote_literalContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterQuote_literal(s)
	}
}

func (s *Quote_literalContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitQuote_literal(s)
	}
}

func (p *dae_configParser) Quote_literal() (localctx IQuote_literalContext) {
	this := p
	_ = this

	localctx = NewQuote_literalContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 4, dae_configParserRULE_quote_literal)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(41)
		p.Match(dae_configParserQUOTE_STRING)
	}

	return localctx
}

// ILiteralContext is an interface to support dynamic dispatch.
type ILiteralContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsLiteralContext differentiates from other interfaces.
	IsLiteralContext()
}

type LiteralContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyLiteralContext() *LiteralContext {
	var p = new(LiteralContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_literal
	return p
}

func (*LiteralContext) IsLiteralContext() {}

func NewLiteralContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *LiteralContext {
	var p = new(LiteralContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_literal

	return p
}

func (s *LiteralContext) GetParser() antlr.Parser { return s.parser }

func (s *LiteralContext) Quote_literal() IQuote_literalContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IQuote_literalContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IQuote_literalContext)
}

func (s *LiteralContext) Bare_literal() IBare_literalContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IBare_literalContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IBare_literalContext)
}

func (s *LiteralContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *LiteralContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *LiteralContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterLiteral(s)
	}
}

func (s *LiteralContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitLiteral(s)
	}
}

func (p *dae_configParser) Literal() (localctx ILiteralContext) {
	this := p
	_ = this

	localctx = NewLiteralContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 6, dae_configParserRULE_literal)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(45)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case dae_configParserQUOTE_STRING:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(43)
			p.Quote_literal()
		}

	case dae_configParserID, dae_configParserNON_ID:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(44)
			p.Bare_literal()
		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}

	return localctx
}

// ILiteralExpressionContext is an interface to support dynamic dispatch.
type ILiteralExpressionContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsLiteralExpressionContext differentiates from other interfaces.
	IsLiteralExpressionContext()
}

type LiteralExpressionContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyLiteralExpressionContext() *LiteralExpressionContext {
	var p = new(LiteralExpressionContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_literalExpression
	return p
}

func (*LiteralExpressionContext) IsLiteralExpressionContext() {}

func NewLiteralExpressionContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *LiteralExpressionContext {
	var p = new(LiteralExpressionContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_literalExpression

	return p
}

func (s *LiteralExpressionContext) GetParser() antlr.Parser { return s.parser }

func (s *LiteralExpressionContext) Literal() ILiteralContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(ILiteralContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(ILiteralContext)
}

func (s *LiteralExpressionContext) LiteralExpression() ILiteralExpressionContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(ILiteralExpressionContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(ILiteralExpressionContext)
}

func (s *LiteralExpressionContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *LiteralExpressionContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *LiteralExpressionContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterLiteralExpression(s)
	}
}

func (s *LiteralExpressionContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitLiteralExpression(s)
	}
}

func (p *dae_configParser) LiteralExpression() (localctx ILiteralExpressionContext) {
	this := p
	_ = this

	localctx = NewLiteralExpressionContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 8, dae_configParserRULE_literalExpression)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(52)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 1, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(47)
			p.Literal()
		}
		{
			p.SetState(48)
			p.Match(dae_configParserT__0)
		}
		{
			p.SetState(49)
			p.LiteralExpression()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(51)
			p.Literal()
		}

	}

	return localctx
}

// IInputContext is an interface to support dynamic dispatch.
type IInputContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsInputContext differentiates from other interfaces.
	IsInputContext()
}

type InputContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyInputContext() *InputContext {
	var p = new(InputContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_input
	return p
}

func (*InputContext) IsInputContext() {}

func NewInputContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *InputContext {
	var p = new(InputContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_input

	return p
}

func (s *InputContext) GetParser() antlr.Parser { return s.parser }

func (s *InputContext) ProgramStructureBlcok() IProgramStructureBlcokContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IProgramStructureBlcokContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IProgramStructureBlcokContext)
}

func (s *InputContext) Input() IInputContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IInputContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IInputContext)
}

func (s *InputContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *InputContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *InputContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterInput(s)
	}
}

func (s *InputContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitInput(s)
	}
}

func (p *dae_configParser) Input() (localctx IInputContext) {
	return p.input(0)
}

func (p *dae_configParser) input(_p int) (localctx IInputContext) {
	this := p
	_ = this

	var _parentctx antlr.ParserRuleContext = p.GetParserRuleContext()
	_parentState := p.GetState()
	localctx = NewInputContext(p, p.GetParserRuleContext(), _parentState)
	var _prevctx IInputContext = localctx
	var _ antlr.ParserRuleContext = _prevctx // TODO: To prevent unused variable warning.
	_startState := 10
	p.EnterRecursionRule(localctx, 10, dae_configParserRULE_input, _p)

	defer func() {
		p.UnrollRecursionContexts(_parentctx)
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	var _alt int

	p.EnterOuterAlt(localctx, 1)
	p.SetState(57)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 2, p.GetParserRuleContext()) {
	case 1:
		{
			p.SetState(55)
			p.ProgramStructureBlcok()
		}

	case 2:

	}
	p.GetParserRuleContext().SetStop(p.GetTokenStream().LT(-1))
	p.SetState(63)
	p.GetErrorHandler().Sync(p)
	_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 3, p.GetParserRuleContext())

	for _alt != 2 && _alt != antlr.ATNInvalidAltNumber {
		if _alt == 1 {
			if p.GetParseListeners() != nil {
				p.TriggerExitRuleEvent()
			}
			_prevctx = localctx
			localctx = NewInputContext(p, _parentctx, _parentState)
			p.PushNewRecursionContext(localctx, _startState, dae_configParserRULE_input)
			p.SetState(59)

			if !(p.Precpred(p.GetParserRuleContext(), 2)) {
				panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 2)", ""))
			}
			{
				p.SetState(60)
				p.ProgramStructureBlcok()
			}

		}
		p.SetState(65)
		p.GetErrorHandler().Sync(p)
		_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 3, p.GetParserRuleContext())
	}

	return localctx
}

// IProgramStructureBlcokContext is an interface to support dynamic dispatch.
type IProgramStructureBlcokContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsProgramStructureBlcokContext differentiates from other interfaces.
	IsProgramStructureBlcokContext()
}

type ProgramStructureBlcokContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyProgramStructureBlcokContext() *ProgramStructureBlcokContext {
	var p = new(ProgramStructureBlcokContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_programStructureBlcok
	return p
}

func (*ProgramStructureBlcokContext) IsProgramStructureBlcokContext() {}

func NewProgramStructureBlcokContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ProgramStructureBlcokContext {
	var p = new(ProgramStructureBlcokContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_programStructureBlcok

	return p
}

func (s *ProgramStructureBlcokContext) GetParser() antlr.Parser { return s.parser }

func (s *ProgramStructureBlcokContext) Expression() IExpressionContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IExpressionContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IExpressionContext)
}

func (s *ProgramStructureBlcokContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ProgramStructureBlcokContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ProgramStructureBlcokContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterProgramStructureBlcok(s)
	}
}

func (s *ProgramStructureBlcokContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitProgramStructureBlcok(s)
	}
}

func (p *dae_configParser) ProgramStructureBlcok() (localctx IProgramStructureBlcokContext) {
	this := p
	_ = this

	localctx = NewProgramStructureBlcokContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 12, dae_configParserRULE_programStructureBlcok)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(66)
		p.Expression()
	}

	return localctx
}

// IExpressionContext is an interface to support dynamic dispatch.
type IExpressionContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsExpressionContext differentiates from other interfaces.
	IsExpressionContext()
}

type ExpressionContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyExpressionContext() *ExpressionContext {
	var p = new(ExpressionContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_expression
	return p
}

func (*ExpressionContext) IsExpressionContext() {}

func NewExpressionContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ExpressionContext {
	var p = new(ExpressionContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_expression

	return p
}

func (s *ExpressionContext) GetParser() antlr.Parser { return s.parser }

func (s *ExpressionContext) ID() antlr.TerminalNode {
	return s.GetToken(dae_configParserID, 0)
}

func (s *ExpressionContext) RoutingRuleOrDeclarationOrLiteralOrExpressionList() IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext)
}

func (s *ExpressionContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ExpressionContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ExpressionContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterExpression(s)
	}
}

func (s *ExpressionContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitExpression(s)
	}
}

func (p *dae_configParser) Expression() (localctx IExpressionContext) {
	this := p
	_ = this

	localctx = NewExpressionContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 14, dae_configParserRULE_expression)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(68)
		p.Match(dae_configParserID)
	}
	{
		p.SetState(69)
		p.Match(dae_configParserT__1)
	}
	{
		p.SetState(70)
		p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
	}
	{
		p.SetState(71)
		p.Match(dae_configParserT__2)
	}

	return localctx
}

// IDeclarationContext is an interface to support dynamic dispatch.
type IDeclarationContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsDeclarationContext differentiates from other interfaces.
	IsDeclarationContext()
}

type DeclarationContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyDeclarationContext() *DeclarationContext {
	var p = new(DeclarationContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_declaration
	return p
}

func (*DeclarationContext) IsDeclarationContext() {}

func NewDeclarationContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *DeclarationContext {
	var p = new(DeclarationContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_declaration

	return p
}

func (s *DeclarationContext) GetParser() antlr.Parser { return s.parser }

func (s *DeclarationContext) ID() antlr.TerminalNode {
	return s.GetToken(dae_configParserID, 0)
}

func (s *DeclarationContext) FunctionPrototypeExpression() IFunctionPrototypeExpressionContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IFunctionPrototypeExpressionContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IFunctionPrototypeExpressionContext)
}

func (s *DeclarationContext) LiteralExpression() ILiteralExpressionContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(ILiteralExpressionContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(ILiteralExpressionContext)
}

func (s *DeclarationContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *DeclarationContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *DeclarationContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterDeclaration(s)
	}
}

func (s *DeclarationContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitDeclaration(s)
	}
}

func (p *dae_configParser) Declaration() (localctx IDeclarationContext) {
	this := p
	_ = this

	localctx = NewDeclarationContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 16, dae_configParserRULE_declaration)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(79)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 4, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(73)
			p.Match(dae_configParserID)
		}
		{
			p.SetState(74)
			p.Match(dae_configParserT__3)
		}
		{
			p.SetState(75)
			p.FunctionPrototypeExpression()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(76)
			p.Match(dae_configParserID)
		}
		{
			p.SetState(77)
			p.Match(dae_configParserT__3)
		}
		{
			p.SetState(78)
			p.LiteralExpression()
		}

	}

	return localctx
}

// IFunctionPrototypeContext is an interface to support dynamic dispatch.
type IFunctionPrototypeContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsFunctionPrototypeContext differentiates from other interfaces.
	IsFunctionPrototypeContext()
}

type FunctionPrototypeContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyFunctionPrototypeContext() *FunctionPrototypeContext {
	var p = new(FunctionPrototypeContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_functionPrototype
	return p
}

func (*FunctionPrototypeContext) IsFunctionPrototypeContext() {}

func NewFunctionPrototypeContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *FunctionPrototypeContext {
	var p = new(FunctionPrototypeContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_functionPrototype

	return p
}

func (s *FunctionPrototypeContext) GetParser() antlr.Parser { return s.parser }

func (s *FunctionPrototypeContext) ID() antlr.TerminalNode {
	return s.GetToken(dae_configParserID, 0)
}

func (s *FunctionPrototypeContext) OptParameterList() IOptParameterListContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IOptParameterListContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IOptParameterListContext)
}

func (s *FunctionPrototypeContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *FunctionPrototypeContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *FunctionPrototypeContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterFunctionPrototype(s)
	}
}

func (s *FunctionPrototypeContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitFunctionPrototype(s)
	}
}

func (p *dae_configParser) FunctionPrototype() (localctx IFunctionPrototypeContext) {
	this := p
	_ = this

	localctx = NewFunctionPrototypeContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 18, dae_configParserRULE_functionPrototype)
	var _la int

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	p.SetState(82)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == dae_configParserT__4 {
		{
			p.SetState(81)
			p.Match(dae_configParserT__4)
		}

	}
	{
		p.SetState(84)
		p.Match(dae_configParserID)
	}
	{
		p.SetState(85)
		p.Match(dae_configParserT__5)
	}
	{
		p.SetState(86)
		p.OptParameterList()
	}
	{
		p.SetState(87)
		p.Match(dae_configParserT__6)
	}

	return localctx
}

// IOptParameterListContext is an interface to support dynamic dispatch.
type IOptParameterListContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsOptParameterListContext differentiates from other interfaces.
	IsOptParameterListContext()
}

type OptParameterListContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyOptParameterListContext() *OptParameterListContext {
	var p = new(OptParameterListContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_optParameterList
	return p
}

func (*OptParameterListContext) IsOptParameterListContext() {}

func NewOptParameterListContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *OptParameterListContext {
	var p = new(OptParameterListContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_optParameterList

	return p
}

func (s *OptParameterListContext) GetParser() antlr.Parser { return s.parser }

func (s *OptParameterListContext) NonEmptyParameterList() INonEmptyParameterListContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(INonEmptyParameterListContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(INonEmptyParameterListContext)
}

func (s *OptParameterListContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *OptParameterListContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *OptParameterListContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterOptParameterList(s)
	}
}

func (s *OptParameterListContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitOptParameterList(s)
	}
}

func (p *dae_configParser) OptParameterList() (localctx IOptParameterListContext) {
	this := p
	_ = this

	localctx = NewOptParameterListContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 20, dae_configParserRULE_optParameterList)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(91)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case dae_configParserID, dae_configParserNON_ID, dae_configParserQUOTE_STRING:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(89)
			p.nonEmptyParameterList(0)
		}

	case dae_configParserT__6:
		p.EnterOuterAlt(localctx, 2)

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
	}

	return localctx
}

// INonEmptyParameterListContext is an interface to support dynamic dispatch.
type INonEmptyParameterListContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsNonEmptyParameterListContext differentiates from other interfaces.
	IsNonEmptyParameterListContext()
}

type NonEmptyParameterListContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyNonEmptyParameterListContext() *NonEmptyParameterListContext {
	var p = new(NonEmptyParameterListContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_nonEmptyParameterList
	return p
}

func (*NonEmptyParameterListContext) IsNonEmptyParameterListContext() {}

func NewNonEmptyParameterListContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *NonEmptyParameterListContext {
	var p = new(NonEmptyParameterListContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_nonEmptyParameterList

	return p
}

func (s *NonEmptyParameterListContext) GetParser() antlr.Parser { return s.parser }

func (s *NonEmptyParameterListContext) Parameter() IParameterContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IParameterContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IParameterContext)
}

func (s *NonEmptyParameterListContext) NonEmptyParameterList() INonEmptyParameterListContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(INonEmptyParameterListContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(INonEmptyParameterListContext)
}

func (s *NonEmptyParameterListContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *NonEmptyParameterListContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *NonEmptyParameterListContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterNonEmptyParameterList(s)
	}
}

func (s *NonEmptyParameterListContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitNonEmptyParameterList(s)
	}
}

func (p *dae_configParser) NonEmptyParameterList() (localctx INonEmptyParameterListContext) {
	return p.nonEmptyParameterList(0)
}

func (p *dae_configParser) nonEmptyParameterList(_p int) (localctx INonEmptyParameterListContext) {
	this := p
	_ = this

	var _parentctx antlr.ParserRuleContext = p.GetParserRuleContext()
	_parentState := p.GetState()
	localctx = NewNonEmptyParameterListContext(p, p.GetParserRuleContext(), _parentState)
	var _prevctx INonEmptyParameterListContext = localctx
	var _ antlr.ParserRuleContext = _prevctx // TODO: To prevent unused variable warning.
	_startState := 22
	p.EnterRecursionRule(localctx, 22, dae_configParserRULE_nonEmptyParameterList, _p)

	defer func() {
		p.UnrollRecursionContexts(_parentctx)
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	var _alt int

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(94)
		p.Parameter()
	}

	p.GetParserRuleContext().SetStop(p.GetTokenStream().LT(-1))
	p.SetState(101)
	p.GetErrorHandler().Sync(p)
	_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 7, p.GetParserRuleContext())

	for _alt != 2 && _alt != antlr.ATNInvalidAltNumber {
		if _alt == 1 {
			if p.GetParseListeners() != nil {
				p.TriggerExitRuleEvent()
			}
			_prevctx = localctx
			localctx = NewNonEmptyParameterListContext(p, _parentctx, _parentState)
			p.PushNewRecursionContext(localctx, _startState, dae_configParserRULE_nonEmptyParameterList)
			p.SetState(96)

			if !(p.Precpred(p.GetParserRuleContext(), 1)) {
				panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 1)", ""))
			}
			{
				p.SetState(97)
				p.Match(dae_configParserT__0)
			}
			{
				p.SetState(98)
				p.Parameter()
			}

		}
		p.SetState(103)
		p.GetErrorHandler().Sync(p)
		_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 7, p.GetParserRuleContext())
	}

	return localctx
}

// IParameterContext is an interface to support dynamic dispatch.
type IParameterContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsParameterContext differentiates from other interfaces.
	IsParameterContext()
}

type ParameterContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyParameterContext() *ParameterContext {
	var p = new(ParameterContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_parameter
	return p
}

func (*ParameterContext) IsParameterContext() {}

func NewParameterContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *ParameterContext {
	var p = new(ParameterContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_parameter

	return p
}

func (s *ParameterContext) GetParser() antlr.Parser { return s.parser }

func (s *ParameterContext) ID() antlr.TerminalNode {
	return s.GetToken(dae_configParserID, 0)
}

func (s *ParameterContext) Literal() ILiteralContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(ILiteralContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(ILiteralContext)
}

func (s *ParameterContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *ParameterContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *ParameterContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterParameter(s)
	}
}

func (s *ParameterContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitParameter(s)
	}
}

func (p *dae_configParser) Parameter() (localctx IParameterContext) {
	this := p
	_ = this

	localctx = NewParameterContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 24, dae_configParserRULE_parameter)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(108)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 8, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(104)
			p.Match(dae_configParserID)
		}
		{
			p.SetState(105)
			p.Match(dae_configParserT__3)
		}
		{
			p.SetState(106)
			p.Literal()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(107)
			p.Literal()
		}

	}

	return localctx
}

// IRoutingRuleContext is an interface to support dynamic dispatch.
type IRoutingRuleContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsRoutingRuleContext differentiates from other interfaces.
	IsRoutingRuleContext()
}

type RoutingRuleContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyRoutingRuleContext() *RoutingRuleContext {
	var p = new(RoutingRuleContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_routingRule
	return p
}

func (*RoutingRuleContext) IsRoutingRuleContext() {}

func NewRoutingRuleContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *RoutingRuleContext {
	var p = new(RoutingRuleContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_routingRule

	return p
}

func (s *RoutingRuleContext) GetParser() antlr.Parser { return s.parser }

func (s *RoutingRuleContext) FunctionPrototypeExpression() IFunctionPrototypeExpressionContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IFunctionPrototypeExpressionContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IFunctionPrototypeExpressionContext)
}

func (s *RoutingRuleContext) OutboundExpr() IOutboundExprContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IOutboundExprContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IOutboundExprContext)
}

func (s *RoutingRuleContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *RoutingRuleContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *RoutingRuleContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterRoutingRule(s)
	}
}

func (s *RoutingRuleContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitRoutingRule(s)
	}
}

func (p *dae_configParser) RoutingRule() (localctx IRoutingRuleContext) {
	this := p
	_ = this

	localctx = NewRoutingRuleContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 26, dae_configParserRULE_routingRule)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.EnterOuterAlt(localctx, 1)
	{
		p.SetState(110)
		p.FunctionPrototypeExpression()
	}
	{
		p.SetState(111)
		p.Match(dae_configParserT__7)
	}
	{
		p.SetState(112)
		p.OutboundExpr()
	}

	return localctx
}

// IOutboundExprContext is an interface to support dynamic dispatch.
type IOutboundExprContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsOutboundExprContext differentiates from other interfaces.
	IsOutboundExprContext()
}

type OutboundExprContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyOutboundExprContext() *OutboundExprContext {
	var p = new(OutboundExprContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_outboundExpr
	return p
}

func (*OutboundExprContext) IsOutboundExprContext() {}

func NewOutboundExprContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *OutboundExprContext {
	var p = new(OutboundExprContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_outboundExpr

	return p
}

func (s *OutboundExprContext) GetParser() antlr.Parser { return s.parser }

func (s *OutboundExprContext) Bare_literal() IBare_literalContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IBare_literalContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IBare_literalContext)
}

func (s *OutboundExprContext) FunctionPrototype() IFunctionPrototypeContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IFunctionPrototypeContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IFunctionPrototypeContext)
}

func (s *OutboundExprContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *OutboundExprContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *OutboundExprContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterOutboundExpr(s)
	}
}

func (s *OutboundExprContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitOutboundExpr(s)
	}
}

func (p *dae_configParser) OutboundExpr() (localctx IOutboundExprContext) {
	this := p
	_ = this

	localctx = NewOutboundExprContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 28, dae_configParserRULE_outboundExpr)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(116)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 9, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(114)
			p.Bare_literal()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(115)
			p.FunctionPrototype()
		}

	}

	return localctx
}

// IFunctionPrototypeExpressionContext is an interface to support dynamic dispatch.
type IFunctionPrototypeExpressionContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsFunctionPrototypeExpressionContext differentiates from other interfaces.
	IsFunctionPrototypeExpressionContext()
}

type FunctionPrototypeExpressionContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyFunctionPrototypeExpressionContext() *FunctionPrototypeExpressionContext {
	var p = new(FunctionPrototypeExpressionContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_functionPrototypeExpression
	return p
}

func (*FunctionPrototypeExpressionContext) IsFunctionPrototypeExpressionContext() {}

func NewFunctionPrototypeExpressionContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *FunctionPrototypeExpressionContext {
	var p = new(FunctionPrototypeExpressionContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_functionPrototypeExpression

	return p
}

func (s *FunctionPrototypeExpressionContext) GetParser() antlr.Parser { return s.parser }

func (s *FunctionPrototypeExpressionContext) FunctionPrototype() IFunctionPrototypeContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IFunctionPrototypeContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IFunctionPrototypeContext)
}

func (s *FunctionPrototypeExpressionContext) FunctionPrototypeExpression() IFunctionPrototypeExpressionContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IFunctionPrototypeExpressionContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IFunctionPrototypeExpressionContext)
}

func (s *FunctionPrototypeExpressionContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *FunctionPrototypeExpressionContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *FunctionPrototypeExpressionContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterFunctionPrototypeExpression(s)
	}
}

func (s *FunctionPrototypeExpressionContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitFunctionPrototypeExpression(s)
	}
}

func (p *dae_configParser) FunctionPrototypeExpression() (localctx IFunctionPrototypeExpressionContext) {
	this := p
	_ = this

	localctx = NewFunctionPrototypeExpressionContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 30, dae_configParserRULE_functionPrototypeExpression)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(123)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 10, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(118)
			p.FunctionPrototype()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(119)
			p.FunctionPrototype()
		}
		{
			p.SetState(120)
			p.Match(dae_configParserT__8)
		}
		{
			p.SetState(121)
			p.FunctionPrototypeExpression()
		}

	}

	return localctx
}

// IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext is an interface to support dynamic dispatch.
type IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsRoutingRuleOrDeclarationOrLiteralOrExpressionListContext differentiates from other interfaces.
	IsRoutingRuleOrDeclarationOrLiteralOrExpressionListContext()
}

type RoutingRuleOrDeclarationOrLiteralOrExpressionListContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyRoutingRuleOrDeclarationOrLiteralOrExpressionListContext() *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext {
	var p = new(RoutingRuleOrDeclarationOrLiteralOrExpressionListContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_routingRuleOrDeclarationOrLiteralOrExpressionList
	return p
}

func (*RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) IsRoutingRuleOrDeclarationOrLiteralOrExpressionListContext() {
}

func NewRoutingRuleOrDeclarationOrLiteralOrExpressionListContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext {
	var p = new(RoutingRuleOrDeclarationOrLiteralOrExpressionListContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_routingRuleOrDeclarationOrLiteralOrExpressionList

	return p
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) GetParser() antlr.Parser {
	return s.parser
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) RoutingRule() IRoutingRuleContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IRoutingRuleContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IRoutingRuleContext)
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) RoutingRuleOrDeclarationOrLiteralOrExpressionList() IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext)
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) Declaration() IDeclarationContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IDeclarationContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IDeclarationContext)
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) Literal() ILiteralContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(ILiteralContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(ILiteralContext)
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) Expression() IExpressionContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IExpressionContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IExpressionContext)
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterRoutingRuleOrDeclarationOrLiteralOrExpressionList(s)
	}
}

func (s *RoutingRuleOrDeclarationOrLiteralOrExpressionListContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitRoutingRuleOrDeclarationOrLiteralOrExpressionList(s)
	}
}

func (p *dae_configParser) RoutingRuleOrDeclarationOrLiteralOrExpressionList() (localctx IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext) {
	this := p
	_ = this

	localctx = NewRoutingRuleOrDeclarationOrLiteralOrExpressionListContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 32, dae_configParserRULE_routingRuleOrDeclarationOrLiteralOrExpressionList)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(138)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 11, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(125)
			p.RoutingRule()
		}
		{
			p.SetState(126)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(128)
			p.Declaration()
		}
		{
			p.SetState(129)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}

	case 3:
		p.EnterOuterAlt(localctx, 3)
		{
			p.SetState(131)
			p.Literal()
		}
		{
			p.SetState(132)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}

	case 4:
		p.EnterOuterAlt(localctx, 4)
		{
			p.SetState(134)
			p.Expression()
		}
		{
			p.SetState(135)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}

	case 5:
		p.EnterOuterAlt(localctx, 5)

	}

	return localctx
}

// IRoutingRuleListContext is an interface to support dynamic dispatch.
type IRoutingRuleListContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsRoutingRuleListContext differentiates from other interfaces.
	IsRoutingRuleListContext()
}

type RoutingRuleListContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyRoutingRuleListContext() *RoutingRuleListContext {
	var p = new(RoutingRuleListContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_routingRuleList
	return p
}

func (*RoutingRuleListContext) IsRoutingRuleListContext() {}

func NewRoutingRuleListContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *RoutingRuleListContext {
	var p = new(RoutingRuleListContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_routingRuleList

	return p
}

func (s *RoutingRuleListContext) GetParser() antlr.Parser { return s.parser }

func (s *RoutingRuleListContext) RoutingRule() IRoutingRuleContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IRoutingRuleContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IRoutingRuleContext)
}

func (s *RoutingRuleListContext) RoutingRuleList() IRoutingRuleListContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IRoutingRuleListContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IRoutingRuleListContext)
}

func (s *RoutingRuleListContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *RoutingRuleListContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *RoutingRuleListContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterRoutingRuleList(s)
	}
}

func (s *RoutingRuleListContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitRoutingRuleList(s)
	}
}

func (p *dae_configParser) RoutingRuleList() (localctx IRoutingRuleListContext) {
	this := p
	_ = this

	localctx = NewRoutingRuleListContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 34, dae_configParserRULE_routingRuleList)

	defer func() {
		p.ExitRule()
	}()

	defer func() {
		if err := recover(); err != nil {
			if v, ok := err.(antlr.RecognitionException); ok {
				localctx.SetException(v)
				p.GetErrorHandler().ReportError(p, v)
				p.GetErrorHandler().Recover(p, v)
			} else {
				panic(err)
			}
		}
	}()

	p.SetState(144)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 12, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(140)
			p.RoutingRule()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(141)
			p.RoutingRule()
		}
		{
			p.SetState(142)
			p.RoutingRuleList()
		}

	}

	return localctx
}

func (p *dae_configParser) Sempred(localctx antlr.RuleContext, ruleIndex, predIndex int) bool {
	switch ruleIndex {
	case 5:
		var t *InputContext = nil
		if localctx != nil {
			t = localctx.(*InputContext)
		}
		return p.Input_Sempred(t, predIndex)

	case 11:
		var t *NonEmptyParameterListContext = nil
		if localctx != nil {
			t = localctx.(*NonEmptyParameterListContext)
		}
		return p.NonEmptyParameterList_Sempred(t, predIndex)

	default:
		panic("No predicate with index: " + fmt.Sprint(ruleIndex))
	}
}

func (p *dae_configParser) Input_Sempred(localctx antlr.RuleContext, predIndex int) bool {
	this := p
	_ = this

	switch predIndex {
	case 0:
		return p.Precpred(p.GetParserRuleContext(), 2)

	default:
		panic("No predicate with index: " + fmt.Sprint(predIndex))
	}
}

func (p *dae_configParser) NonEmptyParameterList_Sempred(localctx antlr.RuleContext, predIndex int) bool {
	this := p
	_ = this

	switch predIndex {
	case 1:
		return p.Precpred(p.GetParserRuleContext(), 1)

	default:
		panic("No predicate with index: " + fmt.Sprint(predIndex))
	}
}
