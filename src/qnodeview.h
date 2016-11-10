#pragma once

#include "graphicsnodeview.hpp"

class QAbstractItemModel;
class GraphicsNodeScene;

class QNodeViewPrivate;

class GraphicsNode;

//TODO use  a QAbstractItemView as the base class...

class QNodeView : public GraphicsNodeView
{
    Q_OBJECT
public:
    explicit QNodeView(QWidget* parent = Q_NULLPTR);
    virtual ~QNodeView();

    void setModel(QAbstractItemModel* m);

    GraphicsNode* getNode(const QModelIndex& idx) const;

    GraphicsNodeScene* scene() const; //TODO remove

private:
    QNodeViewPrivate* d_ptr;
    Q_DECLARE_PRIVATE(QNodeView)
};