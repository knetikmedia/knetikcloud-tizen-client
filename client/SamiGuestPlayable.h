/*
 * SamiGuestPlayable.h
 * 
 * 
 */

#ifndef SamiGuestPlayable_H_
#define SamiGuestPlayable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiGuestPlayable: public SamiObject {
public:
    SamiGuestPlayable();
    SamiGuestPlayable(String* json);
    virtual ~SamiGuestPlayable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGuestPlayable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    Boolean* getPAllowed();
    void setPAllowed(Boolean* pAllowed);
    Boolean* getPLeaderboard();
    void setPLeaderboard(Boolean* pLeaderboard);

private:
    String* pDescription;
String* pType_hint;
Boolean* pAllowed;
Boolean* pLeaderboard;
};

} /* namespace Swagger */

#endif /* SamiGuestPlayable_H_ */
