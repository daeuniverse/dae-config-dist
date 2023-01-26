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
		"", "'{'", "'}'", "':'", "'!'", "'('", "')'", "','", "'->'", "'&&'",
	}
	staticData.symbolicNames = []string{
		"", "", "", "", "", "", "", "", "", "", "WHITESPACE", "COMMENT_BLOCK",
		"COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING",
	}
	staticData.ruleNames = []string{
		"start", "bare_literal", "quote_literal", "literal", "input", "programStructureBlcok",
		"expression", "optListBlock", "declaration", "functionPrototype", "optParameterList",
		"nonEmptyParameterList", "parameter", "routingRule", "routingRuleLeft",
		"optFunctionPrototypeExpressionAnd", "functionPrototypeExpression",
		"routingRuleOrDeclarationOrLiteralOrExpressionList", "routingRuleList",
	}
	staticData.predictionContextCache = antlr.NewPredictionContextCache()
	staticData.serializedATN = []int32{
		4, 1, 15, 161, 2, 0, 7, 0, 2, 1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 7,
		4, 2, 5, 7, 5, 2, 6, 7, 6, 2, 7, 7, 7, 2, 8, 7, 8, 2, 9, 7, 9, 2, 10, 7,
		10, 2, 11, 7, 11, 2, 12, 7, 12, 2, 13, 7, 13, 2, 14, 7, 14, 2, 15, 7, 15,
		2, 16, 7, 16, 2, 17, 7, 17, 2, 18, 7, 18, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1,
		1, 2, 1, 2, 1, 3, 1, 3, 3, 3, 48, 8, 3, 1, 4, 1, 4, 1, 4, 3, 4, 53, 8,
		4, 1, 4, 1, 4, 5, 4, 57, 8, 4, 10, 4, 12, 4, 60, 9, 4, 1, 5, 1, 5, 1, 6,
		1, 6, 1, 6, 1, 6, 1, 6, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 3, 7, 74, 8, 7, 1,
		8, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8, 3, 8, 82, 8, 8, 1, 9, 3, 9, 85, 8, 9,
		1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 10, 1, 10, 3, 10, 94, 8, 10, 1, 11, 1,
		11, 1, 11, 1, 11, 1, 11, 1, 11, 5, 11, 102, 8, 11, 10, 11, 12, 11, 105,
		9, 11, 1, 12, 1, 12, 1, 12, 1, 12, 3, 12, 111, 8, 12, 1, 13, 1, 13, 1,
		13, 1, 13, 1, 14, 1, 14, 1, 14, 1, 15, 1, 15, 1, 15, 1, 15, 3, 15, 124,
		8, 15, 1, 16, 1, 16, 1, 16, 1, 16, 1, 16, 1, 16, 5, 16, 132, 8, 16, 10,
		16, 12, 16, 135, 9, 16, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17,
		1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 3, 17, 153,
		8, 17, 1, 18, 1, 18, 1, 18, 1, 18, 3, 18, 159, 8, 18, 1, 18, 0, 3, 8, 22,
		32, 19, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32,
		34, 36, 0, 1, 1, 0, 13, 14, 160, 0, 38, 1, 0, 0, 0, 2, 41, 1, 0, 0, 0,
		4, 43, 1, 0, 0, 0, 6, 47, 1, 0, 0, 0, 8, 52, 1, 0, 0, 0, 10, 61, 1, 0,
		0, 0, 12, 63, 1, 0, 0, 0, 14, 73, 1, 0, 0, 0, 16, 81, 1, 0, 0, 0, 18, 84,
		1, 0, 0, 0, 20, 93, 1, 0, 0, 0, 22, 95, 1, 0, 0, 0, 24, 110, 1, 0, 0, 0,
		26, 112, 1, 0, 0, 0, 28, 116, 1, 0, 0, 0, 30, 123, 1, 0, 0, 0, 32, 125,
		1, 0, 0, 0, 34, 152, 1, 0, 0, 0, 36, 158, 1, 0, 0, 0, 38, 39, 3, 8, 4,
		0, 39, 40, 5, 0, 0, 1, 40, 1, 1, 0, 0, 0, 41, 42, 7, 0, 0, 0, 42, 3, 1,
		0, 0, 0, 43, 44, 5, 15, 0, 0, 44, 5, 1, 0, 0, 0, 45, 48, 3, 4, 2, 0, 46,
		48, 3, 2, 1, 0, 47, 45, 1, 0, 0, 0, 47, 46, 1, 0, 0, 0, 48, 7, 1, 0, 0,
		0, 49, 50, 6, 4, -1, 0, 50, 53, 3, 10, 5, 0, 51, 53, 1, 0, 0, 0, 52, 49,
		1, 0, 0, 0, 52, 51, 1, 0, 0, 0, 53, 58, 1, 0, 0, 0, 54, 55, 10, 2, 0, 0,
		55, 57, 3, 10, 5, 0, 56, 54, 1, 0, 0, 0, 57, 60, 1, 0, 0, 0, 58, 56, 1,
		0, 0, 0, 58, 59, 1, 0, 0, 0, 59, 9, 1, 0, 0, 0, 60, 58, 1, 0, 0, 0, 61,
		62, 3, 12, 6, 0, 62, 11, 1, 0, 0, 0, 63, 64, 5, 13, 0, 0, 64, 65, 5, 1,
		0, 0, 65, 66, 3, 34, 17, 0, 66, 67, 5, 2, 0, 0, 67, 13, 1, 0, 0, 0, 68,
		69, 5, 1, 0, 0, 69, 70, 3, 34, 17, 0, 70, 71, 5, 2, 0, 0, 71, 74, 1, 0,
		0, 0, 72, 74, 1, 0, 0, 0, 73, 68, 1, 0, 0, 0, 73, 72, 1, 0, 0, 0, 74, 15,
		1, 0, 0, 0, 75, 76, 5, 13, 0, 0, 76, 77, 5, 3, 0, 0, 77, 82, 3, 32, 16,
		0, 78, 79, 5, 13, 0, 0, 79, 80, 5, 3, 0, 0, 80, 82, 3, 6, 3, 0, 81, 75,
		1, 0, 0, 0, 81, 78, 1, 0, 0, 0, 82, 17, 1, 0, 0, 0, 83, 85, 5, 4, 0, 0,
		84, 83, 1, 0, 0, 0, 84, 85, 1, 0, 0, 0, 85, 86, 1, 0, 0, 0, 86, 87, 5,
		13, 0, 0, 87, 88, 5, 5, 0, 0, 88, 89, 3, 20, 10, 0, 89, 90, 5, 6, 0, 0,
		90, 19, 1, 0, 0, 0, 91, 94, 3, 22, 11, 0, 92, 94, 1, 0, 0, 0, 93, 91, 1,
		0, 0, 0, 93, 92, 1, 0, 0, 0, 94, 21, 1, 0, 0, 0, 95, 96, 6, 11, -1, 0,
		96, 97, 3, 24, 12, 0, 97, 103, 1, 0, 0, 0, 98, 99, 10, 1, 0, 0, 99, 100,
		5, 7, 0, 0, 100, 102, 3, 24, 12, 0, 101, 98, 1, 0, 0, 0, 102, 105, 1, 0,
		0, 0, 103, 101, 1, 0, 0, 0, 103, 104, 1, 0, 0, 0, 104, 23, 1, 0, 0, 0,
		105, 103, 1, 0, 0, 0, 106, 107, 5, 13, 0, 0, 107, 108, 5, 3, 0, 0, 108,
		111, 3, 6, 3, 0, 109, 111, 3, 6, 3, 0, 110, 106, 1, 0, 0, 0, 110, 109,
		1, 0, 0, 0, 111, 25, 1, 0, 0, 0, 112, 113, 3, 28, 14, 0, 113, 114, 5, 8,
		0, 0, 114, 115, 3, 2, 1, 0, 115, 27, 1, 0, 0, 0, 116, 117, 3, 30, 15, 0,
		117, 118, 3, 32, 16, 0, 118, 29, 1, 0, 0, 0, 119, 120, 3, 32, 16, 0, 120,
		121, 5, 9, 0, 0, 121, 124, 1, 0, 0, 0, 122, 124, 1, 0, 0, 0, 123, 119,
		1, 0, 0, 0, 123, 122, 1, 0, 0, 0, 124, 31, 1, 0, 0, 0, 125, 126, 6, 16,
		-1, 0, 126, 127, 3, 18, 9, 0, 127, 133, 1, 0, 0, 0, 128, 129, 10, 1, 0,
		0, 129, 130, 5, 9, 0, 0, 130, 132, 3, 32, 16, 2, 131, 128, 1, 0, 0, 0,
		132, 135, 1, 0, 0, 0, 133, 131, 1, 0, 0, 0, 133, 134, 1, 0, 0, 0, 134,
		33, 1, 0, 0, 0, 135, 133, 1, 0, 0, 0, 136, 153, 3, 26, 13, 0, 137, 153,
		3, 16, 8, 0, 138, 153, 3, 6, 3, 0, 139, 153, 3, 12, 6, 0, 140, 141, 3,
		26, 13, 0, 141, 142, 3, 34, 17, 0, 142, 153, 1, 0, 0, 0, 143, 144, 3, 16,
		8, 0, 144, 145, 3, 34, 17, 0, 145, 153, 1, 0, 0, 0, 146, 147, 3, 6, 3,
		0, 147, 148, 3, 34, 17, 0, 148, 153, 1, 0, 0, 0, 149, 150, 3, 12, 6, 0,
		150, 151, 3, 34, 17, 0, 151, 153, 1, 0, 0, 0, 152, 136, 1, 0, 0, 0, 152,
		137, 1, 0, 0, 0, 152, 138, 1, 0, 0, 0, 152, 139, 1, 0, 0, 0, 152, 140,
		1, 0, 0, 0, 152, 143, 1, 0, 0, 0, 152, 146, 1, 0, 0, 0, 152, 149, 1, 0,
		0, 0, 153, 35, 1, 0, 0, 0, 154, 159, 3, 26, 13, 0, 155, 156, 3, 26, 13,
		0, 156, 157, 3, 36, 18, 0, 157, 159, 1, 0, 0, 0, 158, 154, 1, 0, 0, 0,
		158, 155, 1, 0, 0, 0, 159, 37, 1, 0, 0, 0, 13, 47, 52, 58, 73, 81, 84,
		93, 103, 110, 123, 133, 152, 158,
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
	dae_configParserRULE_input                                             = 4
	dae_configParserRULE_programStructureBlcok                             = 5
	dae_configParserRULE_expression                                        = 6
	dae_configParserRULE_optListBlock                                      = 7
	dae_configParserRULE_declaration                                       = 8
	dae_configParserRULE_functionPrototype                                 = 9
	dae_configParserRULE_optParameterList                                  = 10
	dae_configParserRULE_nonEmptyParameterList                             = 11
	dae_configParserRULE_parameter                                         = 12
	dae_configParserRULE_routingRule                                       = 13
	dae_configParserRULE_routingRuleLeft                                   = 14
	dae_configParserRULE_optFunctionPrototypeExpressionAnd                 = 15
	dae_configParserRULE_functionPrototypeExpression                       = 16
	dae_configParserRULE_routingRuleOrDeclarationOrLiteralOrExpressionList = 17
	dae_configParserRULE_routingRuleList                                   = 18
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
		p.SetState(38)
		p.input(0)
	}
	{
		p.SetState(39)
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
		p.SetState(41)
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
		p.SetState(43)
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

	p.SetState(47)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case dae_configParserQUOTE_STRING:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(45)
			p.Quote_literal()
		}

	case dae_configParserID, dae_configParserNON_ID:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(46)
			p.Bare_literal()
		}

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
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
	_startState := 8
	p.EnterRecursionRule(localctx, 8, dae_configParserRULE_input, _p)

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
	p.SetState(52)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 1, p.GetParserRuleContext()) {
	case 1:
		{
			p.SetState(50)
			p.ProgramStructureBlcok()
		}

	case 2:

	}
	p.GetParserRuleContext().SetStop(p.GetTokenStream().LT(-1))
	p.SetState(58)
	p.GetErrorHandler().Sync(p)
	_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 2, p.GetParserRuleContext())

	for _alt != 2 && _alt != antlr.ATNInvalidAltNumber {
		if _alt == 1 {
			if p.GetParseListeners() != nil {
				p.TriggerExitRuleEvent()
			}
			_prevctx = localctx
			localctx = NewInputContext(p, _parentctx, _parentState)
			p.PushNewRecursionContext(localctx, _startState, dae_configParserRULE_input)
			p.SetState(54)

			if !(p.Precpred(p.GetParserRuleContext(), 2)) {
				panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 2)", ""))
			}
			{
				p.SetState(55)
				p.ProgramStructureBlcok()
			}

		}
		p.SetState(60)
		p.GetErrorHandler().Sync(p)
		_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 2, p.GetParserRuleContext())
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
	p.EnterRule(localctx, 10, dae_configParserRULE_programStructureBlcok)

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
		p.SetState(61)
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
	p.EnterRule(localctx, 12, dae_configParserRULE_expression)

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
		p.SetState(63)
		p.Match(dae_configParserID)
	}
	{
		p.SetState(64)
		p.Match(dae_configParserT__0)
	}
	{
		p.SetState(65)
		p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
	}
	{
		p.SetState(66)
		p.Match(dae_configParserT__1)
	}

	return localctx
}

