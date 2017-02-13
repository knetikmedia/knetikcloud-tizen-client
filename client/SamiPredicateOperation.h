/*
 * SamiPredicateOperation.h
 * 
 * 
 */

#ifndef SamiPredicateOperation_H_
#define SamiPredicateOperation_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiExpression«object».h"
#include "SamiOperator.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiPredicateOperation: public SamiObject {
public:
    SamiPredicateOperation();
    SamiPredicateOperation(String* json);
    virtual ~SamiPredicateOperation();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPredicateOperation* fromJson(String* obj);

    IList* getPArgs();
    void setPArgs(IList* pArgs);
    SamiOperator* getPOperator();
    void setPOperator(SamiOperator* pOperator);

private:
    IList* pArgs;
SamiOperator* pOperator;
};

} /* namespace Swagger */

#endif /* SamiPredicateOperation_H_ */
