/*
 * SamiCartShippableResponse.h
 * 
 * 
 */

#ifndef SamiCartShippableResponse_H_
#define SamiCartShippableResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;


namespace Swagger {

class SamiCartShippableResponse: public SamiObject {
public:
    SamiCartShippableResponse();
    SamiCartShippableResponse(String* json);
    virtual ~SamiCartShippableResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCartShippableResponse* fromJson(String* obj);

    Integer* getPCartId();
    void setPCartId(Integer* pCart_id);
    Boolean* getPShippable();
    void setPShippable(Boolean* pShippable);

private:
    Integer* pCart_id;
Boolean* pShippable;
};

} /* namespace Swagger */

#endif /* SamiCartShippableResponse_H_ */