// IOptListBlockContext is an interface to support dynamic dispatch.
type IOptListBlockContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsOptListBlockContext differentiates from other interfaces.
	IsOptListBlockContext()
}

type OptListBlockContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyOptListBlockContext() *OptListBlockContext {
	var p = new(OptListBlockContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_optListBlock
	return p
}

func (*OptListBlockContext) IsOptListBlockContext() {}

func NewOptListBlockContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *OptListBlockContext {
	var p = new(OptListBlockContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_optListBlock

	return p
}

func (s *OptListBlockContext) GetParser() antlr.Parser { return s.parser }

func (s *OptListBlockContext) RoutingRuleOrDeclarationOrLiteralOrExpressionList() IRoutingRuleOrDeclarationOrLiteralOrExpressionListContext {
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

func (s *OptListBlockContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *OptListBlockContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *OptListBlockContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterOptListBlock(s)
	}
}

func (s *OptListBlockContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitOptListBlock(s)
	}
}

func (p *dae_configParser) OptListBlock() (localctx IOptListBlockContext) {
	this := p
	_ = this

	localctx = NewOptListBlockContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 14, dae_configParserRULE_optListBlock)

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

	p.SetState(73)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case dae_configParserT__0:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(68)
			p.Match(dae_configParserT__0)
		}
		{
			p.SetState(69)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}
		{
			p.SetState(70)
			p.Match(dae_configParserT__1)
		}

	case dae_configParserEOF:
		p.EnterOuterAlt(localctx, 2)

	default:
		panic(antlr.NewNoViableAltException(p, nil, nil, nil, nil, nil))
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

