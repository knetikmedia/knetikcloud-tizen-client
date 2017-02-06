/*
 * SamiResult.h
 * 
 * 
 */

#ifndef SamiResult_H_
#define SamiResult_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiResult: public SamiObject {
public:
    SamiResult();
    SamiResult(String* json);
    virtual ~SamiResult();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiResult* fromJson(String* obj);

    Integer* getPCode();
    void setPCode(Integer* pCode);
    String* getPRequestId();
    void setPRequestId(String* pRequest_id);
    SamiObject* getPResult();
    void setPResult(SamiObject* pResult);

private:
    Integer* pCode;
String* pRequest_id;
SamiObject* pResult;
};

} /* namespace Swagger */

#endif /* SamiResult_H_ */
