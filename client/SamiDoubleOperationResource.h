/*
 * SamiDoubleOperationResource.h
 * 
 * 
 */

#ifndef SamiDoubleOperationResource_H_
#define SamiDoubleOperationResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiExpressionResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiDoubleOperationResource: public SamiObject {
public:
    SamiDoubleOperationResource();
    SamiDoubleOperationResource(String* json);
    virtual ~SamiDoubleOperationResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDoubleOperationResource* fromJson(String* obj);

    IList* getPArgs();
    void setPArgs(IList* pArgs);
    String* getPOp();
    void setPOp(String* pOp);
    String* getPType();
    void setPType(String* pType);

private:
    IList* pArgs;
String* pOp;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiDoubleOperationResource_H_ */