func (s *DeclarationContext) Literal() ILiteralContext {
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

	p.SetState(81)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 4, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(75)
			p.Match(dae_configParserID)
		}
		{
			p.SetState(76)
			p.Match(dae_configParserT__2)
		}
		{
			p.SetState(77)
			p.functionPrototypeExpression(0)
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(78)
			p.Match(dae_configParserID)
		}
		{
			p.SetState(79)
			p.Match(dae_configParserT__2)
		}
		{
			p.SetState(80)
			p.Literal()
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
	p.SetState(84)
	p.GetErrorHandler().Sync(p)
	_la = p.GetTokenStream().LA(1)

	if _la == dae_configParserT__3 {
		{
			p.SetState(83)
			p.Match(dae_configParserT__3)
		}

	}
	{
		p.SetState(86)
		p.Match(dae_configParserID)
	}
	{
		p.SetState(87)
		p.Match(dae_configParserT__4)
	}
	{
		p.SetState(88)
		p.OptParameterList()
	}
	{
		p.SetState(89)
		p.Match(dae_configParserT__5)
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

	p.SetState(93)
	p.GetErrorHandler().Sync(p)

	switch p.GetTokenStream().LA(1) {
	case dae_configParserID, dae_configParserNON_ID, dae_configParserQUOTE_STRING:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(91)
			p.nonEmptyParameterList(0)
		}

	case dae_configParserT__5:
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
		p.SetState(96)
		p.Parameter()
	}

	p.GetParserRuleContext().SetStop(p.GetTokenStream().LT(-1))
	p.SetState(103)
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
			p.SetState(98)

			if !(p.Precpred(p.GetParserRuleContext(), 1)) {
				panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 1)", ""))
			}
			{
				p.SetState(99)
				p.Match(dae_configParserT__6)
			}
			{
				p.SetState(100)
				p.Parameter()
			}

		}
		p.SetState(105)
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

	p.SetState(110)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 8, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(106)
			p.Match(dae_configParserID)
		}
		{
			p.SetState(107)
			p.Match(dae_configParserT__2)
		}
		{
			p.SetState(108)
			p.Literal()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(109)
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

func (s *RoutingRuleContext) RoutingRuleLeft() IRoutingRuleLeftContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IRoutingRuleLeftContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IRoutingRuleLeftContext)
}

