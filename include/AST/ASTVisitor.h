#ifndef STATICSCRIPT_AST_ASTVISITOR_H
#define STATICSCRIPT_AST_ASTVISITOR_H

#include <iostream>
#include "StaticScriptParserBaseVisitor.h"
#include "AST/Decl.h"
#include "AST/Stmt.h"
#include "AST/Type.h"
#include "AST/Expr.h"
#include "AST/Module.h"
#include "Util/Alias.h"

class ASTVisitor final : public StaticScriptParserVisitor {
public:
    explicit ASTVisitor(String filename);

    antlrcpp::Any visitModule(StaticScriptParser::ModuleContext *ctx) override;

    antlrcpp::Any visitStatements(StaticScriptParser::StatementsContext *ctx) override;

    antlrcpp::Any visitStatement(StaticScriptParser::StatementContext *ctx) override;

    antlrcpp::Any visitEmptyStatement(StaticScriptParser::EmptyStatementContext *ctx) override;

    antlrcpp::Any visitDeclarationStatement(StaticScriptParser::DeclarationStatementContext *ctx) override;

    antlrcpp::Any visitDeclaration(StaticScriptParser::DeclarationContext *ctx) override;

    antlrcpp::Any visitVariableDeclaration(StaticScriptParser::VariableDeclarationContext *ctx) override;

    antlrcpp::Any visitVariableDeclarators(StaticScriptParser::VariableDeclaratorsContext *ctx) override;

    antlrcpp::Any visitVariableModifier(StaticScriptParser::VariableModifierContext *ctx) override;

    antlrcpp::Any visitVariableDeclarator(StaticScriptParser::VariableDeclaratorContext *ctx) override;

    antlrcpp::Any visitTypeAnnotation(StaticScriptParser::TypeAnnotationContext *ctx) override;

    antlrcpp::Any visitVariableInitializer(StaticScriptParser::VariableInitializerContext *ctx) override;

    antlrcpp::Any visitBuiltinType(StaticScriptParser::BuiltinTypeContext *ctx) override;

    antlrcpp::Any visitFunctionDeclaration(StaticScriptParser::FunctionDeclarationContext *ctx) override;

    antlrcpp::Any visitParameterList(StaticScriptParser::ParameterListContext *ctx) override;

    antlrcpp::Any visitFunctionBody(StaticScriptParser::FunctionBodyContext *ctx) override;

    antlrcpp::Any visitCallExpression(StaticScriptParser::CallExpressionContext *ctx) override;

    antlrcpp::Any visitArgumentList(StaticScriptParser::ArgumentListContext *ctx) override;

    antlrcpp::Any visitCompoundStatement(StaticScriptParser::CompoundStatementContext *ctx) override;

    antlrcpp::Any visitExpressionStatement(StaticScriptParser::ExpressionStatementContext *ctx) override;

    antlrcpp::Any visitExpression(StaticScriptParser::ExpressionContext *ctx) override;

    antlrcpp::Any visitLiteral(StaticScriptParser::LiteralContext *ctx) override;

    antlrcpp::Any visitSelectionStatement(StaticScriptParser::SelectionStatementContext *ctx) override;

    antlrcpp::Any visitIfStatement(StaticScriptParser::IfStatementContext *ctx) override;

    antlrcpp::Any visitIterationStatement(StaticScriptParser::IterationStatementContext *ctx) override;

    antlrcpp::Any visitWhileStatement(StaticScriptParser::WhileStatementContext *ctx) override;

    antlrcpp::Any visitForStatement(StaticScriptParser::ForStatementContext *ctx) override;

    antlrcpp::Any visitForInit(StaticScriptParser::ForInitContext *ctx) override;

    antlrcpp::Any visitExpressionList(StaticScriptParser::ExpressionListContext *ctx) override;

    antlrcpp::Any visitJumpStatement(StaticScriptParser::JumpStatementContext *ctx) override;

    antlrcpp::Any visitContinueStatement(StaticScriptParser::ContinueStatementContext *ctx) override;

    antlrcpp::Any visitBreakStatement(StaticScriptParser::BreakStatementContext *ctx) override;

    antlrcpp::Any visitReturnStatement(StaticScriptParser::ReturnStatementContext *ctx) override;

private:
    const String filename;
};


#endif // STATICSCRIPT_AST_ASTVISITOR_H
