/*
 * SamiSimpleReferenceResource«int».h
 * 
 * 
 */

#ifndef SamiSimpleReferenceResource«int»_H_
#define SamiSimpleReferenceResource«int»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiSimpleReferenceResource«int»: public SamiObject {
public:
    SamiSimpleReferenceResource«int»();
    SamiSimpleReferenceResource«int»(String* json);
    virtual ~SamiSimpleReferenceResource«int»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSimpleReferenceResource«int»* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    String* getPName();
    void setPName(String* pName);

private:
    Integer* pId;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiSimpleReferenceResource«int»_H_ */