func (s *RoutingRuleContext) Bare_literal() IBare_literalContext {
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
		p.SetState(112)
		p.RoutingRuleLeft()
	}
	{
		p.SetState(113)
		p.Match(dae_configParserT__7)
	}
	{
		p.SetState(114)
		p.Bare_literal()
	}

	return localctx
}

// IRoutingRuleLeftContext is an interface to support dynamic dispatch.
type IRoutingRuleLeftContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsRoutingRuleLeftContext differentiates from other interfaces.
	IsRoutingRuleLeftContext()
}

type RoutingRuleLeftContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyRoutingRuleLeftContext() *RoutingRuleLeftContext {
	var p = new(RoutingRuleLeftContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_routingRuleLeft
	return p
}

func (*RoutingRuleLeftContext) IsRoutingRuleLeftContext() {}

func NewRoutingRuleLeftContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *RoutingRuleLeftContext {
	var p = new(RoutingRuleLeftContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_routingRuleLeft

	return p
}

func (s *RoutingRuleLeftContext) GetParser() antlr.Parser { return s.parser }

func (s *RoutingRuleLeftContext) OptFunctionPrototypeExpressionAnd() IOptFunctionPrototypeExpressionAndContext {
	var t antlr.RuleContext
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IOptFunctionPrototypeExpressionAndContext); ok {
			t = ctx.(antlr.RuleContext)
			break
		}
	}

	if t == nil {
		return nil
	}

	return t.(IOptFunctionPrototypeExpressionAndContext)
}

func (s *RoutingRuleLeftContext) FunctionPrototypeExpression() IFunctionPrototypeExpressionContext {
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

func (s *RoutingRuleLeftContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *RoutingRuleLeftContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *RoutingRuleLeftContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterRoutingRuleLeft(s)
	}
}

func (s *RoutingRuleLeftContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitRoutingRuleLeft(s)
	}
}

func (p *dae_configParser) RoutingRuleLeft() (localctx IRoutingRuleLeftContext) {
	this := p
	_ = this

	localctx = NewRoutingRuleLeftContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 28, dae_configParserRULE_routingRuleLeft)

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
		p.SetState(116)
		p.OptFunctionPrototypeExpressionAnd()
	}
	{
		p.SetState(117)
		p.functionPrototypeExpression(0)
	}

	return localctx
}

// IOptFunctionPrototypeExpressionAndContext is an interface to support dynamic dispatch.
type IOptFunctionPrototypeExpressionAndContext interface {
	antlr.ParserRuleContext

	// GetParser returns the parser.
	GetParser() antlr.Parser

	// IsOptFunctionPrototypeExpressionAndContext differentiates from other interfaces.
	IsOptFunctionPrototypeExpressionAndContext()
}

type OptFunctionPrototypeExpressionAndContext struct {
	*antlr.BaseParserRuleContext
	parser antlr.Parser
}

func NewEmptyOptFunctionPrototypeExpressionAndContext() *OptFunctionPrototypeExpressionAndContext {
	var p = new(OptFunctionPrototypeExpressionAndContext)
	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(nil, -1)
	p.RuleIndex = dae_configParserRULE_optFunctionPrototypeExpressionAnd
	return p
}

func (*OptFunctionPrototypeExpressionAndContext) IsOptFunctionPrototypeExpressionAndContext() {}

func NewOptFunctionPrototypeExpressionAndContext(parser antlr.Parser, parent antlr.ParserRuleContext, invokingState int) *OptFunctionPrototypeExpressionAndContext {
	var p = new(OptFunctionPrototypeExpressionAndContext)

	p.BaseParserRuleContext = antlr.NewBaseParserRuleContext(parent, invokingState)

	p.parser = parser
	p.RuleIndex = dae_configParserRULE_optFunctionPrototypeExpressionAnd

	return p
}

func (s *OptFunctionPrototypeExpressionAndContext) GetParser() antlr.Parser { return s.parser }

func (s *OptFunctionPrototypeExpressionAndContext) FunctionPrototypeExpression() IFunctionPrototypeExpressionContext {
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

func (s *OptFunctionPrototypeExpressionAndContext) GetRuleContext() antlr.RuleContext {
	return s
}

func (s *OptFunctionPrototypeExpressionAndContext) ToStringTree(ruleNames []string, recog antlr.Recognizer) string {
	return antlr.TreesStringTree(s, ruleNames, recog)
}

func (s *OptFunctionPrototypeExpressionAndContext) EnterRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.EnterOptFunctionPrototypeExpressionAnd(s)
	}
}

func (s *OptFunctionPrototypeExpressionAndContext) ExitRule(listener antlr.ParseTreeListener) {
	if listenerT, ok := listener.(dae_configListener); ok {
		listenerT.ExitOptFunctionPrototypeExpressionAnd(s)
	}
}

func (p *dae_configParser) OptFunctionPrototypeExpressionAnd() (localctx IOptFunctionPrototypeExpressionAndContext) {
	this := p
	_ = this

	localctx = NewOptFunctionPrototypeExpressionAndContext(p, p.GetParserRuleContext(), p.GetState())
	p.EnterRule(localctx, 30, dae_configParserRULE_optFunctionPrototypeExpressionAnd)

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
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 9, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(119)
			p.functionPrototypeExpression(0)
		}
		{
			p.SetState(120)
			p.Match(dae_configParserT__8)
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)

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

func (s *FunctionPrototypeExpressionContext) AllFunctionPrototypeExpression() []IFunctionPrototypeExpressionContext {
	children := s.GetChildren()
	len := 0
	for _, ctx := range children {
		if _, ok := ctx.(IFunctionPrototypeExpressionContext); ok {
			len++
		}
	}

	tst := make([]IFunctionPrototypeExpressionContext, len)
	i := 0
	for _, ctx := range children {
		if t, ok := ctx.(IFunctionPrototypeExpressionContext); ok {
			tst[i] = t.(IFunctionPrototypeExpressionContext)
			i++
		}
	}

	return tst
}

func (s *FunctionPrototypeExpressionContext) FunctionPrototypeExpression(i int) IFunctionPrototypeExpressionContext {
	var t antlr.RuleContext
	j := 0
	for _, ctx := range s.GetChildren() {
		if _, ok := ctx.(IFunctionPrototypeExpressionContext); ok {
			if j == i {
				t = ctx.(antlr.RuleContext)
				break
			}
			j++
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
	return p.functionPrototypeExpression(0)
}

func (p *dae_configParser) functionPrototypeExpression(_p int) (localctx IFunctionPrototypeExpressionContext) {
	this := p
	_ = this

	var _parentctx antlr.ParserRuleContext = p.GetParserRuleContext()
	_parentState := p.GetState()
	localctx = NewFunctionPrototypeExpressionContext(p, p.GetParserRuleContext(), _parentState)
	var _prevctx IFunctionPrototypeExpressionContext = localctx
	var _ antlr.ParserRuleContext = _prevctx // TODO: To prevent unused variable warning.
	_startState := 32
	p.EnterRecursionRule(localctx, 32, dae_configParserRULE_functionPrototypeExpression, _p)

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
		p.SetState(126)
		p.FunctionPrototype()
	}

	p.GetParserRuleContext().SetStop(p.GetTokenStream().LT(-1))
	p.SetState(133)
	p.GetErrorHandler().Sync(p)
	_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 10, p.GetParserRuleContext())

	for _alt != 2 && _alt != antlr.ATNInvalidAltNumber {
		if _alt == 1 {
			if p.GetParseListeners() != nil {
				p.TriggerExitRuleEvent()
			}
			_prevctx = localctx
			localctx = NewFunctionPrototypeExpressionContext(p, _parentctx, _parentState)
			p.PushNewRecursionContext(localctx, _startState, dae_configParserRULE_functionPrototypeExpression)
			p.SetState(128)

			if !(p.Precpred(p.GetParserRuleContext(), 1)) {
				panic(antlr.NewFailedPredicateException(p, "p.Precpred(p.GetParserRuleContext(), 1)", ""))
			}
			{
				p.SetState(129)
				p.Match(dae_configParserT__8)
			}
			{
				p.SetState(130)
				p.functionPrototypeExpression(2)
			}

		}
		p.SetState(135)
		p.GetErrorHandler().Sync(p)
		_alt = p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 10, p.GetParserRuleContext())
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
	p.EnterRule(localctx, 34, dae_configParserRULE_routingRuleOrDeclarationOrLiteralOrExpressionList)

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

	p.SetState(152)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 11, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(136)
			p.RoutingRule()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(137)
			p.Declaration()
		}

	case 3:
		p.EnterOuterAlt(localctx, 3)
		{
			p.SetState(138)
			p.Literal()
		}

	case 4:
		p.EnterOuterAlt(localctx, 4)
		{
			p.SetState(139)
			p.Expression()
		}

	case 5:
		p.EnterOuterAlt(localctx, 5)
		{
			p.SetState(140)
			p.RoutingRule()
		}
		{
			p.SetState(141)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}

	case 6:
		p.EnterOuterAlt(localctx, 6)
		{
			p.SetState(143)
			p.Declaration()
		}
		{
			p.SetState(144)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}

	case 7:
		p.EnterOuterAlt(localctx, 7)
		{
			p.SetState(146)
			p.Literal()
		}
		{
			p.SetState(147)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}

	case 8:
		p.EnterOuterAlt(localctx, 8)
		{
			p.SetState(149)
			p.Expression()
		}
		{
			p.SetState(150)
			p.RoutingRuleOrDeclarationOrLiteralOrExpressionList()
		}

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
	p.EnterRule(localctx, 36, dae_configParserRULE_routingRuleList)

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

	p.SetState(158)
	p.GetErrorHandler().Sync(p)
	switch p.GetInterpreter().AdaptivePredict(p.GetTokenStream(), 12, p.GetParserRuleContext()) {
	case 1:
		p.EnterOuterAlt(localctx, 1)
		{
			p.SetState(154)
			p.RoutingRule()
		}

	case 2:
		p.EnterOuterAlt(localctx, 2)
		{
			p.SetState(155)
			p.RoutingRule()
		}
		{
			p.SetState(156)
			p.RoutingRuleList()
		}

	}

	return localctx
}

func (p *dae_configParser) Sempred(localctx antlr.RuleContext, ruleIndex, predIndex int) bool {
	switch ruleIndex {
	case 4:
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

	case 16:
		var t *FunctionPrototypeExpressionContext = nil
		if localctx != nil {
			t = localctx.(*FunctionPrototypeExpressionContext)
		}
		return p.FunctionPrototypeExpression_Sempred(t, predIndex)

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

func (p *dae_configParser) FunctionPrototypeExpression_Sempred(localctx antlr.RuleContext, predIndex int) bool {
	this := p
	_ = this

	switch predIndex {
	case 2:
		return p.Precpred(p.GetParserRuleContext(), 1)

	default:
		panic("No predicate with index: " + fmt.Sprint(predIndex))
	}
}
